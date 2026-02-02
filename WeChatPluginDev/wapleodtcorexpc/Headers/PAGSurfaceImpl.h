//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PAGSurfaceImpl : NSObject
{
    struct __CVBuffer *pixelBuffer;
    shared_ptr_d7de483d _pagSurface;
}

+ (id)MakeOffscreen:(struct CGSize)arg1;
+ (id)FromCVPixelBuffer:(struct __CVBuffer *)arg1 context:(id)arg2;
+ (id)FromCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)FromLayer:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_d7de483d pagSurface; // @synthesize pagSurface=_pagSurface;
- (_Bool)copyPixelsTo:(void *)arg1 rowBytes:(unsigned long long)arg2;
- (struct __CVBuffer *)makeSnapshot;
- (struct __CVBuffer *)getCVPixelBuffer;
- (void)freeCache;
- (_Bool)clearAll;
- (int)height;
- (int)width;
- (void)updateSize;
- (id)initWithSurface:(shared_ptr_d7de483d)arg1 pixelBuffer:(struct __CVBuffer *)arg2;
- (id)initWithSurface:(shared_ptr_d7de483d)arg1;

@end

