//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveAudienceRewardQuota, NSMutableArray, NSString;

@interface FinderLiveRewardQuotaSwitchInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int canShow; // @dynamic canShow;
@property(retain, nonatomic) NSMutableArray *defaultQuotas; // @dynamic defaultQuotas;
@property(retain, nonatomic) NSString *detailPageUrl; // @dynamic detailPageUrl;
@property(retain, nonatomic) NSMutableArray *historyRewardQuota; // @dynamic historyRewardQuota;
@property(retain, nonatomic) NSString *historyRewardQuotaWording; // @dynamic historyRewardQuotaWording;
@property(retain, nonatomic) FinderLiveAudienceRewardQuota *rewardQuota; // @dynamic rewardQuota;

@end

