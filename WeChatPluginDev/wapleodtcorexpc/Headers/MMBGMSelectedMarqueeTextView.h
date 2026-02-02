//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UILabel;

@interface MMBGMSelectedMarqueeTextView : UIView
{
    _Bool _isPlaying;
    NSAttributedString *_attributedContent;
    double _flowSpeed;
    double _flowDuration;
    double _gradientWidth;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) double gradientWidth; // @synthesize gradientWidth=_gradientWidth;
@property(nonatomic) double flowDuration; // @synthesize flowDuration=_flowDuration;
@property(nonatomic) double flowSpeed; // @synthesize flowSpeed=_flowSpeed;
@property(retain, nonatomic) NSAttributedString *attributedContent; // @synthesize attributedContent=_attributedContent;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)layoutSubviews;
- (id)gradientMaskLayer;
- (void)resizeView;
- (void)initView;
- (_Bool)isTextLabelExceeded;
- (void)stopPlaying;
- (void)startPlaying;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

