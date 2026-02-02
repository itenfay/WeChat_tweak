//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MTLTextureDescriptor;
@protocol MTLTexture;

@interface TPMetalNV12Render
{
    struct __CVMetalTextureCache *_textureCache;
    id <MTLTexture> _yTexture;
    id <MTLTexture> _CrCbTexture;
    MTLTextureDescriptor *_ydescriptor;
    MTLTextureDescriptor *_uvDescriptor;
    int _yWidth;
    int _yHeight;
    int _uvWidth;
    int _uvHeight;
}

- (void).cxx_destruct;
- (id)getYTexture;
- (void)uploadTexturesToCommandEncoder:(id)arg1;
- (_Bool)setupTexturesForFrame:(struct TPFrame *)arg1;
- (_Bool)uploadTextureFromPixelbuffer:(struct TPFrame *)arg1;
- (_Bool)uploadTexturesForFrameFrowRawData:(struct TPFrame *)arg1;
- (_Bool)onMetalContextReady;
- (id)fragmentFunctionSourceName;
- (id)vertexFunctionSourceName;
- (id)shaderSource;
- (void)dealloc;
- (id)initWithMetalDevice:(id)arg1 withColorManagement:(_Bool)arg2;

@end

