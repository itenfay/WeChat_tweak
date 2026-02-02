//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface WeVisPixelBuffer : NSObject
{
    struct __CVBuffer *_pixelBufferRef;
    CDUnknownBlockType _cleanupCallback;
}

+ (id)bufferWithBGRAWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 cleanup:(CDUnknownBlockType)arg3;
+ (id)bufferWithNV12WidthY:(unsigned long long)arg1 heightY:(unsigned long long)arg2 cleanup:(CDUnknownBlockType)arg3;
+ (id)bufferFromPool:(struct __CVPixelBufferPool *)arg1 maxBufferCount:(int)arg2 cleanup:(CDUnknownBlockType)arg3;
+ (id)bufferWithCVPixelBuffer:(struct __CVBuffer *)arg1 cleanup:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType cleanupCallback; // @synthesize cleanupCallback=_cleanupCallback;
@property(nonatomic) struct __CVBuffer *pixelBufferRef; // @synthesize pixelBufferRef=_pixelBufferRef;
- (id)cloneYUV;
- (void)dealloc;

@end
