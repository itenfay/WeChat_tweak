//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MTLTextureDescriptor;
@protocol MTLTexture;

@interface TPMetalRGBRender
{
    struct __CVMetalTextureCache *_textureCache;
    id <MTLTexture> _rgbaTexture;
    MTLTextureDescriptor *_rgbaDescriptor;
    int _width;
    int _height;
}

- (void).cxx_destruct;
- (unsigned long long)pixelFormatFromFrame:(struct TPFrame *)arg1;
- (void)uploadTexturesToCommandEncoder:(id)arg1;
- (_Bool)setupTexturesForFrame:(struct TPFrame *)arg1;
- (_Bool)uploadTexturesForFrameFrowRawData:(struct TPFrame *)arg1;
- (_Bool)onMetalContextReady;
- (id)fragmentFunctionSourceName;
- (id)vertexFunctionSourceName;
- (id)shaderSource;
- (void)dealloc;
- (id)initWithMetalDevice:(id)arg1 withColorManagement:(_Bool)arg2;

@end

