//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIViewController;

@protocol NavigateLogicControllerDelegate <NSObject>
- (_Bool)canShowShareLocationMsgToDevice;

@optional
- (void)onShareLocationMsgToDevice;
- (void)onOpenWeAppWithPara:(NSDictionary *)arg1;
- (void)onPushViewController:(UIViewController *)arg1 Animated:(_Bool)arg2;
- (void)onPresentViewControlelr:(UIViewController *)arg1 Animated:(_Bool)arg2;
- (void)onStopLoading;
- (void)onStartLoading;
@end

