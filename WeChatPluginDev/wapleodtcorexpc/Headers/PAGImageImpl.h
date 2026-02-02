//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PAGImageImpl : NSObject
{
    shared_ptr_d87a8cf2 _pagImage;
}

+ (id)FromCGImage:(struct CGImage *)arg1;
+ (id)FromPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)FromBytes:(const void *)arg1 size:(unsigned long long)arg2;
+ (id)FromPath:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_d87a8cf2 pagImage; // @synthesize pagImage=_pagImage;
- (void)setMatrix:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)matrix;
- (void)setScaleMode:(int)arg1;
- (int)scaleMode;
- (long long)height;
- (long long)width;
- (id)initWidthPAGImage:(shared_ptr_d87a8cf2)arg1;

@end

