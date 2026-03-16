//
// WCPLMessagePersistenceAdapter.m
//

#import "WCPLMessagePersistenceAdapter.h"

#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"

#import <objc/message.h>

NSString *WCPLAddLocalMsgInsertPathDescription(WCPLAddLocalMsgInsertPath path) {
    switch (path) {
        case WCPLAddLocalMsgInsertPathFixTimeNotifyUnique:
            return @"AddLocalMsg_fixTime_notify_unique";
        case WCPLAddLocalMsgInsertPathFixTimeNotify:
            return @"AddLocalMsg_fixTime_notify";
        case WCPLAddLocalMsgInsertPathSimple:
            return @"AddLocalMsg_simple";
        case WCPLAddLocalMsgInsertPathUnsupported:
            return @"unsupported";
        case WCPLAddLocalMsgInsertPathException:
            return @"exception";
        case WCPLAddLocalMsgInsertPathNone:
        default:
            return @"none";
    }
}

BOOL WCPLAddLocalMsgInsert(WCPLAddLocalMsgInsertRequest request,
                           WCPLAddLocalMsgInsertPath *pathOut) {
    if (pathOut) {
        *pathOut = WCPLAddLocalMsgInsertPathNone;
    }

    NSString *session = WCPLTrimText(request.sessionUserName);
    if (!(request.messageMgr && session.length > 0 && request.msgWrap)) {
        if (pathOut) {
            *pathOut = WCPLAddLocalMsgInsertPathUnsupported;
        }
        return NO;
    }

    id messageMgr = request.messageMgr;
    id msgWrap = request.msgWrap;

    @try {
        SEL uniqueSel = @selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:Unique:);
        if (request.unique && [messageMgr respondsToSelector:uniqueSel]) {
            ((void (*)(id, SEL, id, id, BOOL, BOOL, BOOL))objc_msgSend)(messageMgr,
                                                                        uniqueSel,
                                                                        session,
                                                                        msgWrap,
                                                                        request.fixTime,
                                                                        request.notify,
                                                                        request.unique);
            if (pathOut) {
                *pathOut = WCPLAddLocalMsgInsertPathFixTimeNotifyUnique;
            }
            return YES;
        }

        SEL fixTimeSel = @selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:);
        if ([messageMgr respondsToSelector:fixTimeSel]) {
            ((void (*)(id, SEL, id, id, BOOL, BOOL))objc_msgSend)(messageMgr,
                                                                  fixTimeSel,
                                                                  session,
                                                                  msgWrap,
                                                                  request.fixTime,
                                                                  request.notify);
            if (pathOut) {
                *pathOut = WCPLAddLocalMsgInsertPathFixTimeNotify;
            }
            return YES;
        }

        SEL simpleSel = @selector(AddLocalMsg:MsgWrap:);
        if ([messageMgr respondsToSelector:simpleSel]) {
            ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr, simpleSel, session, msgWrap);
            if (pathOut) {
                *pathOut = WCPLAddLocalMsgInsertPathSimple;
            }
            return YES;
        }

        // 兜底：只有 Unique 版本存在时（且业务未要求 unique），仍尝试调用以完成入库。
        if (!request.unique && [messageMgr respondsToSelector:uniqueSel]) {
            ((void (*)(id, SEL, id, id, BOOL, BOOL, BOOL))objc_msgSend)(messageMgr,
                                                                        uniqueSel,
                                                                        session,
                                                                        msgWrap,
                                                                        request.fixTime,
                                                                        request.notify,
                                                                        NO);
            if (pathOut) {
                *pathOut = WCPLAddLocalMsgInsertPathFixTimeNotifyUnique;
            }
            return YES;
        }
    } @catch (NSException *exception) {
        WCPLCatchLog(exception);
        WCPLLogWarning(@"[入库] AddLocalMsg 异常: session=%@ reason=%@",
                       session,
                       exception.reason ?: exception);
        if (pathOut) {
            *pathOut = WCPLAddLocalMsgInsertPathException;
        }
        return NO;
    }

    if (pathOut) {
        *pathOut = WCPLAddLocalMsgInsertPathUnsupported;
    }
    return NO;
}
