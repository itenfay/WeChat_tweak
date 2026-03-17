//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCPixelBufferTransform : NSObject
{
    struct __CVBuffer *_intermediateBuffer;
}

@property(nonatomic) struct __CVBuffer *intermediateBuffer; // @synthesize intermediateBuffer=_intermediateBuffer;
- (void)recreateIntermediateBufferIfNeeded:(struct CGSize)arg1;
- (void)resizePixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
- (void)dealloc;

@end

