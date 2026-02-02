//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController, WAAppMsgItem, WAShareAppMessageForwardLogicControllerComponent;

@protocol WAShareAppMessageForwardLogicControllerComponentDelegate <NSObject>
- (UIViewController *)viewControllerForForwardLogicControllerToShow:(WAShareAppMessageForwardLogicControllerComponent *)arg1;

@optional
- (void)onWAShareAppMessageForwardLogicControllerComponent_WeAppMessageSend:(WAShareAppMessageForwardLogicControllerComponent *)arg1 appMsgItem:(WAAppMsgItem *)arg2;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSelectSession:(WAShareAppMessageForwardLogicControllerComponent *)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageException:(WAShareAppMessageForwardLogicControllerComponent *)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_ConfirmCanceled:(WAShareAppMessageForwardLogicControllerComponent *)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageCancel:(WAShareAppMessageForwardLogicControllerComponent *)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSend:(WAShareAppMessageForwardLogicControllerComponent *)arg1;
@end

