//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSNumber, NSString, UILabel, WCAdInteractionDeviceMotionContainer, WCAdURLImageView, WCCanvasRandomLayoutEncoreInfo;
@protocol WCCanvasRandomEncoreViewDelegate;

@interface WCCanvasRandomEncoreView : UIView
{
    _Bool _didShowEncoreAnimation;
    WCCanvasRandomLayoutEncoreInfo *_encoreInfo;
    id <WCCanvasRandomEncoreViewDelegate> _delegate;
    UIView *_containerView;
    WCAdURLImageView *_imageView;
    UILabel *_titleLabel;
    WCAdInteractionDeviceMotionContainer *_deviceMotionContainer;
    NSNumber *_maxAccelerationInfo;
}

+ (struct CGSize)calcSizeForRandomEncoreInfo:(id)arg1 orientation:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *maxAccelerationInfo; // @synthesize maxAccelerationInfo=_maxAccelerationInfo;
@property(retain, nonatomic) WCAdInteractionDeviceMotionContainer *deviceMotionContainer; // @synthesize deviceMotionContainer=_deviceMotionContainer;
@property(nonatomic) _Bool didShowEncoreAnimation; // @synthesize didShowEncoreAnimation=_didShowEncoreAnimation;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCAdURLImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WCCanvasRandomEncoreViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCCanvasRandomLayoutEncoreInfo *encoreInfo; // @synthesize encoreInfo=_encoreInfo;
- (void)deviceMotionAccelerationChangedWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)fetchMaxAccelerationInfo;
- (void)updateMaxAccelerationWithX:(double)arg1 y:(double)arg2;
- (void)hideEncoreView;
- (void)showShakeAnimationToView:(id)arg1;
- (void)shakeRandomView;
- (void)shakeRandomViewDelay;
- (void)resetRandomEncoreView;
- (_Bool)isDeviceMotionRunning;
- (void)switchToNormalState;
- (void)notifyViewStatusChanged:(_Bool)arg1;
- (void)generateContainerView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 encoreInfo:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

