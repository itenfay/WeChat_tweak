//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveGlobalRewardLevel : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long consumedWecoinAmount; // @dynamic consumedWecoinAmount;
@property(nonatomic) unsigned long long consumedWecoinAmountThisLevel; // @dynamic consumedWecoinAmountThisLevel;
@property(nonatomic) unsigned long long needWecoinAmountToNextLevel; // @dynamic needWecoinAmountToNextLevel;
@property(nonatomic) unsigned long long nextLevelWecoinAmount; // @dynamic nextLevelWecoinAmount;
@property(retain, nonatomic) NSString *rightsDetailUrl; // @dynamic rightsDetailUrl;
@property(nonatomic) unsigned int selfRewardLevel; // @dynamic selfRewardLevel;

@end

