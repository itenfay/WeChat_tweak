#import "WCPLRevokePersistenceAdapter.h"

#import "WCPLMessagePersistenceAdapter.h"
#import "WCPLLogger.h"
#import "WCPLWeChatMessageHeaders.h"
#import <objc/message.h>
#import <objc/runtime.h>

static BOOL wcpl_revokePersistenceIsMessageWrap(id obj) {
    return obj &&
           [obj respondsToSelector:@selector(m_uiMesLocalID)] &&
           [obj respondsToSelector:@selector(m_uiCreateTime)] &&
           [obj respondsToSelector:@selector(setM_uiCreateTime:)] &&
           [obj respondsToSelector:@selector(setM_uiSvrCreateTime:)] &&
           [obj respondsToSelector:@selector(setM_sequenceId:)];
}

static CMessageWrap *wcpl_revokeFetchStoredWrap(id messageMgr,
                                                NSString *session,
                                                CMessageWrap *msgWrap) {
    if (!messageMgr || !wcpl_revokePersistenceIsMessageWrap(msgWrap) || msgWrap.m_uiMesLocalID == 0) {
        return msgWrap;
    }
    if (![messageMgr respondsToSelector:@selector(GetMsg:LocalID:)]) {
        return msgWrap;
    }

    @try {
        id fetchedWrap = [messageMgr GetMsg:session LocalID:msgWrap.m_uiMesLocalID];
        if (wcpl_revokePersistenceIsMessageWrap(fetchedWrap)) {
            return (CMessageWrap *)fetchedWrap;
        }
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[防撤回] 取回本地提示失败: session=%@ local=%u reason=%@",
                       session,
                       msgWrap.m_uiMesLocalID,
                       exception.reason ?: exception);
    }

    return msgWrap;
}

static void wcpl_revokeResetResortState(CMessageWrap *msgWrap) {
    if (!wcpl_revokePersistenceIsMessageWrap(msgWrap)) return;
    if (![msgWrap respondsToSelector:@selector(setM_hasResorted:)]) return;

    @try {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(msgWrap, @selector(setM_hasResorted:), NO);
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[防撤回] 重置重排标记失败: local=%u reason=%@",
                       msgWrap.m_uiMesLocalID,
                       exception.reason ?: exception);
    }
}

static void wcpl_revokeNotifyAsyncModMsg(id messageMgr,
                                         NSString *session,
                                         CMessageWrap *storedWrap) {
    if (!messageMgr || ![messageMgr respondsToSelector:@selector(AsyncOnModMsg:MsgWrap:)]) {
        return;
    }

    @try {
        [messageMgr AsyncOnModMsg:session MsgWrap:storedWrap];
        WCPLLogInfo(@"[防撤回] AsyncOnModMsg 刷新成功: local=%u", storedWrap.m_uiMesLocalID);
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[防撤回] AsyncOnModMsg 刷新失败: session=%@ local=%u reason=%@",
                       session,
                       storedWrap.m_uiMesLocalID,
                       exception.reason ?: exception);
    }
}

void WCPLApplyRevokeAnchorFieldsToWrap(CMessageWrap *msgWrap,
                                       WCPLRevokeAnchorFields anchorFields) {
    if (!wcpl_revokePersistenceIsMessageWrap(msgWrap)) return;

    msgWrap.m_uiCreateTime = anchorFields.createTime;
    msgWrap.m_uiSvrCreateTime = anchorFields.svrCreateTime;
    msgWrap.m_sequenceId = anchorFields.sequenceId;
}

