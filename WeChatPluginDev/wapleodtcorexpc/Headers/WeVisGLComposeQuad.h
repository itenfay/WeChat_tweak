//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WeVisGLProgram;

@interface WeVisGLComposeQuad : NSObject
{
    int outputWidth;
    int outputHeight;
    WeVisGLProgram *mQuadProgram;
    int mUVTransform;
    unsigned int positionSlot;
    unsigned int texCoordSlot;
    unsigned int elementIndexSlot;
    unsigned int mUvMatrixLoc;
    unsigned int mUvTranslateLoc;
    NSMutableArray *texUniformWrapperArr;
    unsigned int yuvTypeUniformArr[8];
    int maxComposeCnt;
    _Bool _isInitialized;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
- (const char *)getUVScaleOffsetNameAtIndex:(int)arg1;
- (unsigned int)getTextureToBindAtIndex:(int)arg1;
- (const char *)getRectNameAtIndex:(int)arg1;
- (const char *)getYuvTypeNameAtIndex:(int)arg1;
- (const char *)getTextureUVNameAtIndex:(int)arg1;
- (const char *)getTextureYNameAtIndex:(int)arg1;
- (void)convertTexCoordinateToFillModeForElement:(id)arg1 inArray:(float *)arg2;
- (void)convertTexCoordinateForElement:(id)arg1 toArray:(float *)arg2;
- (void)convertVerticeCoordinateForElement:(id)arg1 toArray:(float *)arg2;
- (void)composeElements:(id)arg1 uvTransform:(int)arg2;
- (void)setOutputWidth:(int)arg1 outputHeight:(int)arg2;
- (void)bindUniforms;
- (id)initWithMaxSupportComposeCnt:(int)arg1;

@end

