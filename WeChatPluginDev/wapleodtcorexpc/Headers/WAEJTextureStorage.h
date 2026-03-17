//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext, NSMutableDictionary;

@interface WAEJTextureStorage : NSObject
{
    NSMutableDictionary *params;
    unsigned int textureId;
    _Bool bCustomTexture;
    _Bool immutable;
    double lastBound;
    EAGLContext *glContext;
}

@property(readonly, nonatomic) _Bool immutable; // @synthesize immutable;
@property(readonly, nonatomic) unsigned int textureId; // @synthesize textureId;
@property(readonly, nonatomic) double lastBound; // @synthesize lastBound;
- (void)bindToTarget:(unsigned int)arg1 withParams:(id)arg2;
- (void)initParamsDict;
- (void)dealloc;
- (id)initWithCustomTexture:(unsigned int)arg1 immutable:(_Bool)arg2;
- (id)initImmutable;
- (id)init;

@end

