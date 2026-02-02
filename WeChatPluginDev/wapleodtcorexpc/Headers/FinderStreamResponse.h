//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderCategoryRecommend, FinderContactRecommend, FinderLivePreloadInfo, FinderPreloadInfo, FinderRelatedRecommendTips, FinderSectionInfo, FinderStreamLayoutInfo, FinderStreamOftenReadBar, FinderStreamPrefechTimeIntervalConf, FinderStreamTipsShowInfo, FinderTopicRecommend, NSData, NSMutableArray, NSString, StreamBackupInfo;

@interface FinderStreamResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) StreamBackupInfo *backupInfo; // @dynamic backupInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSString *curLocation; // @dynamic curLocation;
@property(retain, nonatomic) NSData *debugMessage; // @dynamic debugMessage;
@property(retain, nonatomic) FinderCategoryRecommend *finderCategoryRecommends; // @dynamic finderCategoryRecommends;
@property(retain, nonatomic) FinderContactRecommend *finderContactRecommend; // @dynamic finderContactRecommend;
@property(retain, nonatomic) FinderTopicRecommend *finderTopicRecommends; // @dynamic finderTopicRecommends;
@property(nonatomic) unsigned int forceChangePrefetchResult; // @dynamic forceChangePrefetchResult;
@property(nonatomic) unsigned int gethistoryNow; // @dynamic gethistoryNow;
@property(retain, nonatomic) NSString *historyEndWording; // @dynamic historyEndWording;
@property(retain, nonatomic) NSString *historyHeadWording; // @dynamic historyHeadWording;
@property(retain, nonatomic) FinderStreamPrefechTimeIntervalConf *intervalConf; // @dynamic intervalConf;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderStreamLayoutInfo *layoutInfo; // @dynamic layoutInfo;
@property(retain, nonatomic) NSString *lbsCityName; // @dynamic lbsCityName;
@property(retain, nonatomic) NSMutableArray *liveObjects; // @dynamic liveObjects;
@property(retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo; // @dynamic livePreloadInfo;
@property(nonatomic) unsigned int needClear; // @dynamic needClear;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(retain, nonatomic) FinderStreamOftenReadBar *oftenReadBar; // @dynamic oftenReadBar;
@property(retain, nonatomic) NSString *oob; // @dynamic oob;
@property(nonatomic) unsigned int prefetchLastFeedCount; // @dynamic prefetchLastFeedCount;
@property(retain, nonatomic) FinderPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(retain, nonatomic) FinderRelatedRecommendTips *relatedRecommendTips; // @dynamic relatedRecommendTips;
@property(nonatomic) unsigned int retFlag; // @dynamic retFlag;
@property(retain, nonatomic) FinderSectionInfo *sectionInfo; // @dynamic sectionInfo;
@property(retain, nonatomic) FinderStreamTipsShowInfo *tipsShowInfo; // @dynamic tipsShowInfo;

@end

