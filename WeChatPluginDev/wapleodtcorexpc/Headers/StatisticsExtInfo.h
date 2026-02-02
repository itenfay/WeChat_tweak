//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class StatisticsAppInfo, StatisticsBrandVideoAdInfo, StatisticsSnsAdInfo;

@interface StatisticsExtInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) StatisticsBrandVideoAdInfo *brandVideoAdInfo; // @dynamic brandVideoAdInfo;
@property(retain, nonatomic) StatisticsSnsAdInfo *snsAdInfo; // @dynamic snsAdInfo;
@property(retain, nonatomic) StatisticsAppInfo *sourceAppInfo; // @dynamic sourceAppInfo;

@end

