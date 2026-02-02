//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface XEffectPixelBuffer : NSObject
{
    struct __CVBuffer *_pixelBuffer;
    CDUnknownBlockType _cleanup;
    struct CGRect _pixelBufferSize;
}

+ (id)bufferWithPixel:(struct __CVBuffer *)arg1 snapshotRect:(struct CGRect)arg2 cleanup:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cleanup; // @synthesize cleanup=_cleanup;
@property(nonatomic) struct CGRect pixelBufferSize; // @synthesize pixelBufferSize=_pixelBufferSize;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)dealloc;
- (id)clone;

@end

