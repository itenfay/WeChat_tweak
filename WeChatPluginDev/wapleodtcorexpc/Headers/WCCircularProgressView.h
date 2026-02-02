//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CADisplayLink, CAShapeLayer, NSString, UILabel;
@protocol WCCircularProgressViewDelegate;

@interface WCCircularProgressView : UIView
{
    double _progressStepForFinishingAnimation;
    double _lastTappedTime;
    _Bool _enable;
    double _progress;
    id <WCCircularProgressViewDelegate> _delegate;
    NSString *_successTipText;
    CAShapeLayer *_unfinishedShapeLayer;
    CAShapeLayer *_finishedShapeLayer;
    CAShapeLayer *_arrowLayer;
    CAShapeLayer *_tickLayer;
    UILabel *_successTipsLabel;
    CADisplayLink *_displayLink;
    double _realProgress;
    double _radius;
}

- (void).cxx_destruct;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double realProgress; // @synthesize realProgress=_realProgress;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UILabel *successTipsLabel; // @synthesize successTipsLabel=_successTipsLabel;
@property(retain, nonatomic) CAShapeLayer *tickLayer; // @synthesize tickLayer=_tickLayer;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(retain, nonatomic) CAShapeLayer *finishedShapeLayer; // @synthesize finishedShapeLayer=_finishedShapeLayer;
@property(retain, nonatomic) CAShapeLayer *unfinishedShapeLayer; // @synthesize unfinishedShapeLayer=_unfinishedShapeLayer;
@property(copy, nonatomic) NSString *successTipText; // @synthesize successTipText=_successTipText;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) __weak id <WCCircularProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)stopFinishAnimation;
- (void)startFinishAnimation;
- (void)updateAnimation;
- (void)updateTextTipWithProgress:(double)arg1;
- (void)updateTickWithProgress:(double)arg1;
- (void)updateArrowWithProgress:(double)arg1;
- (void)updateCircularWithProgress:(double)arg1 animated:(_Bool)arg2;
- (void)viewDidTapped:(id)arg1;
- (void)applyFinishAnimation;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)commonInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

