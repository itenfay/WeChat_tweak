//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayTransferGetFixedAmountQRCodeResponse : NSObject
{
    NSString *m_nsFixedAmountQRCode;
    unsigned int _qrcode_level;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) unsigned int qrcode_level; // @synthesize qrcode_level=_qrcode_level;
@property(retain, nonatomic) NSString *m_nsFixedAmountQRCode; // @synthesize m_nsFixedAmountQRCode;

@end

