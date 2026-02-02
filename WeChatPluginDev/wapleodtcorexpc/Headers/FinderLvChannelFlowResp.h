//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderPrefetchFlowConfig, FinderPreloadInfo, NSData, NSMutableArray;

@interface FinderLvChannelFlowResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *clientPrefetchData; // @dynamic clientPrefetchData;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSMutableArray *oftenreadItems; // @dynamic oftenreadItems;
@property(retain, nonatomic) FinderPrefetchFlowConfig *prefetchFlowConfig; // @dynamic prefetchFlowConfig;
@property(nonatomic) unsigned int prefetchLastFeedCount; // @dynamic prefetchLastFeedCount;
@property(retain, nonatomic) FinderPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(retain, nonatomic) NSMutableArray *recommendItems; // @dynamic recommendItems;

@end

