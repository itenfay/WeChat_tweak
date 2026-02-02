//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSObject (MethodSwizzlingCategory)
+ (_Bool)addAndSwizzleMethod:(SEL)arg1 withMethod:(SEL)arg2 andImp:(CDUnknownFunctionPointerType)arg3;
+ (_Bool)swizzleClassMethod:(SEL)arg1 withImp:(CDUnknownFunctionPointerType)arg2 store:(CDUnknownFunctionPointerType *)arg3;
+ (_Bool)swizzleClassMethod:(SEL)arg1 withClassMethod:(SEL)arg2;
+ (_Bool)swizzleMethod:(SEL)arg1 withImp:(CDUnknownFunctionPointerType)arg2 store:(CDUnknownFunctionPointerType *)arg3;
+ (_Bool)swizzleMethod:(SEL)arg1 withMethod:(SEL)arg2;
@end

