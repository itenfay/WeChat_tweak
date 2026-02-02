//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WeVisGLDrawQuad;

@interface WeVisGLRGBA2YUVTwoPassFS : NSObject
{
    WeVisGLDrawQuad *mQuadDrawerY;
    WeVisGLDrawQuad *mQuadDrawerUV;
    _Bool _isInitialized;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
- (void)drawUVFromRGBA:(unsigned int)arg1 transpose:(_Bool)arg2 flipX:(_Bool)arg3;
- (void)drawYFromRGBA:(unsigned int)arg1 transpose:(_Bool)arg2 flipX:(_Bool)arg3;
- (id)initWith_ITU_R_BT_601_FullRange;

@end

