//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class PAGImageImpl;

@interface PAGImage : NSObject
{
    PAGImageImpl *_image;
    struct __CFData *_imageData;
}

+ (id)FromPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)FromBytes:(const void *)arg1 size:(unsigned long long)arg2;
+ (id)FromPath:(id)arg1;
+ (id)FromCGImage:(struct CGImage *)arg1;
@property(nonatomic) struct __CFData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) PAGImageImpl *image; // @synthesize image=_image;
- (void)setMatrix:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)matrix;
- (void)setScaleMode:(int)arg1;
- (int)scaleMode;
- (long long)height;
- (long long)width;
- (void)dealloc;
- (id)initWidthPAGImage:(id)arg1;

@end

