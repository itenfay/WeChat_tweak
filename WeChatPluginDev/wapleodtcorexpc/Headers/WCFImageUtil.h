//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFImageUtil : NSObject
{
}

+ (struct CGImage *)fastConvert2sRGB:(struct CGImage *)arg1;
+ (_Bool)isDisplayP3Image:(struct CGImage *)arg1;
+ (void)setEnableWideGamutConvert:(_Bool)arg1;
+ (_Bool)fileExistsAtPath:(id)arg1;
+ (_Bool)isHighEndDevice;
+ (id)scaleImageFile:(id)arg1 toSize:(struct CGSize)arg2 mode:(long long)arg3;
+ (id)scaleImageData:(id)arg1 toSize:(struct CGSize)arg2 mode:(long long)arg3 error:(id *)arg4;
+ (id)scaleImageData:(id)arg1 toSize:(struct CGSize)arg2 mode:(long long)arg3;
+ (_Bool)enableScale;
+ (id)thubmnailForImageSource:(struct CGImageSource *)arg1 maxPixel:(double)arg2 scaleAspectFill:(_Bool)arg3 orientation:(long long)arg4 scale:(double)arg5;
+ (struct WCFImageMeta)imageMetaFromSource:(struct CGImageSource *)arg1;
+ (long long)cgImageOrientToUI:(unsigned int)arg1;

@end

