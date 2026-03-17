//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface QREncoder : NSObject
{
    UIImage *_image;
}

+ (unsigned int)getCoverColorWithCurrentIndex:(int)arg1 baseSize:(struct CGSize)arg2 baseColor:(unsigned int)arg3 coverRect:(struct CGRect)arg4 coverImageData:(shared_ptr_b948f23b)arg5;
+ (shared_ptr_b948f23b)imageDataFromImage:(id)arg1;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (int)getApproximatePadding:(id)arg1 imageDimension:(int)arg2;
- (id)renderDataMatrix:(id)arg1 imageDimension:(int)arg2;
- (id)renderDataMatrix:(id)arg1 imageDimension:(int)arg2 coverImage:(id)arg3;
- (id)encodeWithECLevel:(int)arg1 version:(int)arg2 string:(id)arg3;
- (id)encodeWithECLevel:(int)arg1 version:(int)arg2 string:(id)arg3 AESPassphrase:(id)arg4;
- (id)encodeCStringWithECLevel:(int)arg1 version:(int)arg2 cstring:(const char *)arg3;
- (id)AESEncryptString:(id)arg1 withPassphrase:(id)arg2;
- (void)dealloc;

@end

