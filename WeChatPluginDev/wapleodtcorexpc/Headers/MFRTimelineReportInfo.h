//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MFRItemReportInfo, NSMutableArray, NSString, WCDataItem;

@interface MFRTimelineReportInfo : NSObject
{
    _Bool _isFirstEnteringTimeline;
    MFRItemReportInfo *_currentItemReportInfo;
    NSMutableArray *_exposureItemReportInfos;
    NSMutableArray *_unexposureItemReportInfos;
    unsigned long long _finderRecommendationDisplayedCount;
    unsigned long long _finderRecommendationClickedCount;
    NSString *_timelineSessionID;
    WCDataItem *_badgeDataItem;
    WCDataItem *_lastDisplayedDataItem;
    unsigned long long _missReadDisplayedCount;
    unsigned long long _missReadClickedCount;
    unsigned long long _currentSessionIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long currentSessionIndex; // @synthesize currentSessionIndex=_currentSessionIndex;
@property(nonatomic) unsigned long long missReadClickedCount; // @synthesize missReadClickedCount=_missReadClickedCount;
@property(nonatomic) unsigned long long missReadDisplayedCount; // @synthesize missReadDisplayedCount=_missReadDisplayedCount;
@property(retain, nonatomic) WCDataItem *lastDisplayedDataItem; // @synthesize lastDisplayedDataItem=_lastDisplayedDataItem;
@property(retain, nonatomic) WCDataItem *badgeDataItem; // @synthesize badgeDataItem=_badgeDataItem;
@property(copy, nonatomic) NSString *timelineSessionID; // @synthesize timelineSessionID=_timelineSessionID;
@property(nonatomic) _Bool isFirstEnteringTimeline; // @synthesize isFirstEnteringTimeline=_isFirstEnteringTimeline;
@property(nonatomic) unsigned long long finderRecommendationClickedCount; // @synthesize finderRecommendationClickedCount=_finderRecommendationClickedCount;
@property(nonatomic) unsigned long long finderRecommendationDisplayedCount; // @synthesize finderRecommendationDisplayedCount=_finderRecommendationDisplayedCount;
@property(readonly, nonatomic) NSMutableArray *unexposureItemReportInfos; // @synthesize unexposureItemReportInfos=_unexposureItemReportInfos;
@property(readonly, nonatomic) NSMutableArray *exposureItemReportInfos; // @synthesize exposureItemReportInfos=_exposureItemReportInfos;
@property(retain, nonatomic) MFRItemReportInfo *currentItemReportInfo; // @synthesize currentItemReportInfo=_currentItemReportInfo;
- (id)generateUnexposureInfo;
- (void)endLastSession;
- (void)beginNewSession:(_Bool)arg1;
- (id)init;

@end

