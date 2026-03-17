//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConnectMicAllUserInfoView, MMFinderLiveConnectMicPkUser, MMFinderLiveConnectMicSeatBaseInfo, MMFinderLiveConnectMicUser, NSString, UIView;
@protocol MMFinderLiveConnectMicOperationViewBase;

@protocol MMFinderLiveConnectMicAllUserInfoViewDelegate <NSObject>

@optional
- (void)onMMFinderLiveConnectMicAllUserInfoViewHiddenStateDidChange:(MMFinderLiveConnectMicAllUserInfoView *)arg1;
- (void)onMMFinderLiveConnectMicAllUserInfoViewTapCurrentAnchorMuteMicButton;
- (void)onMMFinderLiveConnectMicAllUserInfoViewPkHeatViewTappedForPkUser:(MMFinderLiveConnectMicPkUser *)arg1;
- (void)onMMFinderLiveConnectMicAllUserInfoViewGiftingRequestedWithPreferredGiftId:(NSString *)arg1;
- (_Bool)shouldMMFinderLiveConnectMicAllUserInfoDisableStartPkAnimation:(NSString *)arg1;
- (void)onMMFinderLiveConnectMicAllUserInfoPkStatusChange:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)onMMFinderLiveConnectMicAllUserInfoSeatViewTappedWithMicSeatInfo:(MMFinderLiveConnectMicSeatBaseInfo *)arg1;
- (void)onMMFinderLiveConnectMicAllUserInfoViewTapVote;
- (void)onMMFinderLiveConnectMicAllUserInfoViewUpdatedConnectMicUserList;
- (void)onMMFinderLiveConnectMicAllUserInfoViewUpdatedWidgets;
- (void)onMMFinderLiveConnectMicAllUserInfoViewTapAcceptPk;
- (void)onMMFinderLiveConnectMicAllUserInfoViewTapUserAreaWithUserInfo:(MMFinderLiveConnectMicUser *)arg1 targetMicOperationView:(UIView<MMFinderLiveConnectMicOperationViewBase> *)arg2 isAvatarTapped:(_Bool)arg3;
- (void)onMMFinderLiveConnectMicAllUserInfoViewUnmuteMicWithUserInfo:(MMFinderLiveConnectMicUser *)arg1;
@end

