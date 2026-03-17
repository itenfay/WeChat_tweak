//
// WCPLMessageAdapter.h
//
// 消息域适配层，统一聊天控制器上下文访问入口。
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT id _Nullable WCPLMessageAdapterChatContact(id _Nullable controller);
FOUNDATION_EXPORT NSString * _Nullable WCPLMessageAdapterChatUserName(id _Nullable controller);
FOUNDATION_EXPORT NSString * _Nullable WCPLMessageAdapterCurrentChatName(id _Nullable controller);
FOUNDATION_EXPORT id _Nullable WCPLMessageAdapterLogicController(id _Nullable controller);
FOUNDATION_EXPORT id _Nullable WCPLMessageAdapterToolView(id _Nullable controller);
FOUNDATION_EXPORT id _Nullable WCPLMessageAdapterCurrentLogicController(void);
FOUNDATION_EXPORT NSString * _Nullable WCPLMessageAdapterInputTextFromToolView(id _Nullable toolView);
FOUNDATION_EXPORT UIView * _Nullable WCPLMessageAdapterLoadedChatView(id _Nullable controller);
FOUNDATION_EXPORT UINavigationController * _Nullable WCPLMessageAdapterNavigationController(id _Nullable controller);
FOUNDATION_EXPORT NSUInteger WCPLMessageAdapterNavigationDepth(id _Nullable controller);
FOUNDATION_EXPORT BOOL WCPLMessageAdapterIsOnNavigationStack(id _Nullable controller);

NS_ASSUME_NONNULL_END
