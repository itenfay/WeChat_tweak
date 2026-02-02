//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VRProjectionModel : NSObject
{
    int mERPLatitudeGrid;
    int mERPLongitudeGrid;
    float mSphererRadius;
    int mDistortionRows;
    int mDistortionColumns;
    float mDistortionParamA;
    float mDistortionParamB;
    float mDistortionParamC;
    float mDistortionScale;
    int mNumIndices[4];
    float *mTexCoordinateBuffers[4];
    float *mVerticesBuffers[4];
    long long mCDNRotation;
}

- (void)setProjectionModel:(int)arg1 NumIndices:(int)arg2 VerticesBuffers:(float *)arg3 VerticesSize:(int)arg4 TexCoordinateBuffers:(float *)arg5 TexCoordinateSize:(int)arg6;
- (void)barrelDistortion:(double)arg1 ParamB:(double)arg2 ParamC:(double)arg3 SrcX:(float *)arg4 SrcY:(float *)arg5;
- (void)applyBarrelDistortion:(int)arg1 Vertexs:(float *)arg2;
- (void)sphereMapping;
- (float *)getVerticesBuffer:(int)arg1 IsDistortion:(_Bool)arg2;
- (void)setVerticesBuffer:(int)arg1 VerticesBuffer:(float *)arg2 Size:(int)arg3 IsDistortion:(_Bool)arg4;
- (float *)getTexCoordinateBuffer:(int)arg1 IsDistortion:(_Bool)arg2;
- (void)setTexCoordinateBuffer:(int)arg1 TexCoordinateBuffer:(float *)arg2 Size:(int)arg3 IsDistortion:(_Bool)arg4;
- (int)getNumIndices:(int)arg1 IsDistortion:(_Bool)arg2;
- (void)setNumIndices:(int)arg1 NumIndices:(int)arg2 IsDistortion:(_Bool)arg3;
- (void)setSphererRadius:(float)arg1;
- (void)setERPLongitudeGrid:(int)arg1;
- (void)setERPLatitudeGrid:(int)arg1;
- (id)init;

@end

