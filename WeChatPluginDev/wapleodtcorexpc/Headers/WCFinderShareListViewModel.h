//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCFinderDataItem, WCFinderFeedArray, WCFinderPushFeedViewParams, WCFinderShareFeedDataProvider, WCFinderShareListReportModel;
@protocol WCFinderShareListViewModelDelegate;

@interface WCFinderShareListViewModel : NSObject
{
    _Bool _firstFeedLoaded;
    _Bool _finderEntryCardStyleSwitch;
    int _commentScene;
    id <WCFinderShareListViewModelDelegate> _delegate;
    unsigned long long _refreshTime;
    NSMutableSet *_showlikeInduceContentTidSet;
    WCFinderPushFeedViewParams *_funcParams;
    NSString *_moreRelatedTips;
    long long _partialExposeSection;
    NSString *_needCleanAfterAppendData;
    unsigned long long _startLoadingTimestamp;
    WCFinderDataItem *_sharedDataItem;
    unsigned long long _requestScene;
    WCFinderShareListReportModel *_reportModel;
    NSMutableDictionary *_enhancedByItemDict;
    MMTimer *_detectionValidityTimer;
    NSData *_lastCheckBuffer;
    unsigned long long _lastdetectionValidityTimestamp;
    WCFinderShareFeedDataProvider *_dataProvider;
}

+ (_Bool)relatedRecommendTipsValid:(id)arg1;
+ (_Bool)shouldShowGuideNextBubble:(id)arg1 curProgress:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareFeedDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) unsigned long long lastdetectionValidityTimestamp; // @synthesize lastdetectionValidityTimestamp=_lastdetectionValidityTimestamp;
@property(retain, nonatomic) NSData *lastCheckBuffer; // @synthesize lastCheckBuffer=_lastCheckBuffer;
@property(retain, nonatomic) MMTimer *detectionValidityTimer; // @synthesize detectionValidityTimer=_detectionValidityTimer;
@property(retain, nonatomic) NSMutableDictionary *enhancedByItemDict; // @synthesize enhancedByItemDict=_enhancedByItemDict;
@property(nonatomic) _Bool finderEntryCardStyleSwitch; // @synthesize finderEntryCardStyleSwitch=_finderEntryCardStyleSwitch;
@property(retain, nonatomic) WCFinderShareListReportModel *reportModel; // @synthesize reportModel=_reportModel;
@property(nonatomic) unsigned long long requestScene; // @synthesize requestScene=_requestScene;
@property(retain, nonatomic) WCFinderDataItem *sharedDataItem; // @synthesize sharedDataItem=_sharedDataItem;
@property(nonatomic) unsigned long long startLoadingTimestamp; // @synthesize startLoadingTimestamp=_startLoadingTimestamp;
@property(copy, nonatomic) NSString *needCleanAfterAppendData; // @synthesize needCleanAfterAppendData=_needCleanAfterAppendData;
@property(nonatomic) long long partialExposeSection; // @synthesize partialExposeSection=_partialExposeSection;
@property(nonatomic) _Bool firstFeedLoaded; // @synthesize firstFeedLoaded=_firstFeedLoaded;
@property(retain, nonatomic) NSString *moreRelatedTips; // @synthesize moreRelatedTips=_moreRelatedTips;
@property(retain, nonatomic) WCFinderPushFeedViewParams *funcParams; // @synthesize funcParams=_funcParams;
@property(retain, nonatomic) NSMutableSet *showlikeInduceContentTidSet; // @synthesize showlikeInduceContentTidSet=_showlikeInduceContentTidSet;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak id <WCFinderShareListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemDeleteFromScene:(int)arg1 tid:(id)arg2 toastWording:(id)arg3;
- (void)onLiveTaskDisliked:(id)arg1;
- (id)collectionListProviderForContentVM:(id)arg1;
- (id)getAllUnReadLiveFeed;
- (unsigned long long)getFirstUnExposedItemIndex;
- (void)collectUnreadDataItems:(id)arg1;
- (_Bool)_insertEnhanceList:(id)arg1 location:(unsigned long long)arg2;
- (void)onFeedVMInsertEnhanceList:(id)arg1 targetTid:(id)arg2;
- (void)disposeEnhanceInsertFeedsWithContentVM:(id)arg1 eventType:(int)arg2;
- (void)triggerEnhanceListWithContentVM:(id)arg1 eventType:(int)arg2 streamType:(int)arg3;
- (void)reportLoadingFluencyInfoWithExitFlag:(_Bool)arg1;
- (void)_addDetectionFeedsValidityTimerWithTimeInterval:(double)arg1;
- (void)detectionFeedsValidity;
- (void)stopDetectionFeedsValidity;
- (void)startDetectionFeedsValidity;
- (id)minimizeBizName;
- (int)getRelatedCardGuideTabTypeWithCardTid:(id)arg1;
- (id)getRelatedCardLastBufferWithTabType:(int)arg1;
- (id)getRelatedContentVMWithTabType:(int)arg1;
- (int)feedViewControllerScene;
- (void)_fillContentVMParamWithTargetFirstFeed:(id)arg1;
- (void)onDataProvider:(id)arg1 onFirstPageResp:(id)arg2;
- (id)mapToContentVM:(id)arg1;
- (void)onDataProviderPlaceholderDataInResponse;
- (void)onFeedArrayChanged;
- (void)onDataProviderLoadStateChanged;
- (_Bool)shouldShowGuideNextBubbleCurProgress:(double)arg1;
- (void)deleteFeedWithIds:(id)arg1;
- (void)onFinderDataItemMediaURLIsExpired:(id)arg1;
- (id)contentMediaIndexPathWithTid:(id)arg1;
- (_Bool)showShowEnableRecommendView;
@property(readonly, nonatomic) _Bool isSourceValid;
- (_Bool)isPreviewScene;
- (id)contentVMWithTid:(id)arg1;
- (id)contentVMWithIndex:(unsigned long long)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (void)requestPrePageData;
- (_Bool)allowReqeustPrePageData;
- (void)requestNextPageData;
- (void)requestData;
- (void)resetRelatedRecommendTips;
- (id)relatedRecommendTips;
@property(readonly, nonatomic) NSString *enterTid;
- (void)setStateFlag:(unsigned long long)arg1;
- (struct WCFinderShareDataState)dataState;
- (id)createProvoderParamsTid:(id)arg1 encrytedObjectidTid:(id)arg2 nonceID:(id)arg3 guideBubbleTipsInfo:(id)arg4;
- (void)dealloc;
- (void)appendPlaceholderObject;
@property(readonly, nonatomic) NSMutableArray *jumpFeedArray;
@property(readonly, nonatomic) WCFinderFeedArray *feedArray;
- (id)_initWithTid:(id)arg1 encrytedObjectidTid:(id)arg2 nonceID:(id)arg3 dataScene:(id)arg4 commentScene:(int)arg5 requestScene:(unsigned long long)arg6 reportModel:(id)arg7 funcParams:(id)arg8;
- (id)initWithEncrytedObjectidTid:(id)arg1 nonceID:(id)arg2 dataScene:(id)arg3 commentScene:(int)arg4 requestScene:(unsigned long long)arg5 reportModel:(id)arg6 funcParams:(id)arg7;
- (id)initWithTid:(id)arg1 nonceID:(id)arg2 dataScene:(id)arg3 commentScene:(int)arg4 requestScene:(unsigned long long)arg5 reportModel:(id)arg6 funcParams:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

