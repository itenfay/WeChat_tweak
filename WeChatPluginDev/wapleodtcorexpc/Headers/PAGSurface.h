//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class PAGSurfaceImpl;

@interface PAGSurface : NSObject
{
    PAGSurfaceImpl *_surface;
}

+ (id)MakeOffscreen:(struct CGSize)arg1;
+ (id)MakeFromGPU:(struct CGSize)arg1;
+ (id)FromCVPixelBuffer:(struct __CVBuffer *)arg1 context:(id)arg2;
+ (id)FromCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)FromLayer:(id)arg1;
@property(retain, nonatomic) PAGSurfaceImpl *surface; // @synthesize surface=_surface;
- (_Bool)copyPixelsTo:(void *)arg1 rowBytes:(unsigned long long)arg2;
- (struct __CVBuffer *)makeSnapshot;
- (struct __CVBuffer *)getCVPixelBuffer;
- (void)freeCache;
- (_Bool)clearAll;
- (int)height;
- (int)width;
- (void)updateSize;
- (void)dealloc;
- (id)impl;

@end

