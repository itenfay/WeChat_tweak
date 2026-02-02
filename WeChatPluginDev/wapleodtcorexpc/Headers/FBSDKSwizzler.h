//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FBSDKSwizzler : NSObject
{
}

+ (void)unswizzleSelector:(SEL)arg1 onClass:(Class)arg2 named:(id)arg3;
+ (void)unswizzleSelector:(SEL)arg1 onClass:(Class)arg2;
+ (void)swizzleSelector:(SEL)arg1 onClass:(Class)arg2 withBlock:(CDUnknownBlockType)arg3 named:(id)arg4;
+ (_Bool)isLocallyDefinedMethod:(struct objc_method *)arg1 onClass:(Class)arg2;
+ (void)setSwizzle:(id)arg1 forMethod:(struct objc_method *)arg2;
+ (void)removeSwizzleForMethod:(struct objc_method *)arg1;
+ (id)swizzleForMethod:(struct objc_method *)arg1;
+ (void)printSwizzles;
+ (void)resolveConflict;
+ (void)initialize;

@end

