//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLDevice;

@interface FlutterDarwinContextMetalSkia : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    sk_sp_f030eba7 _mainContext;
    sk_sp_f030eba7 _resourceContext;
    struct __CVMetalTextureCache *_textureCache;
}

+ (sk_sp_f030eba7)createGrContext:(id)arg1 commandQueue:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct __CVMetalTextureCache *textureCache; // @synthesize textureCache=_textureCache;
@property(readonly, nonatomic) sk_sp_f030eba7 resourceContext; // @synthesize resourceContext=_resourceContext;
@property(readonly, nonatomic) sk_sp_f030eba7 mainContext; // @synthesize mainContext=_mainContext;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (id)createExternalTextureWithIdentifier:(long long)arg1 texture:(id)arg2;
- (void)dealloc;
- (sk_sp_f030eba7)createGrContext;
- (id)initWithMTLDevice:(id)arg1 commandQueue:(id)arg2;
- (id)initWithDefaultMTLDevice;

@end

