//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WADynamicBackgroundGLSceneRenderTexture
{
    unsigned int vbo;
    unsigned int vao;
    unsigned int diffuseTexture;
    _Bool _needBlend;
    unsigned int _directionX;
    unsigned int _needColorMatrix;
    union _GLKMatrix4 _colorMatrix;
}

@property(nonatomic) _Bool needBlend; // @synthesize needBlend=_needBlend;
@property(nonatomic) unsigned int needColorMatrix; // @synthesize needColorMatrix=_needColorMatrix;
@property(nonatomic) unsigned int directionX; // @synthesize directionX=_directionX;
@property(nonatomic) union _GLKMatrix4 colorMatrix; // @synthesize colorMatrix=_colorMatrix;
- (void)draw:(id)arg1;
- (void)update:(double)arg1;
- (void)genVAO;
- (void)genVBO;
- (float *)planeData;
- (void)dealloc;
- (id)initWithGLContext:(id)arg1 texture:(unsigned int)arg2;

@end

