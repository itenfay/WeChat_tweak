//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTask, MMFinderLiveTaskId, MMTableView, MMUILabel, NSData, NSMutableArray, NSString, WCFinderLivePageStayReporter, WCTimeLineFooterView;

@interface WCFinderLiveLotteryWinRecordViewController
{
    _Bool _fetchRecordInAllLives;
    _Bool _isPushed;
    int _fromScene;
    unsigned int _supportMultiType;
    MMFinderLiveTaskId *_taskId;
    NSMutableArray *_winRecordList;
    NSMutableArray *_milestoneWinRecordList;
    MMTableView *_lotterySelfWinRecordTableView;
    WCTimeLineFooterView *_footerView;
    MMUILabel *_lawDescriptionLabel;
    NSData *_lastBuffer;
    WCFinderLivePageStayReporter *_stayReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLivePageStayReporter *stayReporter; // @synthesize stayReporter=_stayReporter;
@property(nonatomic) unsigned int supportMultiType; // @synthesize supportMultiType=_supportMultiType;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) MMUILabel *lawDescriptionLabel; // @synthesize lawDescriptionLabel=_lawDescriptionLabel;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *lotterySelfWinRecordTableView; // @synthesize lotterySelfWinRecordTableView=_lotterySelfWinRecordTableView;
@property(retain, nonatomic) NSMutableArray *milestoneWinRecordList; // @synthesize milestoneWinRecordList=_milestoneWinRecordList;
@property(retain, nonatomic) NSMutableArray *winRecordList; // @synthesize winRecordList=_winRecordList;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) _Bool isPushed; // @synthesize isPushed=_isPushed;
@property(nonatomic) _Bool fetchRecordInAllLives; // @synthesize fetchRecordInAllLives=_fetchRecordInAllLives;
- (id)audienceLogReporter;
- (void)reportLotteryRecord:(id)arg1 isExpose:(_Bool)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pushCustomeLotteryAtIndexPath:(id)arg1;
- (void)pushMilestoneLotteryAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)reloadData;
- (id)getCurrentWinRecordListFrom:(id)arg1;
- (id)getCurrentMilestoneWinRecordListFrom:(id)arg1;
- (unsigned int)getSupportMultiTypeFrom:(id)arg1;
- (_Bool)isMilestoneSupportMultiType;
- (_Bool)fetchWinRecordList;
- (void)layoutLawDescriptionLabel;
- (void)layoutLotterySelfWinRecordTableView;
- (void)layoutUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithLiveTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

