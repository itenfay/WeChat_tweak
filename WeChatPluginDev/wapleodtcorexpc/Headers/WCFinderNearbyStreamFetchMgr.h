//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderStreamLayoutInfo, NSArray, NSData, NSMutableArray, NSString, WCFinderAbstractTask;

@interface WCFinderNearbyStreamFetchMgr : NSObject
{
    _Bool _shouldFetchHistory;
    _Bool _needCleanData;
    _Bool _hasFetchEnterData;
    _Bool _stopFetchNextPage;
    NSMutableArray *_serverFetchTasks;
    WCFinderAbstractTask *_currentServerFetchTask;
    NSData *_lastBuff;
    NSString *_userCity;
    NSArray *_streamDataArray;
    unsigned long long _historyType;
    unsigned long long _prefetchLastFeedCount;
    FinderStreamLayoutInfo *_layoutInfo;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderStreamLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(nonatomic) unsigned long long prefetchLastFeedCount; // @synthesize prefetchLastFeedCount=_prefetchLastFeedCount;
@property(nonatomic) _Bool stopFetchNextPage; // @synthesize stopFetchNextPage=_stopFetchNextPage;
@property(nonatomic) _Bool hasFetchEnterData; // @synthesize hasFetchEnterData=_hasFetchEnterData;
@property(nonatomic) unsigned long long historyType; // @synthesize historyType=_historyType;
@property(nonatomic) _Bool needCleanData; // @synthesize needCleanData=_needCleanData;
@property(copy, nonatomic) NSArray *streamDataArray; // @synthesize streamDataArray=_streamDataArray;
@property(nonatomic) _Bool shouldFetchHistory; // @synthesize shouldFetchHistory=_shouldFetchHistory;
@property(copy, nonatomic) NSString *userCity; // @synthesize userCity=_userCity;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) WCFinderAbstractTask *currentServerFetchTask; // @synthesize currentServerFetchTask=_currentServerFetchTask;
@property(retain, nonatomic) NSMutableArray *serverFetchTasks; // @synthesize serverFetchTasks=_serverFetchTasks;
- (void)requestNextPageData;
- (void)fetchLastestDataWithUnreadDataItems:(id)arg1;
- (void)fetchHistoryWithPullType:(unsigned long long)arg1;
- (void)fetchHistoryWithPullType:(unsigned long long)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)checkServerFetchTasks;
- (void)preformNextServerFetchTasks;
- (void)pullToRefreshWithPullType:(unsigned long long)arg1 fetchLastestDataWithUnreadDataItems:(id)arg2;
- (void)loadingNextSreamFeedPage;
- (void)reloadErrorPageWithPullType:(unsigned long long)arg1;
- (void)reloadNoMoreDataWithPullType:(unsigned long long)arg1;
- (void)resetMgrData;

@end

