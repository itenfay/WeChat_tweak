//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface XEffectUtil : NSObject
{
}

+ (id)nv12PixelBufferToBGRAFormat:(struct __CVBuffer *)arg1;
+ (id)cropBGRAPixelBuffer:(struct __CVBuffer *)arg1 rect:(struct CGRect)arg2;
+ (id)rotateBGRAPixelBuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2;
+ (id)imageFromBGRAPixelBuffer:(struct __CVBuffer *)arg1 outputSize:(struct CGSize)arg2;
+ (id)imageFromBGRAPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)bgraPixelBuferFromImage:(id)arg1;
+ (id)bgraPixelBufferTo420fFormat:(struct __CVBuffer *)arg1;

@end

