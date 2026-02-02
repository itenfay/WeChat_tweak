//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface MMListenMusicRewardInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appreciateDesc; // @dynamic appreciateDesc;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) _Bool isOpenReward; // @dynamic isOpenReward;
@property(nonatomic) unsigned int rewardUserCount; // @dynamic rewardUserCount;
@property(retain, nonatomic) NSMutableArray *rewardUserList; // @dynamic rewardUserList;

@end

