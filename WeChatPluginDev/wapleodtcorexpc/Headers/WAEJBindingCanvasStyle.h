//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAEJBindingCanvas;

@interface WAEJBindingCanvasStyle
{
    WAEJBindingCanvas *binding;
}

+ (void *)_ptr_to_set_imageRendering;
+ (void *)_ptr_to_get_imageRendering;
+ (void *)_ptr_to_set_top;
+ (void *)_ptr_to_get_top;
+ (void *)_ptr_to_set_left;
+ (void *)_ptr_to_get_left;
+ (void *)_ptr_to_set_height;
+ (void *)_ptr_to_get_height;
+ (void *)_ptr_to_set_width;
+ (void *)_ptr_to_get_width;
@property(nonatomic) WAEJBindingCanvas *binding; // @synthesize binding;
- (void)_set_imageRendering:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_imageRendering:(struct OpaqueJSContext *)arg1;
- (void)_set_top:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_top:(struct OpaqueJSContext *)arg1;
- (void)_set_left:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_left:(struct OpaqueJSContext *)arg1;
- (void)_set_height:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_height:(struct OpaqueJSContext *)arg1;
- (void)_set_width:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_get_width:(struct OpaqueJSContext *)arg1;
@property(readonly, nonatomic) struct OpaqueJSValue *jsObject;

@end

