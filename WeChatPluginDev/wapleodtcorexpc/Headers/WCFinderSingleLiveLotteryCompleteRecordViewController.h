//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveLotteryRecord, MMFinderLiveTaskId, MMLiveLotteryCompleteInfoHeaderView, MMTableView, MMUILabel, NSData, NSMutableArray, NSString, WCTimeLineFooterView;

@interface WCFinderSingleLiveLotteryCompleteRecordViewController
{
    _Bool _isLeftBarItemCloseStyle;
    _Bool _isInLive;
    _Bool _isAssistant;
    unsigned long long _liveId;
    unsigned long long _objectId;
    NSString *_nonceId;
    MMFinderLiveLotteryRecord *_compltedLotteryRecord;
    NSMutableArray *_completedRecordList;
    MMTableView *_lotterySelfCompleteRecordTableView;
    MMUILabel *_lawDescriptionLabel;
    WCTimeLineFooterView *_footerView;
    MMLiveLotteryCompleteInfoHeaderView *_headerView;
    NSData *_lastBuffer;
    MMFinderLiveTaskId *_currentLiveTaskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *currentLiveTaskId; // @synthesize currentLiveTaskId=_currentLiveTaskId;
@property(nonatomic) _Bool isAssistant; // @synthesize isAssistant=_isAssistant;
@property(nonatomic) _Bool isInLive; // @synthesize isInLive=_isInLive;
@property(nonatomic) _Bool isLeftBarItemCloseStyle; // @synthesize isLeftBarItemCloseStyle=_isLeftBarItemCloseStyle;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) MMLiveLotteryCompleteInfoHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMUILabel *lawDescriptionLabel; // @synthesize lawDescriptionLabel=_lawDescriptionLabel;
@property(retain, nonatomic) MMTableView *lotterySelfCompleteRecordTableView; // @synthesize lotterySelfCompleteRecordTableView=_lotterySelfCompleteRecordTableView;
@property(retain, nonatomic) NSMutableArray *completedRecordList; // @synthesize completedRecordList=_completedRecordList;
@property(retain, nonatomic) MMFinderLiveLotteryRecord *compltedLotteryRecord; // @synthesize compltedLotteryRecord=_compltedLotteryRecord;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)reloadData;
- (id)getCurrentLotteryRecordFrom:(id)arg1;
- (_Bool)fetchCompleteRecordList;
- (void)updateHeaderViewLotteryRecord;
- (void)layoutLawDescriptionLabel;
- (void)layoutLotterySelfCompleteRecordTableView;
- (void)layoutUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 nonceId:(id)arg3 title:(id)arg4 compltedLotteryRecord:(id)arg5 isAssistant:(_Bool)arg6 currentLiveTaskId:(id)arg7;
- (id)initWithLiveTaskId:(id)arg1 title:(id)arg2 compltedLotteryRecord:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

