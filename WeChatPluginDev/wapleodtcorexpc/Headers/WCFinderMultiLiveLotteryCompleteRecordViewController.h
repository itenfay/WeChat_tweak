//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTask, MMTableView, MMUILabel, NSData, NSMutableArray, NSString, WCTimeLineFooterView;

@interface WCFinderMultiLiveLotteryCompleteRecordViewController
{
    _Bool _isAssistant;
    NSMutableArray *_completedRecordList;
    MMTableView *_lotterySelfCompleteRecordTableView;
    MMUILabel *_lawDescriptionLabel;
    WCTimeLineFooterView *_footerView;
    NSData *_lastBuffer;
    MMFinderLiveTask *_finderLiveTask;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAssistant; // @synthesize isAssistant=_isAssistant;
@property(retain, nonatomic) MMFinderLiveTask *finderLiveTask; // @synthesize finderLiveTask=_finderLiveTask;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMUILabel *lawDescriptionLabel; // @synthesize lawDescriptionLabel=_lawDescriptionLabel;
@property(retain, nonatomic) MMTableView *lotterySelfCompleteRecordTableView; // @synthesize lotterySelfCompleteRecordTableView=_lotterySelfCompleteRecordTableView;
@property(retain, nonatomic) NSMutableArray *completedRecordList; // @synthesize completedRecordList=_completedRecordList;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)reloadData;
- (void)fetchCompleteRecordList;
- (void)layoutLawDescriptionLabel;
- (void)layoutLotterySelfCompleteRecordTableView;
- (void)layoutUI;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTaskForAssistant:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

