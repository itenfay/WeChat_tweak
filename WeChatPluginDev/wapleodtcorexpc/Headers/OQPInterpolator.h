//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OQPInterpolator : NSObject
{
    CDUnknownBlockType _valueForProgress;
}

+ (id)linearInterpolator;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType valueForProgress; // @synthesize valueForProgress=_valueForProgress;
- (struct CGAffineTransform)affineTransformBetweenValue:(struct CGAffineTransform)arg1 andValue:(struct CGAffineTransform)arg2 progress:(double)arg3;
- (struct CGRect)rectBetweenValue:(struct CGRect)arg1 andValue:(struct CGRect)arg2 progress:(double)arg3;
- (struct CGSize)sizeBetweenValue:(struct CGSize)arg1 andValue:(struct CGSize)arg2 progress:(double)arg3;
- (struct CGPoint)pointBetweenValue:(struct CGPoint)arg1 andValue:(struct CGPoint)arg2 progress:(double)arg3;
- (double)floatBetweenValue:(double)arg1 andValue:(double)arg2 progress:(double)arg3;
- (long long)integerBetweenValue:(long long)arg1 andValue:(long long)arg2 progress:(double)arg3;
- (id)initWithInterpolationBlock:(CDUnknownBlockType)arg1;

@end

