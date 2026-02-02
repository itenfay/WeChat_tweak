//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLocation, FinderTopicBgmInfo, ForwardMessageLogicController, NSData, NSMutableArray, NSMutableSet, NSString, WCFinderSectionInfo, WCFinderTopicInfo;
@protocol WCFinderTopicListViewModelDelegate;

@interface WCFinderTopicListViewModel : NSObject
{
    _Bool _queryContinueFlag;
    _Bool _disabledFlag;
    int _topicType;
    int _tabType;
    int _fromType;
    id <WCFinderTopicListViewModelDelegate> _delegate;
    NSMutableArray *_poiTopicRecommendStringArray;
    NSMutableArray *_poiTopicRecommendItemArray;
    NSString *_topicDetailLocation;
    WCFinderTopicInfo *_topicInfo;
    unsigned long long _refreshTime;
    FinderTopicBgmInfo *_bgmInfo;
    NSString *_encryptedTopicId;
    double _menuExpTime;
    NSString *_latestQueryText;
    NSString *_latestRequestID;
    NSMutableArray *_contentVMArray;
    NSData *_lastBuffer;
    unsigned long long _topicTotalCount;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_refObjectid;
    WCFinderTopicInfo *_poiTopicRecommend;
    NSMutableSet *_poiTopicRecommendItemsSet;
    ForwardMessageLogicController *_forwardLogic;
    FinderLocation *_location;
    WCFinderSectionInfo *_sectionInfo;
    unsigned long long _eventTopicId;
    unsigned long long _patMusicPermission;
    NSData *_byPassInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(nonatomic) _Bool disabledFlag; // @synthesize disabledFlag=_disabledFlag;
@property(nonatomic) unsigned long long patMusicPermission; // @synthesize patMusicPermission=_patMusicPermission;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long eventTopicId; // @synthesize eventTopicId=_eventTopicId;
@property(retain, nonatomic) WCFinderSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) NSMutableSet *poiTopicRecommendItemsSet; // @synthesize poiTopicRecommendItemsSet=_poiTopicRecommendItemsSet;
@property(retain, nonatomic) WCFinderTopicInfo *poiTopicRecommend; // @synthesize poiTopicRecommend=_poiTopicRecommend;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned long long topicTotalCount; // @synthesize topicTotalCount=_topicTotalCount;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *contentVMArray; // @synthesize contentVMArray=_contentVMArray;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(nonatomic) double menuExpTime; // @synthesize menuExpTime=_menuExpTime;
@property(copy, nonatomic) NSString *encryptedTopicId; // @synthesize encryptedTopicId=_encryptedTopicId;
@property(retain, nonatomic) FinderTopicBgmInfo *bgmInfo; // @synthesize bgmInfo=_bgmInfo;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) int topicType; // @synthesize topicType=_topicType;
@property(retain, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(copy, nonatomic) NSString *topicDetailLocation; // @synthesize topicDetailLocation=_topicDetailLocation;
@property(retain, nonatomic) NSMutableArray *poiTopicRecommendItemArray; // @synthesize poiTopicRecommendItemArray=_poiTopicRecommendItemArray;
@property(retain, nonatomic) NSMutableArray *poiTopicRecommendStringArray; // @synthesize poiTopicRecommendStringArray=_poiTopicRecommendStringArray;
@property(nonatomic) __weak id <WCFinderTopicListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)finderTopicFeedOrderChanged:(unsigned long long)arg1;
- (void)finderFeedOfTopicBeDeleteWithTid:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)fakeInsertPostEventDataItem:(id)arg1;
- (_Bool)hasTargetDataItem:(id)arg1;
- (void)fakeInsertPostPatMusicDataItem:(id)arg1;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (id)getFirstContentVM;
- (int)feedViewControllerScene;
- (id)getTopicsArray;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (unsigned long long)getReportMusicType;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)closeEvent;
- (id)getAntispamToastTips;
- (id)getMusicLyricsWording;
- (id)getPatMusicTitleWording;
- (void)shareToMoment:(id)arg1;
- (void)shareToFriend:(id)arg1;
- (id)getTopicWordsTopicExt;
- (unsigned long long)getTopicTotalWatchCount;
- (unsigned long long)getTopicTotalCount;
- (id)getHeaderImageUrl;
- (id)dataItemAtIndex:(unsigned long long)arg1;
- (void)reportClickActionInfo:(id)arg1;
- (id)contentVMAtIndexPath:(id)arg1;
- (_Bool)isTopicDataItemSection:(unsigned long long)arg1;
- (long long)contentVMIndexWithTid:(id)arg1;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (unsigned long long)numsOfSection;
- (long long)dataItemSection;
- (void)resetSearchStatus;
- (id)generateSearchlistViewModel;
- (id)genTopicPageTagTitle;
- (id)streamReportPageTag;
- (_Bool)isDataEmpty;
- (_Bool)isNoMoreData;
- (id)latestQueryString;
- (void)appendDataItems:(id)arg1;
- (void)removeEventFeedWithTid:(id)arg1;
- (void)onQueryNextPageDataItem;
- (void)fetchFirstPageData;
- (void)getTopicListWithType:(int)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 refObjectid:(id)arg6 poiTopicRecommend:(id)arg7 eventTopicId:(unsigned long long)arg8 tabType:(int)arg9 fromType:(int)arg10 byPassInfo:(id)arg11;
- (void)loadCacheResponseWithType:(int)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 refObjectid:(id)arg6 cacheResponse:(id)arg7 cacheDataItems:(id)arg8 sectionInfo:(id)arg9 tabType:(int)arg10 fromType:(int)arg11 byPassInfo:(id)arg12;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

