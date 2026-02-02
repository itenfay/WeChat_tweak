//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderEventInfo, NSArray, NSData, NSString, WCFinderSearchItemReportQueue, WCFinderSearchKVReporter;
@protocol WCFinderSearchDataProvider, WCFinderSearchListViewModelDelegate;

@interface WCFinderSearchListViewModel : NSObject
{
    _Bool _forbidenSearchText;
    _Bool _hasReportInputText;
    int _inlineSearchScene;
    NSString *_searchSessionid;
    id <WCFinderSearchListViewModelDelegate> _delegate;
    unsigned long long _refreshTime;
    NSString *_latestQueryText;
    FinderEventInfo *_pageEventInfo;
    WCFinderSearchItemReportQueue *_itemReportQueue;
    NSData *_objHotwordInfoBuff;
    NSString *_lastReqeustId;
    id <WCFinderSearchDataProvider> _dataProvider;
    WCFinderSearchKVReporter *_reporter;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasReportInputText; // @synthesize hasReportInputText=_hasReportInputText;
@property(nonatomic) int inlineSearchScene; // @synthesize inlineSearchScene=_inlineSearchScene;
@property(retain, nonatomic) WCFinderSearchKVReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) id <WCFinderSearchDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) NSString *lastReqeustId; // @synthesize lastReqeustId=_lastReqeustId;
@property(retain, nonatomic) NSData *objHotwordInfoBuff; // @synthesize objHotwordInfoBuff=_objHotwordInfoBuff;
@property(retain, nonatomic) WCFinderSearchItemReportQueue *itemReportQueue; // @synthesize itemReportQueue=_itemReportQueue;
@property(retain, nonatomic) FinderEventInfo *pageEventInfo; // @synthesize pageEventInfo=_pageEventInfo;
@property(copy, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(nonatomic) _Bool forbidenSearchText; // @synthesize forbidenSearchText=_forbidenSearchText;
@property(readonly, nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) __weak id <WCFinderSearchListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *searchSessionid; // @synthesize searchSessionid=_searchSessionid;
- (void)reportSearchActionInfo:(id)arg1 isClickActionType:(_Bool)arg2;
- (_Bool)deleteSearchRecord:(id)arg1;
- (_Bool)deleteAllSearchRecord;
- (void)reportHasInputSearchText;
- (void)reportItemExposeInfo;
- (void)recordResultDisplay:(id)arg1;
- (int)searchScene;
- (long long)numberOfSection;
- (id)contentVMOfTid:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (_Bool)isLoading;
- (_Bool)isNoMoreData;
- (void)onQueryNextPageDataItems;
- (void)updateCurrentDisplayHotWord:(id)arg1;
- (id)generateHotwordList:(id)arg1 firstWord:(id)arg2;
- (void)cleanSearchContent;
- (void)beginSearchWithHotWordList:(id)arg1 currentHotWord:(id)arg2 objHotwordInfoBuff:(id)arg3 hotWordListBuffer:(id)arg4 forbidenSearchText:(_Bool)arg5 scene:(int)arg6 reportSeachScene:(unsigned long long)arg7;
- (void)beginSearchWithQueryText:(id)arg1 latestRequestID:(id)arg2 dataArray:(id)arg3 tabId:(long long)arg4 lastBuffer:(id)arg5 continueFlag:(_Bool)arg6;
- (void)beginSearchWithQueryText:(id)arg1 searchSourceType:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *allSearchDataItems;
- (_Bool)isRepetSearch:(id)arg1;
- (id)searchDataItemAtSection:(long long)arg1;
- (id)searchDataItemAtIndexPath:(id)arg1;
- (id)initWithSessionId:(id)arg1 inlineSearchScene:(int)arg2;
- (id)initWithInlineSearchScene:(int)arg1;
- (id)init;

@end

