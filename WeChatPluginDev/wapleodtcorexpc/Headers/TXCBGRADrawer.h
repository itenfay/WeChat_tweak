//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TXCBGRADrawer
{
    struct __CVBuffer *_textureRef;
    _Bool _preferGPUUpload;
    unsigned int _rgbaTextureUniform;
    unsigned int _textureTarget;
    unsigned int _rgbaTexture;
}

@property(nonatomic) _Bool preferGPUUpload; // @synthesize preferGPUUpload=_preferGPUUpload;
@property(nonatomic) unsigned int rgbaTexture; // @synthesize rgbaTexture=_rgbaTexture;
@property(readonly, nonatomic) unsigned int textureTarget; // @synthesize textureTarget=_textureTarget;
@property(readonly, nonatomic) unsigned int rgbaTextureUniform; // @synthesize rgbaTextureUniform=_rgbaTextureUniform;
- (void)draw;
- (void)setupProgramIfNeed:(unsigned int)arg1;
- (_Bool)drawTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
- (_Bool)drawPixelBuffer:(struct __CVBuffer *)arg1;
- (unsigned long long)getType;
- (void)dealloc;
- (id)initWithContext:(id)arg1 coords:(id)arg2;

@end

