//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MinimizationUtil : NSObject
{
}

+ (id)findAllInstanceOfClass:(Class)arg1 inView:(id)arg2;
+ (_Bool)hasStoredTask:(id)arg1 taskKey:(id)arg2;
+ (_Bool)hasOuterContentTask:(id)arg1;
+ (id)minimizeAdsorbFloatingViewInfoPath;
+ (id)minimizeNormalTaskListPath;
+ (id)minimizeTaskDocumentDir;
+ (id)genColorWithImage:(id)arg1;
+ (id)genInnerTaskKey:(id)arg1 TaskBizKey:(id)arg2;
+ (void)animateSubLayer:(id)arg1 CornerRadius:(double)arg2 Duration:(double)arg3;
+ (void)animateSubLayer:(id)arg1 ToPath:(id)arg2 Duration:(double)arg3;
+ (id)genShadowView:(struct CGRect)arg1 FinalPath:(id)arg2;
+ (void)resetShadowLayer:(id)arg1 ToView:(id)arg2 ToPath:(id)arg3;
+ (void)animateShadowLayer:(id)arg1 ToView:(id)arg2 ToPath:(id)arg3 Duration:(double)arg4;
+ (id)getShadowMaskPath:(struct CGRect)arg1 WithPath:(id)arg2 ShadowRadius:(double)arg3 ShadowOffset:(struct CGSize)arg4;
+ (id)addShadowLayer:(id)arg1 WithPath:(id)arg2 ShadowRadius:(double)arg3 ShadowOffset:(struct CGSize)arg4 ShadowColor:(id)arg5;
+ (id)addGradientLayer:(id)arg1 Color:(id)arg2;
+ (void)minimizationVoiceTic;
+ (void)minimizationTapic:(_Bool)arg1;
+ (void)minimizationTapic;

@end

