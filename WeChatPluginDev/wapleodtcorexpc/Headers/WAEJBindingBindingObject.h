//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAEJBindingGlobalUtils;

@interface WAEJBindingBindingObject
{
    _Bool stopRender;
    WAEJBindingGlobalUtils *global;
}

+ (void *)_ptr_to_get___id;
@property(nonatomic) _Bool stopRender; // @synthesize stopRender;
- (struct OpaqueJSValue *)_get___id:(struct OpaqueJSContext *)arg1;
- (void)prepareGarbageCollection;
- (void)createWithJSObject:(struct OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;

@end

