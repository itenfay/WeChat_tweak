//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MTLTextureDescriptor;
@protocol MTLTexture;

@interface TPMetalI420Render
{
    id <MTLTexture> _yTexture;
    id <MTLTexture> _uTexture;
    id <MTLTexture> _vTexture;
    MTLTextureDescriptor *_descriptor;
    MTLTextureDescriptor *_chromaDescriptor;
    int _width;
    int _height;
    int _chromaWidth;
    int _chromaHeight;
}

- (void).cxx_destruct;
- (id)getYTexture;
- (void)uploadTexturesToCommandEncoder:(id)arg1;
- (_Bool)setupTexturesForFrame:(struct TPFrame *)arg1;
- (id)fragmentFunctionSourceName;
- (id)vertexFunctionSourceName;
- (id)shaderSource;
- (id)initWithMetalDevice:(id)arg1 withColorManagement:(_Bool)arg2;

@end

