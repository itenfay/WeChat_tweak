//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MobileOCRImage : NSObject
{
    int _width;
    int _height;
    char *_data;
}

+ (id)imageWithCMSampleBufferRefRGB:(struct opaqueCMSampleBuffer *)arg1 reuseImage:(id)arg2 direction:(long long)arg3;
+ (struct __CVBuffer *)rotateBuffer:(struct __CVBuffer *)arg1 withConstant:(unsigned char)arg2;
+ (id)getRGBBytesFromPixelBuffer:(struct __CVBuffer *)arg1 reuseImage:(id)arg2;
+ (id)imageWithCMSampleBufferRef:(struct opaqueCMSampleBuffer *)arg1 reuseImage:(id)arg2;
+ (id)imageWithUIImage:(id)arg1;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) char *data; // @synthesize data=_data;
- (id)createUIImage;
- (long long)pixelFormatOfUIImage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

