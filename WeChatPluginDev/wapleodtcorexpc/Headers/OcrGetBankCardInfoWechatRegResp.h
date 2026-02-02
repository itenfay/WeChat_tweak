//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface OcrGetBankCardInfoWechatRegResp : NSObject
{
    NSNumber *_errcode;
    NSData *_data_encrypt_key;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *data_encrypt_key; // @synthesize data_encrypt_key=_data_encrypt_key;
@property(copy, nonatomic) NSNumber *errcode; // @synthesize errcode=_errcode;

@end

