//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, RingBackAddToTingSheetView, RingToneHistoryModel, RingToneMixPlayer, RingToneRecommendReporter_23604, UILabel, WCTimeLineFooterView;

@interface RingToneHistoryViewController
{
    _Bool _isFetchingData;
    unsigned long long _setType;
    RingToneMixPlayer *_player;
    MMTableView *_tableView;
    RingToneHistoryModel *_model;
    WCTimeLineFooterView *_footerView;
    unsigned long long _dataStatus;
    RingToneRecommendReporter_23604 *_reporter;
    UILabel *_clearLabel;
    RingBackAddToTingSheetView *_sheetView;
    unsigned long long _cliMinSeq;
    unsigned long long _totalScanRingBackCount;
    unsigned long long _totalSendRingBackCount;
}

+ (void)report25858Data:(unsigned long long)arg1 feedID:(id)arg2 type:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalSendRingBackCount; // @synthesize totalSendRingBackCount=_totalSendRingBackCount;
@property(nonatomic) unsigned long long totalScanRingBackCount; // @synthesize totalScanRingBackCount=_totalScanRingBackCount;
@property(nonatomic) unsigned long long cliMinSeq; // @synthesize cliMinSeq=_cliMinSeq;
@property(retain, nonatomic) RingBackAddToTingSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) UILabel *clearLabel; // @synthesize clearLabel=_clearLabel;
@property(retain, nonatomic) RingToneRecommendReporter_23604 *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) unsigned long long dataStatus; // @synthesize dataStatus=_dataStatus;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) RingToneHistoryModel *model; // @synthesize model=_model;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak RingToneMixPlayer *player; // @synthesize player=_player;
@property(nonatomic) unsigned long long setType; // @synthesize setType=_setType;
- (void)syncRingsToTingAlbumByNet:(id)arg1 categoryID:(id)arg2;
- (void)showTingTips;
- (void)reportRingsSyncToTing:(unsigned long long)arg1;
- (void)reportClickAddBtn;
- (unsigned long long)getDataStatus;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onVoipWindowDidAppear;
- (void)stopAllPlay;
- (void)jumpToPlayerPage:(id)arg1 index:(long long)arg2;
- (void)onExclusiveRingPlay:(id)arg1 isToPlay:(_Bool)arg2;
- (void)jumpToAuthorPage:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)onClearBarItemClick;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)openTingPageSheetView;
- (void)fetchNextPage:(_Bool)arg1;
- (void)onClickMore:(id)arg1;
- (void)viewDidLoad;
- (void)layoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initReporter;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

