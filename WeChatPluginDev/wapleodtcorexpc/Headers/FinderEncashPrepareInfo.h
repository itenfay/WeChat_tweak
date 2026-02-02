//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEncashPrepareInfo_RealNameAuthInfo, FinderJumpInfo, NSMutableArray, NSString;

@interface FinderEncashPrepareInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderEncashPrepareInfo_RealNameAuthInfo *authInfo; // @dynamic authInfo;
@property(retain, nonatomic) NSMutableArray *bizEncashInfoList; // @dynamic bizEncashInfoList;
@property(retain, nonatomic) FinderJumpInfo *encashInterceptJumpInfo; // @dynamic encashInterceptJumpInfo;
@property(nonatomic) unsigned int encashScene; // @dynamic encashScene;
@property(nonatomic) long long incomeBalance; // @dynamic incomeBalance;
@property(retain, nonatomic) NSString *incomeBillUrl; // @dynamic incomeBillUrl;
@property(retain, nonatomic) NSString *newlyGeneratedIncomeTips; // @dynamic newlyGeneratedIncomeTips;
@property(nonatomic) long long pendingIncomeBalance; // @dynamic pendingIncomeBalance;

@end

