//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderTopicBgmInfo, NSData, NSMutableArray, NSString, WCFinderSectionInfo, WCFinderTopicInfo;
@protocol WCFinderTopicListDetailViewModelDelegate;

@interface WCFinderTopicListDetailViewModel : NSObject
{
    _Bool _isPinnedStateChanged;
    _Bool _listForceShowRingtoneGuide;
    _Bool _listJumpCarouselHighPriorty;
    _Bool _queryContinueFlag;
    int _topicType;
    int _tabType;
    int _innerTabType;
    int _fromType;
    id <WCFinderTopicListDetailViewModelDelegate> _delegate;
    unsigned long long _refreshTime;
    FinderTopicBgmInfo *_bgmInfo;
    NSMutableArray *_allSearchDataItems;
    WCFinderTopicInfo *_topicInfo;
    NSString *_refObjectid;
    unsigned long long _eventTopicId;
    NSData *_lastBuffer;
    NSString *_latestQueryText;
    NSString *_latestRequestID;
    NSString *_latitude;
    NSString *_longitude;
    WCFinderTopicInfo *_poiTopicRecommend;
    WCFinderSectionInfo *_sectionInfo;
    NSData *_byPassInfo;
}

+ (unsigned long long)getReportMusicTypeWithBgmInfo:(id)arg1 topicType:(int)arg2;
+ (id)initWithTopicType:(int)arg1 lastBuffer:(id)arg2 latestRequestID:(id)arg3 queryText:(id)arg4 queryContinueFlag:(_Bool)arg5 dataSources:(id)arg6 latitude:(id)arg7 longitude:(id)arg8 refObjectid:(id)arg9 tabType:(int)arg10 innerTabType:(int)arg11 fromType:(int)arg12 poiTopicRecommend:(id)arg13 sectionInfo:(id)arg14 bgmInfo:(id)arg15 eventTopicId:(unsigned long long)arg16 byPassInfo:(id)arg17 listForceShowRingtoneGuide:(_Bool)arg18 listJumpCarouselHighPriorty:(_Bool)arg19;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(retain, nonatomic) WCFinderSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(retain, nonatomic) WCFinderTopicInfo *poiTopicRecommend; // @synthesize poiTopicRecommend=_poiTopicRecommend;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(nonatomic) int innerTabType; // @synthesize innerTabType=_innerTabType;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(nonatomic) _Bool listJumpCarouselHighPriorty; // @synthesize listJumpCarouselHighPriorty=_listJumpCarouselHighPriorty;
@property(nonatomic) _Bool listForceShowRingtoneGuide; // @synthesize listForceShowRingtoneGuide=_listForceShowRingtoneGuide;
@property(nonatomic) unsigned long long eventTopicId; // @synthesize eventTopicId=_eventTopicId;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(nonatomic) _Bool isPinnedStateChanged; // @synthesize isPinnedStateChanged=_isPinnedStateChanged;
@property(retain, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(retain, nonatomic) NSMutableArray *allSearchDataItems; // @synthesize allSearchDataItems=_allSearchDataItems;
@property(retain, nonatomic) FinderTopicBgmInfo *bgmInfo; // @synthesize bgmInfo=_bgmInfo;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) int topicType; // @synthesize topicType=_topicType;
@property(nonatomic) __weak id <WCFinderTopicListDetailViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTopicFinderDataItemDelete:(id)arg1;
- (int)feedViewControllerScene;
- (long long)numberOfSection;
- (long long)contentIndexOfTid:(id)arg1;
- (void)resetSearchStatus;
- (_Bool)isNoMoreData;
- (id)latestQueryString;
- (void)onQueryNextPageDataItems;
- (void)changeEventFeedPinToTopStateWithTid:(id)arg1 pinned:(_Bool)arg2;
- (void)removeEventFeedWithTid:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (id)searchDataItemAtSection:(long long)arg1;
- (id)searchDataItemAtIndexPath:(id)arg1;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

