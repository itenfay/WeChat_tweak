//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, EXTPKG_mmpayapplynfccardbo_CardPasskitInfo, NSString;

@interface OrderQueryOrderResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) EXTPKG_mmpayapplynfccardbo_CardPasskitInfo *cardPasskitInfo; // @dynamic cardPasskitInfo;
@property(retain, nonatomic) NSString *endApplyDesc; // @dynamic endApplyDesc;
@property(retain, nonatomic) NSString *endApplyTitle; // @dynamic endApplyTitle;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *successTime; // @dynamic successTime;
@property(nonatomic) int tradeState; // @dynamic tradeState;
@property(retain, nonatomic) NSString *tradeStateDesc; // @dynamic tradeStateDesc;

@end

