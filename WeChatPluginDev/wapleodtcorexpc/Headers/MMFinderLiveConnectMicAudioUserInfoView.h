//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PAGView;

@interface MMFinderLiveConnectMicAudioUserInfoView
{
    PAGView *_volumeAnimationView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *volumeAnimationView; // @synthesize volumeAnimationView=_volumeAnimationView;
- (void)updateMicMutedButtonAppearance;
- (void)configureNicknameLabelLiveDirtyHandle;
- (void)configureHeadImageViewLiveDirtyHandle;
- (id)layoutParametersForLeadModeSmallFormFactor;
- (id)layoutParametersForSmallFormFactor;
- (id)layoutParametersForMultiUsersMediumFormFactor;
- (id)layoutParametersForMediumFormFactor;
- (id)layoutParametersForBigFormFactor;
- (void)layoutUI;
- (struct CGRect)displayNormalizedFrame;
- (unsigned long long)viewType;
- (void)createNickNameLabel;
- (void)createHeadImageView;
- (void)updateHeadImageViewSize;
- (void)configVolumeAnimationView;
- (void)show;
- (void)setConfigureLiveDirtyHandle:(_Bool)arg1;

@end

