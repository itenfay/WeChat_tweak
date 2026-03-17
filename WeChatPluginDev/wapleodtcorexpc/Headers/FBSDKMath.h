//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FBSDKMath : NSObject
{
}

+ (unsigned long long)hashWithPointer:(const void *)arg1;
+ (unsigned long long)hashWithLong:(unsigned long long)arg1;
+ (unsigned long long)hashWithIntegerArray:(unsigned long long *)arg1 count:(unsigned long long)arg2;
+ (unsigned long long)hashWithInteger:(unsigned long long)arg1 andInteger:(unsigned long long)arg2;
+ (unsigned long long)hashWithInteger:(unsigned long long)arg1;
+ (unsigned long long)hashWithFloat:(float)arg1;
+ (unsigned long long)hashWithDouble:(double)arg1;
+ (unsigned long long)hashWithCString:(const char *)arg1;
+ (unsigned long long)hashWithCGFloat:(double)arg1;
+ (struct CGSize)floorForSize:(struct CGSize)arg1;
+ (struct CGPoint)floorForPoint:(struct CGPoint)arg1;
+ (struct CGSize)ceilForSize:(struct CGSize)arg1;
+ (struct CGPoint)ceilForPoint:(struct CGPoint)arg1;

@end

