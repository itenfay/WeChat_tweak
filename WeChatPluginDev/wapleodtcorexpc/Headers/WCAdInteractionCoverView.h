//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSNumber, NSString, PAGView, UILabel, WCAdInteractionCoverInfo, WCAdInteractionDeviceMotionContainer;
@protocol WCAdInteractionCoverViewDelegate;

@interface WCAdInteractionCoverView : UIView
{
    _Bool _isAnimating;
    id <WCAdInteractionCoverViewDelegate> _delegate;
    WCAdInteractionCoverInfo *_coverInfo;
    UIView *_backgroundCircleView;
    PAGView *_iconPAGView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    long long _viewState;
    WCAdInteractionDeviceMotionContainer *_deviceMotionContainer;
    NSNumber *_maxAccelerationInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *maxAccelerationInfo; // @synthesize maxAccelerationInfo=_maxAccelerationInfo;
@property(retain, nonatomic) WCAdInteractionDeviceMotionContainer *deviceMotionContainer; // @synthesize deviceMotionContainer=_deviceMotionContainer;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PAGView *iconPAGView; // @synthesize iconPAGView=_iconPAGView;
@property(retain, nonatomic) UIView *backgroundCircleView; // @synthesize backgroundCircleView=_backgroundCircleView;
@property(retain, nonatomic) WCAdInteractionCoverInfo *coverInfo; // @synthesize coverInfo=_coverInfo;
@property(nonatomic) __weak id <WCAdInteractionCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deviceMotionAccelerationChangedWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)fetchMaxAccelerationInfo;
- (void)updateMaxAccelerationWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (_Bool)isPlayerPlaying;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)updateIconAnimationWithState:(long long)arg1;
- (void)updateContentViewsWithState:(long long)arg1;
- (void)updateContentViewsWithState:(long long)arg1 animated:(_Bool)arg2;
- (void)resetCoverView;
- (void)terminateCoverView;
- (void)suspendCoverView;
- (void)activeCoverView;
- (void)generateDeviceMotionContainer;
- (void)buildContentViews;
- (id)initWithFrame:(struct CGRect)arg1 coverInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

