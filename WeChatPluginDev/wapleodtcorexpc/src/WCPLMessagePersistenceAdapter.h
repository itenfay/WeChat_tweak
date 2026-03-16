//
// WCPLMessagePersistenceAdapter.h
//
// 本地消息入库适配：统一 AddLocalMsg* 链路选择与调用口径。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, WCPLAddLocalMsgInsertPath) {
    WCPLAddLocalMsgInsertPathNone = 0,
    WCPLAddLocalMsgInsertPathFixTimeNotifyUnique = 1,
    WCPLAddLocalMsgInsertPathFixTimeNotify = 2,
    WCPLAddLocalMsgInsertPathSimple = 3,
    WCPLAddLocalMsgInsertPathUnsupported = 4,
    WCPLAddLocalMsgInsertPathException = 5,
};

typedef struct {
    __unsafe_unretained id _Nullable messageMgr;
    __unsafe_unretained NSString * _Nullable sessionUserName;
    __unsafe_unretained id _Nullable msgWrap;
    BOOL fixTime;
    BOOL notify;
    BOOL unique;
} WCPLAddLocalMsgInsertRequest;

FOUNDATION_EXPORT NSString *WCPLAddLocalMsgInsertPathDescription(WCPLAddLocalMsgInsertPath path);
FOUNDATION_EXPORT BOOL WCPLAddLocalMsgInsert(WCPLAddLocalMsgInsertRequest request,
                                             WCPLAddLocalMsgInsertPath * _Nullable pathOut);

NS_ASSUME_NONNULL_END

