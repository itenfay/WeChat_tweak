//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MTLTexture;

@interface TPMTLHDRVividRenderer
{
    unsigned long long rendererType;
    struct __CVMetalTextureCache *_textureCache;
    id <MTLTexture> _yTexture;
    id <MTLTexture> _uvTexure;
    struct TPHDRVividMetadataProcessor *_hdrVividProcessor;
    struct TPHDRDeviceInfo _displayDeviceInfo;
    struct TPHDRVividToneMappingParams _hdrVividParams;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property struct TPHDRDeviceInfo displayDeviceInfo; // @synthesize displayDeviceInfo=_displayDeviceInfo;
@property struct TPHDRVividToneMappingParams hdrVividParams; // @synthesize hdrVividParams=_hdrVividParams;
@property struct TPHDRVividMetadataProcessor *hdrVividProcessor; // @synthesize hdrVividProcessor=_hdrVividProcessor;
@property(retain) id <MTLTexture> uvTexure; // @synthesize uvTexure=_uvTexure;
@property(retain) id <MTLTexture> yTexture; // @synthesize yTexture=_yTexture;
@property struct __CVMetalTextureCache *textureCache; // @synthesize textureCache=_textureCache;
- (unsigned long long)rendererType;
- (id)fragmentFunctionName;
- (id)vertexFunctionName;
- (id)shaderSource;
- (void)uploadResourcesToCommandEncoder:(id)arg1;
- (void)setFrame:(struct TPFrame *)arg1;
- (void)calcHDRVividTonemapCurve:(struct TPFrame *)arg1;
- (void)uploadTexture:(struct TPFrame *)arg1;
- (void)prepareTextureCache;
- (void)dealloc;
- (id)initWithMetalDevice:(id)arg1;

@end

