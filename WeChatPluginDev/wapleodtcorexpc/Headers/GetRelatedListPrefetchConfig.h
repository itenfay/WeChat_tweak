//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GetRelatedListMPPrefetchExptConfig;

@interface GetRelatedListPrefetchConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) GetRelatedListMPPrefetchExptConfig *mpHorizontalPrefetchConfig; // @dynamic mpHorizontalPrefetchConfig;
@property(nonatomic) unsigned int mpInterestCoverValidTime; // @dynamic mpInterestCoverValidTime;
@property(nonatomic) unsigned int mpPrefetchValidTime; // @dynamic mpPrefetchValidTime;
@property(nonatomic) unsigned int prefetchLastFeedCount; // @dynamic prefetchLastFeedCount;

@end

