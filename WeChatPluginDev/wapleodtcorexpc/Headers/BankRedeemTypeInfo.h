//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SlowRedeemDisplayInfo;

@interface BankRedeemTypeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bindSerialno; // @dynamic bindSerialno;
@property(retain, nonatomic) NSMutableArray *redeemTypeList; // @dynamic redeemTypeList;
@property(retain, nonatomic) SlowRedeemDisplayInfo *slowRedeemDisplayInfo; // @dynamic slowRedeemDisplayInfo;

@end

