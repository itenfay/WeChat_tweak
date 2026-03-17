#import "WCPLQuitMonitorMessageAdapter.h"

#import "WCPLMessagePersistenceAdapter.h"
#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"
#import "WCPLServiceCenterAdapter.h"
#import "WCPLWeChatMessageHeaders.h"
#import <objc/runtime.h>

static CMessageWrap *wcpl_qm_createMessageWrap(NSString *session, NSString *content) {
    NSString *trimmedSession = WCPLTrimText(session);
    NSString *trimmedContent = WCPLTrimText(content);
    if (trimmedSession.length == 0 || trimmedContent.length == 0) {
        return nil;
    }

    Class messageWrapClass = objc_lookUpClass("CMessageWrap");
    CMessageWrap *messageWrap = [[messageWrapClass alloc] initWithMsgType:10000];
    if (!messageWrap) {
        return nil;
    }

    unsigned int createTime = (unsigned int)[[NSDate date] timeIntervalSince1970];
    [messageWrap setM_uiStatus:4];
    [messageWrap setM_nsContent:trimmedContent];
    [messageWrap setM_uiCreateTime:createTime];
    [messageWrap setM_nsToUsr:trimmedSession];
    [messageWrap setM_nsFromUsr:trimmedSession];
    return messageWrap;
}

BOOL WCPLQuitMonitorInsertLocalSystemTip(NSString *session, NSString *content) {
    NSString *trimmedSession = WCPLTrimText(session);
    NSString *trimmedContent = WCPLTrimText(content);
    if (trimmedSession.length == 0 || trimmedContent.length == 0) {
        return NO;
    }

    id messageManager = WCPLServiceCenterAdapterGetServiceNamed(@"CMessageMgr");
    CMessageWrap *messageWrap = wcpl_qm_createMessageWrap(trimmedSession, trimmedContent);
    if (!(messageManager && messageWrap)) {
        return NO;
    }

    WCPLAddLocalMsgInsertPath insertPath = WCPLAddLocalMsgInsertPathNone;
    BOOL inserted = WCPLAddLocalMsgInsert((WCPLAddLocalMsgInsertRequest){
                                              .messageMgr = messageManager,
                                              .sessionUserName = trimmedSession,
                                              .msgWrap = messageWrap,
                                              .fixTime = YES,
                                              .notify = NO,
                                              .unique = NO,
                                          },
                                          &insertPath);
    if (!inserted) {
        WCPLLogWarning(@"[退群监控] 本地提示入库失败: session=%@ path=%@",
                       trimmedSession,
                       WCPLAddLocalMsgInsertPathDescription(insertPath));
    }
    return inserted;
}
