//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveAudioSoundActivityIndicatorView, MMUILabel, UIFont;

@interface MMLiveAudioOnlyIndicatorView : UIView
{
    _Bool _soundActive;
    _Bool _isAudienceLocalAudioMode;
    double _sideViewMarginCoefficient;
    MMUILabel *_indicatorLabel;
    MMLiveAudioSoundActivityIndicatorView *_leftView;
    MMLiveAudioSoundActivityIndicatorView *_rightView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveAudioSoundActivityIndicatorView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) MMLiveAudioSoundActivityIndicatorView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) MMUILabel *indicatorLabel; // @synthesize indicatorLabel=_indicatorLabel;
@property(nonatomic) _Bool isAudienceLocalAudioMode; // @synthesize isAudienceLocalAudioMode=_isAudienceLocalAudioMode;
@property(nonatomic) double sideViewMarginCoefficient; // @synthesize sideViewMarginCoefficient=_sideViewMarginCoefficient;
@property(nonatomic) _Bool soundActive; // @synthesize soundActive=_soundActive;
- (void)updateSoundActive:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)displayText;
@property(retain, nonatomic) UIFont *labelFont;
- (id)initWithFrame:(struct CGRect)arg1 isStub:(_Bool)arg2;

@end

