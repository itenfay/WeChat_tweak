//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface VoipMinimizeView
{
    _Bool _isAudioMode;
    UIView *_m_tipsMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *m_tipsMaskView; // @synthesize m_tipsMaskView=_m_tipsMaskView;
@property(nonatomic) _Bool isAudioMode; // @synthesize isAudioMode=_isAudioMode;
- (void)reset;
- (id)endingDescTextColor;
- (id)normalDescTextColor;
- (id)timerLabelTextColor;
- (void)updateSubviewsByDescMode;
- (void)updateSubviewsByFrameMode;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

