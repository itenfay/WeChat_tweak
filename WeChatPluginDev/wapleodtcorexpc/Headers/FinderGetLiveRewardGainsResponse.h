//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface FinderGetLiveRewardGainsResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned long long heatValue; // @dynamic heatValue;
@property(retain, nonatomic) NSMutableArray *infoList; // @dynamic infoList;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned long long liveHeatValue; // @dynamic liveHeatValue;
@property(nonatomic) unsigned long long rewardTotalAmountInHeat; // @dynamic rewardTotalAmountInHeat;
@property(nonatomic) unsigned long long rewardTotalAmountInWecoin; // @dynamic rewardTotalAmountInWecoin;
@property(nonatomic) unsigned int totalNum; // @dynamic totalNum;
@property(nonatomic) float totalValue; // @dynamic totalValue;

@end

