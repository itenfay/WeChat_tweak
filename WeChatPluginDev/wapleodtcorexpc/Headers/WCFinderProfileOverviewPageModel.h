//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnyPromise, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCFinderCGIProfile, WCFinderFeedArray, WCFinderStreamLoadingState;
@protocol WCFinderProfileOverviewPageModelDelegate, WCFinderProfilePullableFeedViewModel;

@interface WCFinderProfileOverviewPageModel
{
    long long *layoutIdx;
    _Bool _isPullingMode;
    _Bool _checkAllCGIFinish;
    _Bool _waittingFirstPageData;
    _Bool _hasLoadCache;
    AnyPromise *_pageDataLoadedValue;
    id <WCFinderProfileOverviewPageModelDelegate> _delegate;
    NSArray *_pendingFetchSections;
    NSMutableArray *_supportSectionCtrls;
    CDUnknownBlockType _pageDataLoadedValueSetter;
    NSMutableDictionary *_defaultOrders;
    NSMutableDictionary *_secCtrlClsMap;
    NSMutableDictionary *_secCtrlMap;
    NSArray *_sections;
    NSMutableDictionary *_layoutMap;
    unsigned long long _cacheItemSaveKey;
    NSMutableDictionary *_pbSectionIdMap;
    NSMutableDictionary *_secitonDefMap;
    NSMutableDictionary *_cacheSections;
    NSMutableDictionary *_sectionMap;
    NSMutableSet *_pendingFetch;
    WCFinderStreamLoadingState *_homeCGILoadingState;
    WCFinderCGIProfile *_firstCGIProfile;
    long long _cgiState;
    WCFinderFeedArray *_displayFeedArray;
    WCFinderFeedArray *_latestFeedArray;
    id <WCFinderProfilePullableFeedViewModel> _feedArraySource;
}

+ (int)tabId;
+ (_Bool)recordTabDisplayFlagToExtInfo;
+ (_Bool)pageIsRequired;
+ (_Bool)shouldDisplay:(id)arg1;
+ (_Bool)allowLimitMode;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasLoadCache; // @synthesize hasLoadCache=_hasLoadCache;
@property(retain, nonatomic) id <WCFinderProfilePullableFeedViewModel> feedArraySource; // @synthesize feedArraySource=_feedArraySource;
@property(retain, nonatomic) WCFinderFeedArray *latestFeedArray; // @synthesize latestFeedArray=_latestFeedArray;
@property(retain, nonatomic) WCFinderFeedArray *displayFeedArray; // @synthesize displayFeedArray=_displayFeedArray;
@property(nonatomic) long long cgiState; // @synthesize cgiState=_cgiState;
@property(nonatomic) _Bool waittingFirstPageData; // @synthesize waittingFirstPageData=_waittingFirstPageData;
@property(retain, nonatomic) WCFinderCGIProfile *firstCGIProfile; // @synthesize firstCGIProfile=_firstCGIProfile;
@property(retain, nonatomic) WCFinderStreamLoadingState *homeCGILoadingState; // @synthesize homeCGILoadingState=_homeCGILoadingState;
@property(retain, nonatomic) NSMutableSet *pendingFetch; // @synthesize pendingFetch=_pendingFetch;
@property(retain, nonatomic) NSMutableDictionary *sectionMap; // @synthesize sectionMap=_sectionMap;
@property(retain, nonatomic) NSMutableDictionary *cacheSections; // @synthesize cacheSections=_cacheSections;
@property(retain, nonatomic) NSMutableDictionary *secitonDefMap; // @synthesize secitonDefMap=_secitonDefMap;
@property(retain, nonatomic) NSMutableDictionary *pbSectionIdMap; // @synthesize pbSectionIdMap=_pbSectionIdMap;
@property(nonatomic) _Bool checkAllCGIFinish; // @synthesize checkAllCGIFinish=_checkAllCGIFinish;
@property(nonatomic) unsigned long long cacheItemSaveKey; // @synthesize cacheItemSaveKey=_cacheItemSaveKey;
@property(retain, nonatomic) NSMutableDictionary *layoutMap; // @synthesize layoutMap=_layoutMap;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSMutableDictionary *secCtrlMap; // @synthesize secCtrlMap=_secCtrlMap;
@property(retain, nonatomic) NSMutableDictionary *secCtrlClsMap; // @synthesize secCtrlClsMap=_secCtrlClsMap;
@property(retain, nonatomic) NSMutableDictionary *defaultOrders; // @synthesize defaultOrders=_defaultOrders;
@property(copy, nonatomic) CDUnknownBlockType pageDataLoadedValueSetter; // @synthesize pageDataLoadedValueSetter=_pageDataLoadedValueSetter;
@property(retain, nonatomic) NSMutableArray *supportSectionCtrls; // @synthesize supportSectionCtrls=_supportSectionCtrls;
@property(retain, nonatomic) NSArray *pendingFetchSections; // @synthesize pendingFetchSections=_pendingFetchSections;
@property(nonatomic) __weak id <WCFinderProfileOverviewPageModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AnyPromise *pageDataLoadedValue; // @synthesize pageDataLoadedValue=_pageDataLoadedValue;
@property(nonatomic) _Bool isPullingMode; // @synthesize isPullingMode=_isPullingMode;
- (id)reportParamsBlock;
- (void)profileFeedPageNotifyFeedChanged:(id)arg1;
- (void)onFinderStickTopChanged:(id)arg1;
- (void)onProfileOverviewSection:(long long)arg1 changedCount:(long long)arg2;
- (void)onMoreFeedArrayChanged:(id)arg1;
- (_Bool)triggerFetchMore:(id)arg1;
- (void)ensurePullableJustWatchData:(id)arg1 watchAction:(id)arg2;
- (void)changeFeedArrayFeedModelSource:(id)arg1 pullingMode:(_Bool)arg2;
- (void)changeFeedArray:(id)arg1 pullingMode:(_Bool)arg2;
- (id)createClickFeedVM:(id)arg1;
- (id)mapFeedNotDisplayAtFeedSection:(id)arg1;
- (void)onLatestFeedArrayDataChanged;
- (void)_onLatestFeedArrayChanged;
- (void)observeFeedSection:(id)arg1;
- (void)_updateProfileShareFeedData;
- (void)setHeadData:(id)arg1;
- (long long)sortSections:(id)arg1 right:(id)arg2;
- (void)resortSectionsFromMap;
- (void)storeCache;
- (void)notifyRequestDataFinish:(_Bool)arg1;
- (id)handleCGISectionList:(id)arg1;
- (void)_fetchCGITryEnterIdle;
- (void)startFetchCGI:(CDUnknownBlockType)arg1;
- (void)refetchPageData;
- (void)requestPageData;
- (_Bool)shouldDisplayTab;
- (id)ensureSection:(long long)arg1;
- (void)update:(long long)arg1 necessary:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)doLoadCache:(CDUnknownBlockType)arg1;
- (void)doLoadCache;
- (void)beforeLoadCache;
- (_Bool)isMoreFeedSectionLoadingFristPage;
@property(readonly, nonatomic) WCFinderStreamLoadingState *loadingState;
- (id)sectionWithType:(long long)arg1;
- (id)sectionCtrlForSecType:(long long)arg1;
- (id)displaySectionCtrls;
- (void)dealloc;
- (void)resetLayoutDefaultSortIndex;
- (void)loadSectionDefines;
- (id)viewPageClassName;
- (id)displayName;
@property(readonly, nonatomic) _Bool pageDataLoaded;
- (id)init;
- (void)onFinderDataItemDelete:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

