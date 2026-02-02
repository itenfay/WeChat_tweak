//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveKTVAudioEffectSettingUserInfo, MMUILabel, MMUIView, UICollectionView, UISlider;

@interface MMFinderLiveKTVAudioEffectSettingCell
{
    MMFinderLiveKTVAudioEffectSettingUserInfo *_customUserInfo;
    MMUIView *_contentView;
    MMUILabel *_titleLabel;
    UISlider *_slider;
    UICollectionView *_reverbCollectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *reverbCollectionView; // @synthesize reverbCollectionView=_reverbCollectionView;
@property(retain, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveKTVAudioEffectSettingUserInfo *customUserInfo; // @synthesize customUserInfo=_customUserInfo;
- (struct CGRect)getSliderDotArea;
- (id)liveTask;
- (void)layoutUI;
- (void)sliderValueChanged:(id)arg1;
- (void)initSliderValue;
- (void)setupSubviewsWith:(double)arg1 height:(double)arg2;
- (void)initCellConfig;
- (id)initWithSize:(struct CGSize)arg1 userInfo:(id)arg2;

@end

