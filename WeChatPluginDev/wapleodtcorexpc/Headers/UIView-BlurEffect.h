//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (BlurEffect)
+ (_Bool)canGetSnapshotdAfterUpdatesInProtection;
+ (id)imageFromView:(id)arg1 rect:(struct CGRect)arg2;
+ (id)getSnapshotImageForView:(id)arg1 usingIos7Api:(_Bool)arg2 ignoreLandscape:(_Bool)arg3 opaque:(_Bool)arg4 scale:(double)arg5 forceUpdate:(_Bool)arg6;
+ (id)getSnapshotImageForView:(id)arg1 usingIos7Api:(_Bool)arg2 ignoreLandscape:(_Bool)arg3 opaque:(_Bool)arg4 scale:(double)arg5;
+ (id)getSnapshotImageForView:(id)arg1 ignoreLandscape:(_Bool)arg2 opaque:(_Bool)arg3 forceUpdate:(_Bool)arg4;
+ (id)getSnapshotImageForView:(id)arg1 usingIos7Api:(_Bool)arg2 ignoreLandscape:(_Bool)arg3;
+ (id)getSnapshotImageForView:(id)arg1 ignoreLandscape:(_Bool)arg2;
+ (id)getSnapshotImageForView:(id)arg1;
+ (id)getSnapshotImageForViewNew:(id)arg1;
+ (void)stopSubviewScroplling:(id)arg1;
- (long long)uiBarStyle:(unsigned int)arg1 isLightMode:(_Bool)arg2;
- (long long)uiBlurEffectStyleFrom:(unsigned int)arg1 isLightMode:(_Bool)arg2;
- (id)currentBlurViewTintColor;
- (void)removeVisualEfView;
- (_Bool)addVisualEfView:(long long)arg1;
- (_Bool)hasBlurEffect;
- (_Bool)hasVisibleBlurEffect;
- (void)setBlurEffectAlpha:(double)arg1;
- (void)setBlurEffectHidden:(_Bool)arg1;
- (void)removeBlurEffect;
- (void)addBlurToolBar:(long long)arg1;
- (id)calculateEffectAndColorForFinalColor:(id)arg1 outEffect:(unsigned int *)arg2;
- (void)addDynamicBlurEffect:(long long)arg1 darkEffect:(long long)arg2 lightBarStyle:(long long)arg3 darkBarStyle:(long long)arg4 tintColor:(id)arg5;
- (void)addBlurEffect:(unsigned int)arg1 withTintColor:(id)arg2;
- (void)addBlurEffect:(unsigned int)arg1;
- (_Bool)addBlurEffectWithColor:(id)arg1;
- (void)removeStaticBlurEffect;
- (_Bool)addStaticBlurEffect:(id)arg1 ForImage:(id)arg2 atPoint:(struct CGPoint)arg3 radius:(double)arg4 saturation:(double)arg5 scale:(double)arg6 drawBaseImage:(_Bool)arg7;
- (_Bool)addStaticBlurEffect:(id)arg1 ForView:(id)arg2 atPoint:(struct CGPoint)arg3 radius:(double)arg4 saturation:(double)arg5 scale:(double)arg6 drawBaseImage:(_Bool)arg7;
- (_Bool)addStaticBlurEffect:(id)arg1 ForView:(id)arg2 atPoint:(struct CGPoint)arg3 radius:(double)arg4 saturation:(double)arg5 scale:(double)arg6;
- (_Bool)addStaticBlurEffect:(id)arg1 ForView:(id)arg2 atPoint:(struct CGPoint)arg3 radius:(double)arg4 saturation:(double)arg5;
- (_Bool)addStaticBlurEffect:(id)arg1 ForView:(id)arg2 atPoint:(struct CGPoint)arg3 radius:(double)arg4;
- (id)screenshotWithRect:(struct CGRect)arg1;
- (_Bool)addStaticBlurEffect:(unsigned int)arg1 ForView:(id)arg2 atPoint:(struct CGPoint)arg3;
@end

