//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, TingUserRemoteFeature_UserStatisticsInfo;

@interface TingUserRemoteFeature : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *extraFeatureJson; // @dynamic extraFeatureJson;
@property(retain, nonatomic) NSMutableArray *interactionHistory; // @dynamic interactionHistory;
@property(nonatomic) unsigned long long lastUpdateTime; // @dynamic lastUpdateTime;
@property(retain, nonatomic) TingUserRemoteFeature_UserStatisticsInfo *recommendUserStaticsInfo; // @dynamic recommendUserStaticsInfo;

@end