BOOL WCPLInsertAnchoredRevokeTipMessage(id messageMgr,
                                        NSString *session,
                                        NSString *tipText,
                                        WCPLRevokeAnchorFields anchorFields) {
    if (!messageMgr || ![session isKindOfClass:[NSString class]] || session.length == 0) return NO;
    if (![tipText isKindOfClass:[NSString class]] || tipText.length == 0) return NO;

    Class messageWrapClass = objc_lookUpClass("CMessageWrap");
    if (!messageWrapClass || ![messageWrapClass respondsToSelector:@selector(alloc)]) {
        return NO;
    }

    CMessageWrap *msgWrap = [[messageWrapClass alloc] initWithMsgType:0x2710];
    if (!wcpl_revokePersistenceIsMessageWrap(msgWrap)) return NO;

    [msgWrap setM_uiStatus:0x4];
    [msgWrap setM_nsContent:tipText];
    WCPLApplyRevokeAnchorFieldsToWrap(msgWrap, anchorFields);
    [msgWrap setM_nsToUsr:session];
    [msgWrap setM_nsFromUsr:session];

    if ([msgWrap respondsToSelector:@selector(setM_nsRealChatUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsRealChatUsr:), nil);
        } @catch (__unused NSException *exceptionRealUsr) {
            WCPLCatchLog(exceptionRealUsr);
        }
    }

    WCPLAddLocalMsgInsertPath insertPath = WCPLAddLocalMsgInsertPathNone;
    BOOL inserted = WCPLAddLocalMsgInsert((WCPLAddLocalMsgInsertRequest){
                                              .messageMgr = messageMgr,
                                              .sessionUserName = session,
                                              .msgWrap = msgWrap,
                                              .fixTime = YES,
                                              .notify = NO,
                                              .unique = YES,
                                          },
                                          &insertPath);
    if (!inserted) {
        WCPLLogWarning(@"[防撤回] 本地提示入库失败: path=%@ session=%@",
                       WCPLAddLocalMsgInsertPathDescription(insertPath),
                       session);
        return NO;
    }

    WCPLPersistRevokeAnchorFields(messageMgr, session, msgWrap, anchorFields);
    WCPLLogInfo(@"[防撤回] 本地提示入库成功: path=%@ local=%u svr=%llu create=%u svrCreate=%u seq=%u",
                WCPLAddLocalMsgInsertPathDescription(insertPath),
                msgWrap.m_uiMesLocalID,
                (unsigned long long)msgWrap.m_n64MesSvrID,
                msgWrap.m_uiCreateTime,
                msgWrap.m_uiSvrCreateTime,
                msgWrap.m_sequenceId);
    return YES;
}

void WCPLPersistRevokeAnchorFields(id messageMgr,
                                   NSString *session,
                                   CMessageWrap *msgWrap,
                                   WCPLRevokeAnchorFields anchorFields) {
    if (!messageMgr || ![session isKindOfClass:[NSString class]] || session.length == 0) return;
    if (!wcpl_revokePersistenceIsMessageWrap(msgWrap) || msgWrap.m_uiMesLocalID == 0) return;

    CMessageWrap *storedWrap = wcpl_revokeFetchStoredWrap(messageMgr, session, msgWrap);

    WCPLApplyRevokeAnchorFieldsToWrap(msgWrap, anchorFields);
    WCPLApplyRevokeAnchorFieldsToWrap(storedWrap, anchorFields);
    wcpl_revokeResetResortState(msgWrap);
    wcpl_revokeResetResortState(storedWrap);

    if (![messageMgr respondsToSelector:@selector(ModMsg:MsgWrap:)]) {
        return;
    }

    @try {
        [messageMgr ModMsg:session MsgWrap:storedWrap];
        wcpl_revokeNotifyAsyncModMsg(messageMgr, session, storedWrap);
        WCPLLogInfo(@"[防撤回] 本地提示重锚成功: local=%u create=%u svrCreate=%u seq=%u",
                    storedWrap.m_uiMesLocalID,
                    storedWrap.m_uiCreateTime,
                    storedWrap.m_uiSvrCreateTime,
                    storedWrap.m_sequenceId);
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[防撤回] 本地提示重锚失败: session=%@ local=%u reason=%@",
                       session,
                       storedWrap.m_uiMesLocalID,
                       exception.reason ?: exception);
    }
}
