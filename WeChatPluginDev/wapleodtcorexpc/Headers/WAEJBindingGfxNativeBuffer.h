//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAEJBindingGfxNativeBuffer
{
    struct IGfxHandler *gfx_handler_;
    void *buffer_owned_;
}

- (void)destroy;
- (void)dealloc;
- (void)InitWithBuffer:(struct OpaqueJSValue *)arg1;
- (void)InitWithSize:(unsigned int)arg1;
- (id)initWithHandler:(id)arg1 handler:(struct IGfxHandler *)arg2;

@end

