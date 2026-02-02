//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, EmotionReward, NSMutableArray;

@interface GetEmotionRewardResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int donorNum; // @dynamic donorNum;
@property(retain, nonatomic) NSMutableArray *donors; // @dynamic donors;
@property(retain, nonatomic) NSMutableArray *price; // @dynamic price;
@property(retain, nonatomic) EmotionReward *reward; // @dynamic reward;

@end

