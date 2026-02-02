//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

@interface MAVMetalContext : NSObject
{
    id <MTLDevice> _device;
    struct __CVMetalTextureCache *_textureCache;
    id <MTLLibrary> _defaultLibrary;
    id <MTLCommandQueue> _defaultCommandQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MTLCommandQueue> defaultCommandQueue; // @synthesize defaultCommandQueue=_defaultCommandQueue;
@property(retain, nonatomic) id <MTLLibrary> defaultLibrary; // @synthesize defaultLibrary=_defaultLibrary;
@property(nonatomic) struct __CVMetalTextureCache *textureCache; // @synthesize textureCache=_textureCache;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (void)dealloc;
- (id)init;

@end

