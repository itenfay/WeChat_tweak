//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, TextStatusGetSelfLikedsResp, UILabel, UITableView, WCFinderAnimationLoadingView, WCTimeLineFooterView;

@interface TextStateLikeListViewController
{
    _Bool _isDarkMode;
    _Bool _isRemoteData;
    _Bool _isLoadingData;
    _Bool _isShowLoading;
    double _cellHeight;
    UITableView *_tableView;
    NSString *_statusID;
    UILabel *_emptyLabel;
    WCTimeLineFooterView *_footerView;
    TextStatusGetSelfLikedsResp *_currentSelfLikedsResp;
    NSMutableArray *_arrInfo;
    WCFinderAnimationLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowLoading; // @synthesize isShowLoading=_isShowLoading;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableArray *arrInfo; // @synthesize arrInfo=_arrInfo;
@property(retain, nonatomic) TextStatusGetSelfLikedsResp *currentSelfLikedsResp; // @synthesize currentSelfLikedsResp=_currentSelfLikedsResp;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) NSString *statusID; // @synthesize statusID=_statusID;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) _Bool isRemoteData; // @synthesize isRemoteData=_isRemoteData;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool isDarkMode; // @synthesize isDarkMode=_isDarkMode;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onClickHeadImageWithInfo:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onNoMoreData;
- (void)onRecieveLikedsRespWithInfos:(id)arg1;
- (void)loadMoreHistoryData;
- (void)initData;
- (void)initView;
- (void)initFooterView;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)stopLoadingView;
- (void)startLoadigView;
- (id)initWithTextStatusID:(id)arg1;
- (void)showAsHalfPageIn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

