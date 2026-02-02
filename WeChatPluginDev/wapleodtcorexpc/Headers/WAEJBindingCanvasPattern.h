//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAEJCanvasPattern;

@interface WAEJBindingCanvasPattern
{
    WAEJCanvasPattern *pattern;
}

+ (void *)_ptr_to_get___type;
+ (void *)_ptr_to_get_instance;
+ (id)patternFromInstance:(unsigned long long)arg1;
+ (id)patternFromJSValue:(struct OpaqueJSValue *)arg1;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 pattern:(id)arg3;
- (struct OpaqueJSValue *)_get___type:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_instance:(struct OpaqueJSContext *)arg1;
- (void)dealloc;

@end

