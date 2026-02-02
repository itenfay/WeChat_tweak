//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TXCI420Drawer
{
    unsigned int _yTexture;
    unsigned int _uTexture;
    unsigned int _vTexture;
    unsigned int _yUniform;
    unsigned int _uUniform;
    unsigned int _vUniform;
}

@property(readonly, nonatomic) unsigned int vUniform; // @synthesize vUniform=_vUniform;
@property(readonly, nonatomic) unsigned int uUniform; // @synthesize uUniform=_uUniform;
@property(readonly, nonatomic) unsigned int yUniform; // @synthesize yUniform=_yUniform;
@property(readonly, nonatomic) unsigned int vTexture; // @synthesize vTexture=_vTexture;
@property(readonly, nonatomic) unsigned int uTexture; // @synthesize uTexture=_uTexture;
@property(readonly, nonatomic) unsigned int yTexture; // @synthesize yTexture=_yTexture;
- (void)draw;
- (void)uploadTextures:(struct __CVBuffer *)arg1;
- (void)setupProgramIfNeed;
- (_Bool)drawTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
- (_Bool)drawPixelBuffer:(struct __CVBuffer *)arg1;
- (unsigned long long)getType;
- (void)setupTextures;
- (void)dealloc;
- (id)initWithContext:(id)arg1 coords:(id)arg2;

@end

