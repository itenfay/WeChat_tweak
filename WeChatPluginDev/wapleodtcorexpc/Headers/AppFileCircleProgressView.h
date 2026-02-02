//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMUIButton;
@protocol AppFileCircleProgressViewDelegate;

@interface AppFileCircleProgressView : UIView
{
    _Bool _bSender;
    id <AppFileCircleProgressViewDelegate> _delegate;
    UIView *_progressView;
    CAShapeLayer *_progressLayer;
    MMUIButton *_pauseBtn;
    MMUIButton *_playButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bSender; // @synthesize bSender=_bSender;
@property(retain, nonatomic) MMUIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) MMUIButton *pauseBtn; // @synthesize pauseBtn=_pauseBtn;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak id <AppFileCircleProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateProgressViewPauseState:(_Bool)arg1;
- (void)setProgressValue:(double)arg1;
- (void)onPauseButtonClick;
- (void)initPauseButton;
- (void)onPlayButtonClick;
- (void)initPlayButton;
- (void)initProgressCricle;
- (id)initWithFrame:(struct CGRect)arg1 sender:(_Bool)arg2;

@end

