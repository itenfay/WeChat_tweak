//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface UIViewHookHelper : NSObject
{
}

+ (_Bool)isHookSwitch;
+ (void)addInstanceMethodWithDestinationSelector:(SEL)arg1 sourceSelector:(SEL)arg2 fromClass:(Class)arg3 toClass:(Class)arg4;
+ (void)addInstanceMethodWithSelector:(SEL)arg1 fromClass:(Class)arg2 toClass:(Class)arg3;
+ (CDUnknownFunctionPointerType)implementationOfMethodSelector:(SEL)arg1 fromClass:(Class)arg2;
+ (void)addInstanceMethodWithSelectors:(SEL)arg1 object:(id)arg2 fromClass:(Class)arg3 toClass:(Class)arg4;
+ (void)unHookUIScrollViewDelegate:(id)arg1;
+ (void)hookUIScrollViewDelegate:(id)arg1;
+ (void)unHookUIView:(id)arg1;
+ (void)hookUIView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;

@end

