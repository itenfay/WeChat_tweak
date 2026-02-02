//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, EXTPKG_mmpayapplynfccardbo_CardPasskitInfo, EXTPKG_mmpayapplynfccardbo_CardTypeInfo, EXTPKG_mmpayapplynfccardbo_ExistOrderInfo, NSString;

@interface NFCCardsQueryNFCCardInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) EXTPKG_mmpayapplynfccardbo_CardPasskitInfo *cardPasskitInfo; // @dynamic cardPasskitInfo;
@property(retain, nonatomic) EXTPKG_mmpayapplynfccardbo_CardTypeInfo *cardTypeInfo; // @dynamic cardTypeInfo;
@property(retain, nonatomic) EXTPKG_mmpayapplynfccardbo_ExistOrderInfo *existOrderInfo; // @dynamic existOrderInfo;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

