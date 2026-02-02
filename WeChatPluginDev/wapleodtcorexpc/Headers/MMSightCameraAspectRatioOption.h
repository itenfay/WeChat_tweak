//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIButton, NSString, UIView, WCElasticLayoutView;
@protocol MMSightCameraAspectRatioOptionDelegate;

@interface MMSightCameraAspectRatioOption : NSObject
{
    long long _currentType;
    UIView *_topMaskView;
    UIView *_bottomMaskView;
    UIView *_backGroundMaskView;
    id <MMSightCameraAspectRatioOptionDelegate> _delegate;
    WCElasticLayoutView *_elasticLayoutView;
    MMUIButton *_iconButton;
    MMUIButton *_ratioButton_1_1;
    MMUIButton *_ratioButton_4_3;
    MMUIButton *_ratioButton_16_9;
    long long _currentOrientation;
    struct CGRect _containerFrame;
}

+ (id)aspectRatioTitleWithType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(retain, nonatomic) MMUIButton *ratioButton_16_9; // @synthesize ratioButton_16_9=_ratioButton_16_9;
@property(retain, nonatomic) MMUIButton *ratioButton_4_3; // @synthesize ratioButton_4_3=_ratioButton_4_3;
@property(retain, nonatomic) MMUIButton *ratioButton_1_1; // @synthesize ratioButton_1_1=_ratioButton_1_1;
@property(retain, nonatomic) MMUIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) WCElasticLayoutView *elasticLayoutView; // @synthesize elasticLayoutView=_elasticLayoutView;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
@property(nonatomic) __weak id <MMSightCameraAspectRatioOptionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *backGroundMaskView; // @synthesize backGroundMaskView=_backGroundMaskView;
@property(retain, nonatomic) UIView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UIView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(nonatomic) long long currentType; // @synthesize currentType=_currentType;
- (void)_initMaskView;
- (void)_initViews;
- (void)_updateIconButtonWithTitle:(id)arg1 accessibilityLabel:(id)arg2;
- (void)_transformViewsToOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_transformViewsToIdentityAnimated:(_Bool)arg1;
- (void)_onAspectRatioTypeChangedTo:(long long)arg1;
- (void)_onClickRatioButton_16_9;
- (void)_onClickRatioButton_4_3;
- (void)_onClickRatioButton_1_1;
- (void)_onClickIconView;
- (void)rotateToOrientation:(long long)arg1;
@property(readonly, nonatomic) WCElasticLayoutView *optionView;
@property(nonatomic) _Bool active;
- (id)initWithContainerFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

