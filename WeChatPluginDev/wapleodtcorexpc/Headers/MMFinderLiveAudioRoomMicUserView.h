//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveAudioRoomMicUserView
{
    _Bool _forceShowPersonIcon;
}

@property(nonatomic) _Bool forceShowPersonIcon; // @synthesize forceShowPersonIcon=_forceShowPersonIcon;
- (void)redPacketViewModel:(id)arg1 hiddenDidChange:(_Bool)arg2;
- (void)updateViewAfterMicMutedStatusChanged;
- (void)updateViewAfterTalkingStatusChanged;
- (void)updateViewAfterSeatNameChanged;
- (void)updateMicUserInfo:(id)arg1 seatInfo:(id)arg2 isAdminMode:(_Bool)arg3 audioRoomScene:(unsigned long long)arg4 locationName:(id)arg5 showLocation:(_Bool)arg6 showPersonIcon:(_Bool)arg7;
- (void)onTapHeatValue;
- (_Bool)shouldCreateRedPacketView;
- (void)updateSeatNameLabelHiddenAndText;
- (id)tagViewBackgroundColor;
- (id)tagViewShadowColor;
- (void)layoutTitleLabelAndMicMutedButton;
- (void)configTitleLabelAndMicMutedButton;
- (void)updateMicMutedButtonHidden;
- (void)onClickMicMutedButton;
- (void)updateTitleLabelText;
- (void)layoutUserAvatarView;
- (void)configUserAvatarView;
- (void)updateUserAvatarViewImageAndHidden;
- (void)layoutSeatSlotViews;
- (id)getIconImageForSeatSlot;
- (void)configSeatSlotViews;
- (void)layoutAvatarContainerView;
- (_Bool)shouldForceStopAudioWaveAnimation;
- (void)handleTapGesture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

