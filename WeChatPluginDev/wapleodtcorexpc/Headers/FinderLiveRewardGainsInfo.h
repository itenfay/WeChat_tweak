//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveContact;

@interface FinderLiveRewardGainsInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveContact *contact; // @dynamic contact;
@property(nonatomic) unsigned long long rewardTime; // @dynamic rewardTime;
@property(nonatomic) unsigned int rewardTotalAmountInWecoin; // @dynamic rewardTotalAmountInWecoin;

@end

