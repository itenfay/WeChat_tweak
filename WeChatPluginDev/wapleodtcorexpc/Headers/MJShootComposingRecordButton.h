//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, UIView;
@protocol MJShootComposingRecordButtonDelegate;

@interface MJShootComposingRecordButton
{
    _Bool _isRecording;
    id <MJShootComposingRecordButtonDelegate> _delegate;
    UIView *_recordViewContainer;
    UIView *_recordMiddleView;
    UIView *_recordBorderView;
    CAShapeLayer *_recordProgressLayer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(retain, nonatomic) CAShapeLayer *recordProgressLayer; // @synthesize recordProgressLayer=_recordProgressLayer;
@property(retain, nonatomic) UIView *recordBorderView; // @synthesize recordBorderView=_recordBorderView;
@property(retain, nonatomic) UIView *recordMiddleView; // @synthesize recordMiddleView=_recordMiddleView;
@property(retain, nonatomic) UIView *recordViewContainer; // @synthesize recordViewContainer=_recordViewContainer;
@property(nonatomic) __weak id <MJShootComposingRecordButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateRecordingProgress:(float)arg1;
- (void)resetButtonStateOnRecordFinished;
- (void)didFinishRecording;
- (void)startRecording;
- (void)startPhotographing;
- (void)handleDoubleTapGestureRecognizer:(id)arg1;
- (void)handleSingleTapGestureRecognizer:(id)arg1;
- (void)layoutViews;
- (void)setupViews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

