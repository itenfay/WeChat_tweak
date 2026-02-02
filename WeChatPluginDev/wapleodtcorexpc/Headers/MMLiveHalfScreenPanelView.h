//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMLiveTaskId, NSString, UIPanGestureRecognizer;

@interface MMLiveHalfScreenPanelView : UIView
{
    _Bool _isOpening;
    UIView *_contentView;
    double _maxHeight;
    MMLiveTaskId *_taskId;
    CAShapeLayer *_shapeLayer;
    UIView *_maskView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _contentViewTopAtPanBegin;
    double _contentViewPreviousPanPositionY;
}

- (void).cxx_destruct;
@property(nonatomic) double contentViewPreviousPanPositionY; // @synthesize contentViewPreviousPanPositionY=_contentViewPreviousPanPositionY;
@property(nonatomic) double contentViewTopAtPanBegin; // @synthesize contentViewTopAtPanBegin=_contentViewTopAtPanBegin;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isOpening; // @synthesize isOpening=_isOpening;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (id)audienceLogReporter;
- (void)layoutSubviews;
- (void)handleContentViewPanGesture:(id)arg1;
- (void)layoutHalfScreenContentView;
- (void)initContentView;
- (void)setContentViewBackground;
- (_Bool)shouldInstallContentViewPanGesture;
- (void)onHalfScreenPanelClosed;
- (void)onHalfScreenPanelOpened;
- (void)onPanGestureRecognizerBegan;
- (void)openWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)onHalfScreenPanelLightDismissed;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

