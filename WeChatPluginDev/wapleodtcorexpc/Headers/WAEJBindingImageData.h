//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAEJImageData, WAEJTexture;

@interface WAEJBindingImageData
{
    WAEJImageData *imageData;
    struct OpaqueJSValue *dataArray;
}

+ (void *)_ptr_to_get_height;
+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_get_instance;
+ (void *)_ptr_to_get_data;
- (struct OpaqueJSValue *)_get_height:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_width:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_instance:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_data:(struct OpaqueJSContext *)arg1;
@property(readonly, nonatomic) WAEJTexture *texture;
@property(readonly, nonatomic) WAEJImageData *imageData; // @synthesize imageData;
- (void)dealloc;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (id)initWithImageData:(id)arg1;

@end

