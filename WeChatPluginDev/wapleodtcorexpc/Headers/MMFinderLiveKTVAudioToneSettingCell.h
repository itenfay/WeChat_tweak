//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveKTVAudioEffectSettingUserInfo, MMUIButton, MMUILabel, MMUIView;

@interface MMFinderLiveKTVAudioToneSettingCell
{
    MMFinderLiveKTVAudioEffectSettingUserInfo *_customUserInfo;
    MMUIView *_contentView;
    MMUILabel *_titleLabel;
    MMUIButton *_minusBtn;
    MMUIButton *_plusBtn;
    MMUILabel *_valueLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) MMUIButton *plusBtn; // @synthesize plusBtn=_plusBtn;
@property(retain, nonatomic) MMUIButton *minusBtn; // @synthesize minusBtn=_minusBtn;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveKTVAudioEffectSettingUserInfo *customUserInfo; // @synthesize customUserInfo=_customUserInfo;
- (void)onPlusButtonTapped:(id)arg1;
- (void)onMinusButtonTapped:(id)arg1;
- (id)liveTask;
- (void)layoutUI;
- (void)initToneValue;
- (void)setupSubviewsWith:(double)arg1 height:(double)arg2;
- (void)initCellConfig;
- (id)initWithSize:(struct CGSize)arg1 userInfo:(id)arg2;

@end

