//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TXCiOSNV12Drawer
{
    struct __CVBuffer *_yTextureRef;
    struct __CVBuffer *_uvTextureRef;
    unsigned int _yUniform;
    unsigned int _uvUniform;
}

@property(readonly, nonatomic) unsigned int uvUniform; // @synthesize uvUniform=_uvUniform;
@property(readonly, nonatomic) unsigned int yUniform; // @synthesize yUniform=_yUniform;
- (void)draw;
- (void)uploadTextures:(struct __CVBuffer *)arg1;
- (void)setupProgramIfNeed;
- (_Bool)drawTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
- (_Bool)drawPixelBuffer:(struct __CVBuffer *)arg1;
- (unsigned long long)getType;
- (void)dealloc;
- (id)initWithContext:(id)arg1 coords:(id)arg2;
- (unsigned int)uvTexture;
- (unsigned int)yTexture;

@end

