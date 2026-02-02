//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CADisplayLink, CAGradientLayer, DynamicBackgroundSystemConfig, NSString, WADynamicBackgroundGLViewController;

@interface MiniTaskDynamicBgView : UIView
{
    _Bool _canUseDynamicBackground;
    _Bool _isInDarkMode;
    UIView *_backgroundView;
    CAGradientLayer *_backgroundLayer;
    WADynamicBackgroundGLViewController *_dynamicBGVC;
    DynamicBackgroundSystemConfig *_manualBackgroundSystemConfig;
    CADisplayLink *_displayLink;
    double _manualColorRatio;
    UIView *_backgroundCoverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundCoverView; // @synthesize backgroundCoverView=_backgroundCoverView;
@property(nonatomic) _Bool isInDarkMode; // @synthesize isInDarkMode=_isInDarkMode;
@property(nonatomic) double manualColorRatio; // @synthesize manualColorRatio=_manualColorRatio;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool canUseDynamicBackground; // @synthesize canUseDynamicBackground=_canUseDynamicBackground;
@property(retain, nonatomic) DynamicBackgroundSystemConfig *manualBackgroundSystemConfig; // @synthesize manualBackgroundSystemConfig=_manualBackgroundSystemConfig;
@property(retain, nonatomic) WADynamicBackgroundGLViewController *dynamicBGVC; // @synthesize dynamicBGVC=_dynamicBGVC;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)mm_onColorAppearanceDidChange;
- (void)detectDarkMode;
- (union _GLKVector4)mixColorWithA:(union _GLKVector4)arg1 b:(union _GLKVector4)arg2 portion:(double)arg3;
- (union _GLKVector4)getBGColorFromStartConfig:(id)arg1 endConfig:(id)arg2 bgIndex:(unsigned int)arg3 portion:(double)arg4;
- (void)backgroundDisplayLink:(id)arg1;
- (void)updateBackgroundColorWithColor1:(union _GLKVector4)arg1 color2:(union _GLKVector4)arg2;
- (void)pauseDynamicBgView;
- (void)showDynamicBgView;
- (void)layoutSubviews;
- (void)buildManualBackgroundDisplayLink;
- (void)buildManualBackgroundSystem;
- (void)buildManualBackground;
- (void)buildGLLayer;
- (void)buildBackgroundLayer;
- (void)buildDynamicBackground;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

