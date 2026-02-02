//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CAKeyframeAnimation.h>

@interface SKBounceAnimation : CAKeyframeAnimation
{
    _Bool shouldOvershoot;
    id fromValue;
    id byValue;
    id toValue;
    unsigned long long numberOfBounces;
}

+ (id)animationWithKeyPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id byValue; // @synthesize byValue;
- (id)valueArrayForStartValue:(double)arg1 endValue:(double)arg2;
- (id)createColorArrayFromRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
- (id)createTransformArrayFromM11:(id)arg1 M12:(id)arg2 M13:(id)arg3 M14:(id)arg4 M21:(id)arg5 M22:(id)arg6 M23:(id)arg7 M24:(id)arg8 M31:(id)arg9 M32:(id)arg10 M33:(id)arg11 M34:(id)arg12 M41:(id)arg13 M42:(id)arg14 M43:(id)arg15 M44:(id)arg16;
- (id)createRectArrayFromXValues:(id)arg1 yValues:(id)arg2 widths:(id)arg3 heights:(id)arg4;
- (void)createValueArray;
@property(nonatomic) _Bool shake;
@property(nonatomic) _Bool shouldOvershoot; // @synthesize shouldOvershoot;
@property(nonatomic) double stiffness;
@property(nonatomic) unsigned long long numberOfBounces; // @synthesize numberOfBounces;
- (void)setDuration:(double)arg1;
@property(retain, nonatomic) id toValue; // @synthesize toValue;
@property(retain, nonatomic) id fromValue; // @synthesize fromValue;
- (id)initWithKeyPath:(id)arg1;

@end

