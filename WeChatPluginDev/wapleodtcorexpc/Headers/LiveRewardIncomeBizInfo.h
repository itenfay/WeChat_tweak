//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSString;

@interface LiveRewardIncomeBizInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bizAcctId; // @dynamic bizAcctId;
@property(nonatomic) unsigned int bizType; // @dynamic bizType;
@property(retain, nonatomic) FinderJumpInfo *encashInterceptJumpInfo; // @dynamic encashInterceptJumpInfo;
@property(nonatomic) long long incomeBalance; // @dynamic incomeBalance;
@property(retain, nonatomic) NSString *shareContent; // @dynamic shareContent;

@end

