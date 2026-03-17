//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CGMathFunctions : NSObject
{
}

+ (struct CGAffineTransform)transformBySize:(struct CGSize)arg1 aspectFillInSize:(struct CGSize)arg2;
+ (struct CGAffineTransform)transformBySize:(struct CGSize)arg1 aspectFitInSize:(struct CGSize)arg2;
+ (struct CGAffineTransform)transformBySourceRect:(struct CGRect)arg1 aspectFillInRect:(struct CGRect)arg2;
+ (struct CGAffineTransform)transformBySourceRect:(struct CGRect)arg1 aspectFitInRect:(struct CGRect)arg2;
+ (struct CGRect)rect:(struct CGRect)arg1 aspectFill:(struct CGRect)arg2;
+ (struct CGRect)rect:(struct CGRect)arg1 aspectFit:(struct CGRect)arg2;
+ (struct CGSize)size:(struct CGSize)arg1 aspectFill:(struct CGSize)arg2;
+ (struct CGSize)size:(struct CGSize)arg1 aspectFit:(struct CGSize)arg2;

@end

