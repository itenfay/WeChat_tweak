//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FinderLiveRewardPrepareReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *businessBuff; // @dynamic businessBuff;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *incomeUsername; // @dynamic incomeUsername;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned int prepareRewardProductCount; // @dynamic prepareRewardProductCount;
@property(nonatomic) unsigned int rewardAmountInWecoin; // @dynamic rewardAmountInWecoin;
@property(retain, nonatomic) NSString *rewardFinderUsername; // @dynamic rewardFinderUsername;
@property(nonatomic) unsigned int rewardProductCount; // @dynamic rewardProductCount;
@property(retain, nonatomic) NSString *rewardProductId; // @dynamic rewardProductId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int sceneFlag; // @dynamic sceneFlag;

@end

