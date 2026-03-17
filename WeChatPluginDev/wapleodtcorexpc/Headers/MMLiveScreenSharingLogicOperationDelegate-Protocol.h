//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveOperationViewModel, MMLiveScreenSharingLogic, MMLiveScreenSharingViewController;

@protocol MMLiveScreenSharingLogicOperationDelegate <NSObject>

@optional
- (MMFinderLiveOperationViewModel *)operationViewModelForPresentingScreenSharing:(MMLiveScreenSharingLogic *)arg1;
- (void)screenSharingLogic:(MMLiveScreenSharingLogic *)arg1 didStopSharingInViewController:(MMLiveScreenSharingViewController *)arg2;
- (void)screenSharingLogic:(MMLiveScreenSharingLogic *)arg1 didStartSharingInViewController:(MMLiveScreenSharingViewController *)arg2;
@end

