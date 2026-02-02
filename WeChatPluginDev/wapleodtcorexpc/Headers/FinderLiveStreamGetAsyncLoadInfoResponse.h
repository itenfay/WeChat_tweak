//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveAggregationCardInfoBundle, FinderLiveStreamGetAsyncLoadInfoConfig, NSMutableArray;

@interface FinderLiveStreamGetAsyncLoadInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *contactAsyncInfoMap; // @dynamic contactAsyncInfoMap;
@property(retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *getAsyncLoadInfoConfig; // @dynamic getAsyncLoadInfoConfig;
@property(retain, nonatomic) FinderLiveAggregationCardInfoBundle *liveAggregationCardInfo; // @dynamic liveAggregationCardInfo;
@property(nonatomic) unsigned int liveContactTtlSeconds; // @dynamic liveContactTtlSeconds;
@property(retain, nonatomic) NSMutableArray *objectAsyncInfoMap; // @dynamic objectAsyncInfoMap;
@property(nonatomic) unsigned int objectInfoRefreshIntervalSeconds; // @dynamic objectInfoRefreshIntervalSeconds;
@property(retain, nonatomic) NSMutableArray *resultList; // @dynamic resultList;

@end

