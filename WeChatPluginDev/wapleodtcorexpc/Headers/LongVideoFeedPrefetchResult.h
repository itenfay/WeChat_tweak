//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderPrefetchFlowConfig, FinderRedDotCtrlInfo, NSData, NSString;

@interface LongVideoFeedPrefetchResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cacheUid; // @dynamic cacheUid;
@property(retain, nonatomic) FinderPrefetchFlowConfig *prefetchConfig; // @dynamic prefetchConfig;
@property(nonatomic) unsigned int prefetchHitCacheType; // @dynamic prefetchHitCacheType;
@property(nonatomic) unsigned int readStatus; // @dynamic readStatus;
@property(retain, nonatomic) FinderRedDotCtrlInfo *requestRedDotInfo; // @dynamic requestRedDotInfo;
@property(nonatomic) unsigned long long respTimeSeconds; // @dynamic respTimeSeconds;
@property(retain, nonatomic) NSData *resultData; // @dynamic resultData;
@property(nonatomic) int resultDataType; // @dynamic resultDataType;

@end

