//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOverseaFacingReceiveTransferCancelArgument : NSObject
{
    int _iCurrency;
    unsigned int _uiIsSetAmount;
    NSString *_nsRecvUsername;
    NSString *_nsQRCodeId;
    unsigned long long _uiTotalAmount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long uiTotalAmount; // @synthesize uiTotalAmount=_uiTotalAmount;
@property(nonatomic) unsigned int uiIsSetAmount; // @synthesize uiIsSetAmount=_uiIsSetAmount;
@property(nonatomic) int iCurrency; // @synthesize iCurrency=_iCurrency;
@property(retain, nonatomic) NSString *nsQRCodeId; // @synthesize nsQRCodeId=_nsQRCodeId;
@property(retain, nonatomic) NSString *nsRecvUsername; // @synthesize nsRecvUsername=_nsRecvUsername;
- (id)urlArgumentData;

@end

