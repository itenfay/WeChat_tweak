//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConnectMicPkUser, MMFinderLiveConnectMicUser, UIView;
@protocol MMFinderLiveConnectMicOperationViewBase;

@protocol MMFinderLiveConnectMicOperationViewDelegate <NSObject>
- (struct CGRect)onMMFinderLiveConnectMicOperationViewNormalizedFrameAspectRatioConversionRequested:(struct CGRect)arg1;

@optional
- (void)onMMFinderLiveConnectMicOperationViewTapCurrentAnchorMuteMicButton;
- (void)onMMFinderLiveConnectMicOperationViewPkHeatViewTappedForPkUser:(MMFinderLiveConnectMicPkUser *)arg1;
- (void)onMMFinderLiveConnectMicOperationViewMicModeGiftNotificationViewShowingChanged;
- (void)onMMFinderLiveConnectMicOperationViewHeatValueViewUpdateLayout;
- (void)onMMFinderLiveConnectMicOperationViewTapAcceptPk;
- (void)onMMFinderLiveConnectMicOperationViewTapMicMutedButtonWithUserInfo:(MMFinderLiveConnectMicUser *)arg1;
- (void)onMMFinderLiveConnectMicOperationViewTapVote;
- (void)onMMFinderLiveConnectMicOperationViewTapBackgroundWithUserInfo:(MMFinderLiveConnectMicUser *)arg1 targetMicOperationView:(UIView<MMFinderLiveConnectMicOperationViewBase> *)arg2;
- (void)onMMFinderLiveConnectMicOperationViewTapAvatarWithUserInfo:(MMFinderLiveConnectMicUser *)arg1 targetMicOperationView:(UIView<MMFinderLiveConnectMicOperationViewBase> *)arg2;
@end

