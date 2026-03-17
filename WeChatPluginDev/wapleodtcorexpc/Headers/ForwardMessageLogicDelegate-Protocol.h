//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageAttr, ForwardMessageLogicController, NSString, OpenSDKAppBrandItem, UIViewController, WAAppMsgItem;

@protocol ForwardMessageLogicDelegate <NSObject>
- (UIViewController *)getCurrentViewController;

@optional
- (EditImageAttr *)getEditImageAttr;
- (_Bool)OnForwardMessageNeedCancelConfirm:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageFailUpdate:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageConfirmCanceled:(ForwardMessageLogicController *)arg1;
- (void)OnForwardAppBrandMessageSend:(NSString *)arg1 appMsgItem:(OpenSDKAppBrandItem *)arg2;
- (void)OnForwardWeAppMessageSend:(NSString *)arg1 appMsgItem:(WAAppMsgItem *)arg2;
- (void)OnForwardMessageStayAtWeChat:(ForwardMessageLogicController *)arg1;
- (_Bool)shouldShowSendSuccessView:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageSelectSession:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageBackToApp:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageException:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageCancel:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageSend:(ForwardMessageLogicController *)arg1;
- (void)OnForwardMessageBeforeDismiss:(ForwardMessageLogicController *)arg1;
@end

