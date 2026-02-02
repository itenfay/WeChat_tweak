//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLiveBattleReportInfo, NSData, NSMutableArray, NSString;

@interface FinderLiveRewardRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *batchId; // @dynamic batchId;
@property(retain, nonatomic) FinderLiveBattleReportInfo *battleReportInfo; // @dynamic battleReportInfo;
@property(nonatomic) _Bool comboFinish; // @dynamic comboFinish;
@property(retain, nonatomic) NSString *comboId; // @dynamic comboId;
@property(retain, nonatomic) NSData *customInfo; // @dynamic customInfo;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSMutableArray *prepareBuf; // @dynamic prepareBuf;
@property(retain, nonatomic) NSMutableArray *prepareBufInfos; // @dynamic prepareBufInfos;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) unsigned int rewardAmountInWecoin; // @dynamic rewardAmountInWecoin;
@property(retain, nonatomic) NSString *rewardDurationId; // @dynamic rewardDurationId;
@property(retain, nonatomic) NSData *rewardExtInfo; // @dynamic rewardExtInfo;
@property(nonatomic) unsigned int rewardProductCount; // @dynamic rewardProductCount;
@property(retain, nonatomic) NSString *rewardProductId; // @dynamic rewardProductId;
@property(nonatomic) unsigned int rewardType; // @dynamic rewardType;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSString *switchSkinId; // @dynamic switchSkinId;
@property(retain, nonatomic) NSString *toMicUsername; // @dynamic toMicUsername;

@end

