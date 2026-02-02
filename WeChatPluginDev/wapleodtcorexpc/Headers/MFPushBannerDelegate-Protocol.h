//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIViewController;

@protocol MFPushBannerDelegate
- (void)onHidePushBanner;
- (void)onShowPushBanner;
- (void)openContactInfo:(NSString *)arg1;
- (void)PopViewController;
- (void)PushViewController:(UIViewController *)arg1;
@end

