//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFeedStreamConnectMicUserInfoView;

@interface MMFinderLiveFeedStreamMicLogic
{
    MMFinderLiveFeedStreamConnectMicUserInfoView *_micContainerView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveFeedStreamConnectMicUserInfoView *micContainerView; // @synthesize micContainerView=_micContainerView;
- (void)updateMicUserHeatValuesInMicInfo:(id)arg1;
- (void)updateMicUsersInMicInfo:(id)arg1;
- (void)updateViewsAfterMicUsersInfoSeatNameChanged:(_Bool)arg1;
- (void)updateAudioRoomMicViewsWithUIChangeType:(unsigned long long)arg1;
- (void)updateAudioRoomInfoView;
- (void)handleAudioRoomSEIMicMsgInfoUpdated:(id)arg1 listChanged:(_Bool)arg2;
- (void)handleAudioRoomSceneChangedTo:(unsigned long long)arg1;
- (id)currentAnchorFinderUserName;
- (id)feedStreamTask;
- (void)handleOtherRoomMicAnchorIsAudioModeChanged:(id)arg1;
- (void)updateConnectMicUsersInfoForCDNUser;
- (void)checkAndShowConnectMicVideoOperationView;
- (void)checkAndUpdateLiveView;
- (void)updateUserPkStateUI;
- (void)updateCurrentAnchorViewWhenPureAudioModeChanged;
- (void)updateMicViewUserStatusUIWithChangeType:(unsigned long long)arg1;
- (void)checkConnectMicUsersStatusForCdnAudience;
- (void)handleSEIMicMsgInfoUpdated:(id)arg1 listChanged:(_Bool)arg2;

@end

