//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveAudioRoomMicAudioAnimationView, UIColor, UIImageView, UIView, WCFinderLiveHomePageEntertainmentTeamupAudioRoomAvatarInfo;

@interface WCFinderLiveHomePageEntertainmentTeamupAudioRoomAvatarView
{
    _Bool _userIsTalking;
    UIView *_imageContainerView;
    UIView *_cameraContainerView;
    UIImageView *_cameraImageView;
    MMFinderLiveAudioRoomMicAudioAnimationView *_audioAnimationView;
    UIColor *_audioWaveColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *audioWaveColor; // @synthesize audioWaveColor=_audioWaveColor;
@property(nonatomic) _Bool userIsTalking; // @synthesize userIsTalking=_userIsTalking;
@property(retain, nonatomic) MMFinderLiveAudioRoomMicAudioAnimationView *audioAnimationView; // @synthesize audioAnimationView=_audioAnimationView;
@property(retain, nonatomic) UIImageView *cameraImageView; // @synthesize cameraImageView=_cameraImageView;
@property(retain, nonatomic) UIView *cameraContainerView; // @synthesize cameraContainerView=_cameraContainerView;
@property(retain, nonatomic) UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
- (void)layoutAudioAnimationView;
- (double)cameraImageSize;
- (double)cameraContainerSize;
- (void)layoutSubviews;
- (void)updateAudioWaveColor:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)updateUserIsTalking:(_Bool)arg1;
- (void)prepareForReuse;
- (void)updateCameraViewState;
- (void)updateUserCameraOn:(_Bool)arg1;
- (void)updateWithInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WCFinderLiveHomePageEntertainmentTeamupAudioRoomAvatarInfo *info; // @dynamic info;

@end

