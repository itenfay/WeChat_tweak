//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOverseaFacingTransferOrderArgument : NSObject
{
    int _iCurrency;
    unsigned int _uiIsSetAmount;
    unsigned long long _uiAmount;
    NSString *_nsRecvUsername;
    NSString *_nsRecvNickname;
    NSString *_nsReason;
    NSString *_nsRecvDesc;
    NSString *_nsQRCodeId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int uiIsSetAmount; // @synthesize uiIsSetAmount=_uiIsSetAmount;
@property(retain, nonatomic) NSString *nsQRCodeId; // @synthesize nsQRCodeId=_nsQRCodeId;
@property(nonatomic) int iCurrency; // @synthesize iCurrency=_iCurrency;
@property(retain, nonatomic) NSString *nsRecvDesc; // @synthesize nsRecvDesc=_nsRecvDesc;
@property(retain, nonatomic) NSString *nsReason; // @synthesize nsReason=_nsReason;
@property(retain, nonatomic) NSString *nsRecvNickname; // @synthesize nsRecvNickname=_nsRecvNickname;
@property(retain, nonatomic) NSString *nsRecvUsername; // @synthesize nsRecvUsername=_nsRecvUsername;
@property(nonatomic) unsigned long long uiAmount; // @synthesize uiAmount=_uiAmount;
- (id)urlArgumentData;

@end

