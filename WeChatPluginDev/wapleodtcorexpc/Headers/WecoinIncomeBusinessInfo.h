//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LiteappJumpInfo, NSString, RealNameAuthInfo, WecoinActionSheetInfo;

@interface WecoinIncomeBusinessInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WecoinActionSheetInfo *actionSheetInfo; // @dynamic actionSheetInfo;
@property(retain, nonatomic) RealNameAuthInfo *authInfo; // @dynamic authInfo;
@property(nonatomic) unsigned int businessId; // @dynamic businessId;
@property(retain, nonatomic) LiteappJumpInfo *encashInterceptJumpInfo; // @dynamic encashInterceptJumpInfo;
@property(retain, nonatomic) NSString *extraInfo; // @dynamic extraInfo;
@property(retain, nonatomic) NSString *extraLinkInfo; // @dynamic extraLinkInfo;
@property(retain, nonatomic) NSString *extraLinkUrl; // @dynamic extraLinkUrl;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(nonatomic) long long incomeBalance; // @dynamic incomeBalance;
@property(retain, nonatomic) NSString *incomeUrl; // @dynamic incomeUrl;
@property(retain, nonatomic) NSString *name; // @dynamic name;

@end

