//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableData;

@interface WADynamicBackgroundGLGeometry
{
    unsigned int vbo;
    _Bool vboValid;
    _Bool _vboUpdated;
    unsigned long long _geometryType;
    NSMutableData *_vertexData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *vertexData; // @synthesize vertexData=_vertexData;
@property(nonatomic) _Bool vboUpdated; // @synthesize vboUpdated=_vboUpdated;
@property(nonatomic) unsigned long long geometryType; // @synthesize geometryType=_geometryType;
- (void)cleanVertex;
- (int)vertexXYZRGBACount;
- (int)vertexCount;
- (void)updateVBOIfNeeded;
- (unsigned int)getVBO;
- (void)appendVertexXYZRGBA:(CDStruct_0d450d55)arg1;
- (void)appendVertex:(CDStruct_ee569e91)arg1;
- (void)dealloc;
- (id)initWithGeometryType:(unsigned long long)arg1;

@end

