//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMTableView, NSData, NSMutableArray, NSString, WCTimeLineFooterView;

@interface MMFinderLiveVoteHistoryViewController
{
    _Bool _isFetchingData;
    MMTableView *_tableView;
    NSData *_lastBuffer;
    WCTimeLineFooterView *_loadMoreFooterView;
    NSMutableArray *_historyVotes;
    MMFinderLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSMutableArray *historyVotes; // @synthesize historyVotes=_historyVotes;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(retain, nonatomic) WCTimeLineFooterView *loadMoreFooterView; // @synthesize loadMoreFooterView=_loadMoreFooterView;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)onBackButtonClicked;
- (void)fetchMoreData;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)createTableFooterView;
- (id)navigationBarBackgroundColor;
- (void)initTableView;
- (void)initNavBar;
- (void)viewDidLoad;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

