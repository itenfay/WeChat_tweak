//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPImageUtil : NSObject
{
}

+ (id)getImageFromCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)sharedContext;
+ (id)image:(id)arg1 scaleToSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 rotation:(int)arg2;
+ (id)getImageFromRGBA:(char *)arg1 width:(int)arg2 height:(int)arg3;
+ (id)getImageFromRGB24:(char *)arg1 width:(int)arg2 height:(int)arg3;
+ (id)imageFromCGImageRef:(struct CGImage *)arg1;

@end

