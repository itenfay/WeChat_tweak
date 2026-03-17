//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCImageUtils : NSObject
{
}

+ (id)createImageFromImage:(id)arg1 withAngle:(double)arg2;
+ (id)createImageWithColor:(id)arg1 width:(int)arg2 height:(int)arg3;
+ (id)imageFromMTLTexture:(id)arg1;
+ (_Bool)isLandscape:(unsigned int)arg1;
+ (_Bool)isMirrored:(unsigned int)arg1;
+ (id)imageFromCgImage:(struct CGImage *)arg1;
+ (struct CGImage *)cgImageFromImage:(id)arg1;

@end

