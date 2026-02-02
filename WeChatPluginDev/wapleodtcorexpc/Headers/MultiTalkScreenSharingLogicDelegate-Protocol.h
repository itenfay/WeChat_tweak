//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"
#import "NSObject-Protocol.h"

@class MultiTalkScreenSharingBaseViewController, MultiTalkScreenSharingLogic;

@protocol MultiTalkScreenSharingLogicDelegate <MMUIViewControllerDelegate, NSObject>
- (id)groupForScreenSharingLogic;

@optional
- (void)screenSharingLogic:(MultiTalkScreenSharingLogic *)arg1 didTransiteSharingInViewController:(MultiTalkScreenSharingBaseViewController *)arg2;
- (void)screenSharingLogic:(MultiTalkScreenSharingLogic *)arg1 willTransiteSharingInViewController:(MultiTalkScreenSharingBaseViewController *)arg2;
- (void)screenSharingLogic:(MultiTalkScreenSharingLogic *)arg1 didResumeSharingInViewController:(MultiTalkScreenSharingBaseViewController *)arg2;
- (void)screenSharingLogic:(MultiTalkScreenSharingLogic *)arg1 didPauseSharingInViewController:(MultiTalkScreenSharingBaseViewController *)arg2;
- (void)screenSharingLogic:(MultiTalkScreenSharingLogic *)arg1 didStopSharingInViewController:(MultiTalkScreenSharingBaseViewController *)arg2;
- (void)screenSharingLogic:(MultiTalkScreenSharingLogic *)arg1 didStartSharingInViewController:(MultiTalkScreenSharingBaseViewController *)arg2;
@end

