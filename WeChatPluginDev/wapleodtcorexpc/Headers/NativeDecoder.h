//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NativeDecoder : NSObject
{
}

+ (void)lsof;
+ (_Bool)Flutter_nativeDecoderReleaseDecoder:(int)arg1;
+ (_Bool)Flutter_nativeDecoderReleaseFrameData:(int)arg1 frameInfo:(CDStruct_d5967ce6 *)arg2;
+ (CDStruct_d5967ce6 *)Flutter_nativeDecoderGetFrame:(int)arg1 frameIndex:(int)arg2;
+ (int)Flutter_nativeDecoderGetFrameCount:(int)arg1;
+ (int)Flutter_nativeDecoderCreate:(id)arg1 maxWidth:(int)arg2 maxHeight:(int)arg3;
+ (id)createUIImage:(id)arg1 maxWidth:(int)arg2 maxHeight:(int)arg3;
+ (unsigned long long)pixelFormatOfImageRef:(struct CGImage *)arg1;
+ (_Bool)CGImageContainsAlpha:(struct CGImage *)arg1;
+ (struct CGColorSpace *)colorSpaceGetDeviceRGB;

@end

