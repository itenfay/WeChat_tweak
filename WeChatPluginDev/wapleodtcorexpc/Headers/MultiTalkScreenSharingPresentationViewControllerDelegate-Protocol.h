//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MultiTalkScreenSharingPresentationViewController;

@protocol MultiTalkScreenSharingPresentationViewControllerDelegate <NSObject>

@optional
- (void)screenSharingPresentationViewControllerWillDismiss:(MultiTalkScreenSharingPresentationViewController *)arg1;
- (void)screenSharingPresentationViewController:(MultiTalkScreenSharingPresentationViewController *)arg1 viewDidTransitionToSize:(struct CGSize)arg2;
- (void)screenSharingPresentationViewController:(MultiTalkScreenSharingPresentationViewController *)arg1 viewWillTransitionToSize:(struct CGSize)arg2;
- (void)screenSharingPresentationViewController:(MultiTalkScreenSharingPresentationViewController *)arg1 didClickSpeakerButton:(_Bool)arg2;
- (void)screenSharingPresentationViewController:(MultiTalkScreenSharingPresentationViewController *)arg1 didClickMicrophoneButton:(_Bool)arg2;
- (void)screenSharingPresentationViewController:(MultiTalkScreenSharingPresentationViewController *)arg1 didClickPenButton:(_Bool)arg2;
- (void)screenSharingPresentationViewControllerDidResumeSharing:(MultiTalkScreenSharingPresentationViewController *)arg1;
- (void)screenSharingPresentationViewControllerDidPauseSharing:(MultiTalkScreenSharingPresentationViewController *)arg1;
- (void)screenSharingPresentationViewControllerDidStopSharing:(MultiTalkScreenSharingPresentationViewController *)arg1;
- (void)screenSharingPresentationViewControllerDidStartSharing:(MultiTalkScreenSharingPresentationViewController *)arg1;
@end

