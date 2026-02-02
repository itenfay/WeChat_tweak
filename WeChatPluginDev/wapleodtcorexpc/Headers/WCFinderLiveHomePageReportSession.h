//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderLiveHomePageInitialParams, WCFinderLivePageStayReporter;

@interface WCFinderLiveHomePageReportSession : NSObject
{
    _Bool _skipFeedsReport;
    int _commentScene;
    unsigned long long _fromLiveID;
    NSString *_fromReportScene;
    WCFinderLivePageStayReporter *_moreLiveReporter;
    WCFinderLiveHomePageInitialParams *_initialParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveHomePageInitialParams *initialParams; // @synthesize initialParams=_initialParams;
@property(retain, nonatomic) WCFinderLivePageStayReporter *moreLiveReporter; // @synthesize moreLiveReporter=_moreLiveReporter;
@property(nonatomic) _Bool skipFeedsReport; // @synthesize skipFeedsReport=_skipFeedsReport;
@property(retain, nonatomic) NSString *fromReportScene; // @synthesize fromReportScene=_fromReportScene;
@property(nonatomic) unsigned long long fromLiveID; // @synthesize fromLiveID=_fromLiveID;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
- (void)reportFinderFeedActionType:(int)arg1 dataItem:(id)arg2 value:(id)arg3;
- (void)reportAggregationCardAction:(int)arg1 feedVM:(id)arg2 effectiveExposeTimeMs:(unsigned long long)arg3 startEffectiveExposeTimeMs:(unsigned long long)arg4 exposeTimeMs:(unsigned long long)arg5;
- (void)reportAggregationCardClick:(id)arg1;
- (void)reportNewValidRatioExposeEnd:(id)arg1 index:(unsigned long long)arg2 sectionVM:(id)arg3;
- (void)reportNewValidRatioExposeStart:(id)arg1 cell:(id)arg2 indexPath:(id)arg3 collectionView:(id)arg4 sectionVM:(id)arg5 pageIndex:(unsigned long long)arg6;
- (void)bindNewExposeReport:(id)arg1 collectionView:(id)arg2 elementModel:(id)arg3 indexPath:(id)arg4 report0PercentExpose:(_Bool)arg5 getSectionVmBlock:(CDUnknownBlockType)arg6;
- (void)cleanExposeCache;
- (void)reportFeedAutoPlayIfNeeded:(id)arg1 play:(_Bool)arg2 index:(unsigned long long)arg3 sectionVM:(id)arg4;
- (void)updatePlayStateWithModel:(id)arg1 state:(unsigned long long)arg2 index:(unsigned long long)arg3 sectionVM:(id)arg4;
- (void)updateFeedExposeEnd:(id)arg1 index:(unsigned long long)arg2 sectionVM:(id)arg3;
- (void)updateFeedExpose:(id)arg1;
- (void)reportFeedExposeEnd:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3 sectionVM:(id)arg4;
- (void)reportFeedExpose:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3 sectionVM:(id)arg4 pageIndex:(unsigned long long)arg5;
- (void)updateSkipFeedsReport:(_Bool)arg1;
- (unsigned long long)mainPageReportPosition:(id)arg1;
- (id)kvReportNoticeJsonDictWithContainerType:(unsigned long long)arg1 columnId:(id)arg2 index:(unsigned long long)arg3 noticeId:(id)arg4;
- (id)kvReportLiveRoomJsonDictWithSection:(id)arg1 feedVM:(id)arg2 index:(unsigned long long)arg3;
- (void)report22947QuitActionWithSource:(unsigned long long)arg1;
- (void)report22946EnterActionWithSource:(unsigned long long)arg1;
- (void)report23057ColumnMoreButtonAction:(unsigned long long)arg1 containerModel:(id)arg2;
- (void)report23057PersonalCenterBtnAction:(unsigned long long)arg1;
- (void)report23057RightSearchAction:(unsigned long long)arg1;
- (void)report23057ConcertNoticeCardAction:(unsigned long long)arg1 activityId:(id)arg2 eidUdfKv:(id)arg3;
- (void)report23057ShowConcertTicketActionWithModel:(id)arg1;
- (void)report23057MoreNavBtnAction:(unsigned long long)arg1;
- (void)report23057JumperAction:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2 containerModel:(id)arg3;
- (void)report23057CardAction:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2 cardIndex:(unsigned long long)arg3 sectionVM:(id)arg4 feedVM:(id)arg5;
- (void)report23057SectionListExpose:(unsigned long long)arg1 containerModel:(id)arg2;
- (void)report21158FollowNoticeHalfAction:(long long)arg1 feedVM:(id)arg2 sectionVM:(id)arg3;
- (void)report21158NoticeActionFromContainerType:(unsigned long long)arg1 noticeAction:(long long)arg2 model:(id)arg3 columnId:(id)arg4 index:(unsigned long long)arg5;
- (void)report21053ClickActionWithSection:(id)arg1 feedVM:(id)arg2 index:(unsigned long long)arg3;
- (void)report21053ExposeActionWithSection:(id)arg1 feedVM:(id)arg2 index:(unsigned long long)arg3;
- (void)reportInteractiveHomePageAction:(unsigned long long)arg1 liveID:(unsigned long long)arg2;
- (void)onSessionEnterFromSection:(id)arg1 feedVM:(id)arg2 index:(unsigned long long)arg3;
- (id)initWithCommentScene:(int)arg1 params:(id)arg2;

@end

