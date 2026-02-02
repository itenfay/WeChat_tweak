//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MyWCDB, NSMutableArray, NSObject, NSString, WCHomepageDataProvider_Sns;
@protocol OS_dispatch_queue, WCHomepageDelegate;

@interface WCHomepageMgr
{
    NSString *m_username;
    id <WCHomepageDelegate> m_delegate;
    NSMutableArray *m_cache;
    MyWCDB *m_database;
    WCHomepageDataProvider_Sns *m_dataProvider;
    _Bool m_fristReturnAll;
    long long m_firstRequestResult;
    NSString *m_firstRequestTip;
    _Bool _prePageDayEndFlag;
    int _beginHomePageCount;
    WCHomepageMgr *_starHomepageMgr;
    long long _homepageType;
    NSString *_homepageKey;
    NSObject<OS_dispatch_queue> *_homepageDBQueue;
    NSMutableArray *_m_cacheBeforeFirstJump;
}

+ (id)homepageKeyWithUsername:(id)arg1 homepageType:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool prePageDayEndFlag; // @synthesize prePageDayEndFlag=_prePageDayEndFlag;
@property(retain, nonatomic) NSMutableArray *m_cacheBeforeFirstJump; // @synthesize m_cacheBeforeFirstJump=_m_cacheBeforeFirstJump;
@property(nonatomic) int beginHomePageCount; // @synthesize beginHomePageCount=_beginHomePageCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *homepageDBQueue; // @synthesize homepageDBQueue=_homepageDBQueue;
@property(readonly, copy, nonatomic) NSString *homepageKey; // @synthesize homepageKey=_homepageKey;
@property(readonly, nonatomic) long long homepageType; // @synthesize homepageType=_homepageType;
@property(retain, nonatomic) WCHomepageDataProvider_Sns *m_dataProvider; // @synthesize m_dataProvider;
@property(retain, nonatomic) MyWCDB *m_database; // @synthesize m_database;
@property(retain, nonatomic) NSMutableArray *m_cache; // @synthesize m_cache;
@property(nonatomic) __weak id <WCHomepageDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=m_username;
@property(readonly, nonatomic) WCHomepageMgr *starHomepageMgr; // @synthesize starHomepageMgr=_starHomepageMgr;
- (void)tryClearJumpState;
- (_Bool)isPrePageDayEnd;
- (void)clearJumpState;
- (_Bool)updatePrePage;
- (_Bool)jumpState;
- (_Bool)fetchDataBeforeJumpToItemId:(unsigned long long)arg1;
- (id)firstItemIdInDB;
- (unsigned long long)onServiceCleanCache;
- (void)onServiceMemoryWarning;
- (id)findDataItemInCacheByItemID:(id)arg1;
- (void)modifyCache:(id)arg1;
- (void)deleteDataItem:(id)arg1 notify:(_Bool)arg2;
- (void)insertOrUpdateDataItem:(id)arg1 notify:(_Bool)arg2;
- (void)modifyDataItem:(id)arg1 notify:(_Bool)arg2;
- (void)onStarDataUpdated:(id)arg1 nextPageMaxID:(unsigned long long)arg2;
- (void)onFetchDataBeforeJumpToItemId:(id)arg1 dataList:(id)arg2 success:(_Bool)arg3;
- (void)onHomepagePrePageUpdate:(id)arg1 withChangedTime:(unsigned int)arg2 prePageEnd:(_Bool)arg3 success:(_Bool)arg4;
- (void)onReturnBGUserInfo:(id)arg1;
- (void)onNoMoreDataWithRet:(long long)arg1 andTip:(id)arg2;
- (void)onResetOnceReturnAllDataRenderNoMore;
- (void)onOnceReturnAllDataRenderNoMore;
- (void)onOnceReturnAllDataWithRet:(long long)arg1 andTip:(id)arg2;
- (void)onReturnIsAllData:(id)arg1 andAdData:(id)arg2;
- (void)onYearMonthInfosUpdated:(id)arg1;
- (void)onReturnLimitFeedId:(unsigned long long)arg1;
- (void)onDataUpdated:(id)arg1 maxItemID:(unsigned long long)arg2 minItemID:(unsigned long long)arg3 reqFirstPageMd5:(id)arg4;
- (_Bool)updateMediaTail;
- (_Bool)updateMediaHead;
- (unsigned int)homepageDataType;
- (void)beginMediaHomepage;
- (id)getHomepageData;
- (_Bool)updateTail;
- (_Bool)updateHeadWithSource:(long long)arg1;
- (_Bool)updateHead;
- (void)endHomepage;
- (void)beginHomepage;
- (void)delectCacheIfStranger;
- (void)setM_username:(id)arg1;
@property(readonly, nonatomic) _Bool isMine;
- (id)dataProvider;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 homepageType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

