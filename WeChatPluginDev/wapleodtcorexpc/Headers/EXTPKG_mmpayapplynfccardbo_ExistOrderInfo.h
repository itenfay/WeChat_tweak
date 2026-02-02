//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface EXTPKG_mmpayapplynfccardbo_ExistOrderInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *continueDesc; // @dynamic continueDesc;
@property(retain, nonatomic) NSString *continueTitle; // @dynamic continueTitle;
@property(retain, nonatomic) NSString *endApplyDesc; // @dynamic endApplyDesc;
@property(retain, nonatomic) NSString *endApplyTitle; // @dynamic endApplyTitle;
@property(nonatomic) long long orderExpireTime; // @dynamic orderExpireTime;
@property(retain, nonatomic) NSString *outTradeNo; // @dynamic outTradeNo;
@property(nonatomic) int tradeState; // @dynamic tradeState;

@end

