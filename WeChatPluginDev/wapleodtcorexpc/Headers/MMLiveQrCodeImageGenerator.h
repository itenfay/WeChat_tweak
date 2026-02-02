//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveQrCodeImageGenerator : NSObject
{
}

+ (struct CGImage *)createSquareCgImageForCenterImage:(id)arg1;
+ (id)bulletsStyleQrCodeImageWithEncodedQrCode:(struct QBAR_IMAGE)arg1 minimumDimension:(double)arg2 paddingRatio:(double)arg3 backgroundColor:(id)arg4 foregroundColor:(id)arg5 centerImage:(id)arg6 centerImageRatio:(double)arg7;
+ (id)standardStyleQrCodeImageWithEncodedQrCode:(struct QBAR_IMAGE)arg1 minimumDimension:(double)arg2 paddingRatio:(double)arg3 backgroundColor:(id)arg4 foregroundColor:(id)arg5 centerImage:(id)arg6 centerImageRatio:(double)arg7;
+ (id)qrCodeImageWithContent:(id)arg1 errorCorrectionLevel:(unsigned long long)arg2 minimumDimension:(double)arg3 paddingRatio:(double)arg4 backgroundColor:(id)arg5 foregroundColor:(id)arg6 centerImage:(id)arg7 centerImageRatio:(double)arg8 style:(unsigned long long)arg9;
+ (id)qrCodeImageWithContent:(id)arg1 errorCorrectionLevel:(unsigned long long)arg2 minimumDimension:(double)arg3;

@end

