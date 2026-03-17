//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLivePixelBuffer : NSObject
{
    struct __CVBuffer *_pixelBuffer;
}

+ (id)bufferWithPixel:(struct __CVBuffer *)arg1;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (unsigned long long)pixelBufferHeight;
- (unsigned long long)pixelBufferWidth;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

