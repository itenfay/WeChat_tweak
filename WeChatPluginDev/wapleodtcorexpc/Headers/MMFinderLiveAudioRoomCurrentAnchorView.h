//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderContact;

@interface MMFinderLiveAudioRoomCurrentAnchorView
{
    WCFinderContact *_anchorContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
- (void)updateAudioRoomScene:(unsigned long long)arg1;
- (void)updateMicUserInfo:(id)arg1 locationName:(id)arg2 showLocation:(_Bool)arg3;
- (void)updateAnchorContact:(id)arg1;
- (void)configWithAnchorContact:(id)arg1;
- (void)onTapHeatValue;
- (void)updateSeatNameLabelHiddenAndText;
- (id)tagViewShadowColor;
- (id)tagLabelTextColor;
- (void)updateAnchorMicMutedButtonHiddenWithLayoutFlag:(_Bool)arg1;
- (void)updateAnchorMicMutedButtonHidden;
- (void)onClickMicMutedButton;
- (void)layoutTitleLabelAndMicMutedButton;
- (void)configTitleLabelAndMicMutedButton;
- (void)updateTitleLabelText;
- (void)layoutUserAvatarView;
- (void)configUserAvatarView;
- (void)layoutAvatarContainerView;
- (void)handleTapGesture:(id)arg1;

@end

