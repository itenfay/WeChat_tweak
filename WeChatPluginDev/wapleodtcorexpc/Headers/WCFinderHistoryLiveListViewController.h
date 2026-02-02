//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUILabel, MMUIView, NSData, NSMutableArray, NSString, WCTimeLineFooterView;

@interface WCFinderHistoryLiveListViewController
{
    _Bool _isSelfAnchor;
    NSMutableArray *_historyLiveInfoList;
    MMTableView *_historyLiveListTableView;
    MMUILabel *_tipsDescriptionLabel;
    MMUIView *_descriptionLeftLine;
    MMUIView *_descriptionRightLine;
    WCTimeLineFooterView *_footerView;
    NSString *_anchorFinderUserName;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelfAnchor; // @synthesize isSelfAnchor=_isSelfAnchor;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSString *anchorFinderUserName; // @synthesize anchorFinderUserName=_anchorFinderUserName;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMUIView *descriptionRightLine; // @synthesize descriptionRightLine=_descriptionRightLine;
@property(retain, nonatomic) MMUIView *descriptionLeftLine; // @synthesize descriptionLeftLine=_descriptionLeftLine;
@property(retain, nonatomic) MMUILabel *tipsDescriptionLabel; // @synthesize tipsDescriptionLabel=_tipsDescriptionLabel;
@property(retain, nonatomic) MMTableView *historyLiveListTableView; // @synthesize historyLiveListTableView=_historyLiveListTableView;
@property(retain, nonatomic) NSMutableArray *historyLiveInfoList; // @synthesize historyLiveInfoList=_historyLiveInfoList;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)reloadData;
- (void)fetchHistoryLiveList;
- (void)layoutTipsDescriptionLabel;
- (void)layoutHistoryLiveListTableView;
- (void)layoutUI;
- (id)navigationBarBackgroundColor;
- (_Bool)showNavigationBarSepLine;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithAnchor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

