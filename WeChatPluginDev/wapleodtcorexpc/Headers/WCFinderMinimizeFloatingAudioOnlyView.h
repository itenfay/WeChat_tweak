//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIFont, WCFinderMinimizeFloatingAudioSoundView;

@interface WCFinderMinimizeFloatingAudioOnlyView : UIView
{
    _Bool _soundActive;
    double _sideViewMarginCoefficient;
    MMUILabel *_indicatorLabel;
    WCFinderMinimizeFloatingAudioSoundView *_leftView;
    WCFinderMinimizeFloatingAudioSoundView *_rightView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMinimizeFloatingAudioSoundView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) WCFinderMinimizeFloatingAudioSoundView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) MMUILabel *indicatorLabel; // @synthesize indicatorLabel=_indicatorLabel;
@property(nonatomic) double sideViewMarginCoefficient; // @synthesize sideViewMarginCoefficient=_sideViewMarginCoefficient;
@property(nonatomic) _Bool soundActive; // @synthesize soundActive=_soundActive;
- (void)updateSoundActive:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)displayText;
@property(retain, nonatomic) UIFont *labelFont;
- (id)initWithFrame:(struct CGRect)arg1 isStub:(_Bool)arg2;

@end

