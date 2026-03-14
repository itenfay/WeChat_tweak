//
// WCPLMessageActionAdapter.h
//
// 消息动作适配层，统一发送、转发、删除、撤回等入口。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT id _Nullable WCPLMessageActionAdapterMessageManager(void);
FOUNDATION_EXPORT id _Nullable WCPLMessageActionAdapterSendMessageManager(void);
FOUNDATION_EXPORT id _Nullable WCPLMessageActionAdapterForwardManager(void);
FOUNDATION_EXPORT id _Nullable WCPLMessageActionAdapterResolveEmoticonWrap(id _Nullable messageWrap,
                                                                           NSString * _Nullable emoticonMD5);
FOUNDATION_EXPORT BOOL WCPLMessageActionAdapterSendEmoticon(id _Nullable emoticonWrap,
                                                            id _Nullable logicController,
                                                            id _Nullable chatController);
FOUNDATION_EXPORT BOOL WCPLMessageActionAdapterDeleteMessage(NSString * _Nullable chatName,
                                                             id _Nullable messageWrap);
FOUNDATION_EXPORT BOOL WCPLMessageActionAdapterRevokeMessage(NSString * _Nullable chatName,
                                                             id _Nullable messageWrap,
                                                             unsigned int counter);
FOUNDATION_EXPORT BOOL WCPLMessageActionAdapterForwardMessage(id _Nullable messageWrap,
                                                              id _Nullable fromViewController,
                                                              id _Nullable contact,
                                                              NSString * __autoreleasing _Nullable * _Nullable routeUsedOut);

NS_ASSUME_NONNULL_END
