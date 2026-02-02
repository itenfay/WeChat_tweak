//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLiveLotteryAttendMethod, FinderLiveLotteryClaimMethod, FinderLiveLotteryPrizeMethod, NSData, NSString;

@interface FinderLiveCreateLotteryRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod; // @dynamic claimMethod;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) NSString *lotteryDescription; // @dynamic lotteryDescription;
@property(nonatomic) unsigned int lotteryDuration; // @dynamic lotteryDuration;
@property(nonatomic) unsigned int lotteryMethodId; // @dynamic lotteryMethodId;
@property(nonatomic) unsigned int lotteryWinnerCnt; // @dynamic lotteryWinnerCnt;
@property(retain, nonatomic) FinderLiveLotteryAttendMethod *method; // @dynamic method;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned long long objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(retain, nonatomic) FinderLiveLotteryPrizeMethod *prizeMethod; // @dynamic prizeMethod;
@property(nonatomic) unsigned long long settingFlag; // @dynamic settingFlag;

@end

