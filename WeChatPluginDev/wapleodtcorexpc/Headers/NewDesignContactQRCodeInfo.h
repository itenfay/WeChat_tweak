//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface NewDesignContactQRCodeInfo : NSObject
{
    UIImage *_qrCodeImage;
    NSString *_qrCodeUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *qrCodeUrl; // @synthesize qrCodeUrl=_qrCodeUrl;
@property(retain, nonatomic) UIImage *qrCodeImage; // @synthesize qrCodeImage=_qrCodeImage;

@end

