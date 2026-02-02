//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicRandomHintTableFooterView, MMFinderLiveTaskId, MMTableView, MMUIActivityIndicatorView, MMUISearchBar, NSArray, NSDictionary, NSMutableArray, NSString, UILabel, UIView;
@protocol MMFinderLiveConnectMicInviteAnchorViewDelegate;

@interface MMFinderLiveConnectMicInviteAnchorView
{
    _Bool _footerViewHasBeenExposed;
    id <MMFinderLiveConnectMicInviteAnchorViewDelegate> _actionDelegate;
    UIView *_contentView;
    UIView *_searchBarContainer;
    MMUISearchBar *_searchBar;
    UILabel *_tipsLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMTableView *_tableView;
    MMFinderLiveConnectMicRandomHintTableFooterView *_footerView;
    MMFinderLiveTaskId *_taskId;
    NSArray *_connectMicAuchorUserList;
    NSDictionary *_connectMicAuchorUserDict;
    NSMutableArray *_candicateAnchorUserInfoList;
    NSString *_curSearchText;
    NSMutableArray *_displaySearchUserInfoList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool footerViewHasBeenExposed; // @synthesize footerViewHasBeenExposed=_footerViewHasBeenExposed;
@property(retain, nonatomic) NSMutableArray *displaySearchUserInfoList; // @synthesize displaySearchUserInfoList=_displaySearchUserInfoList;
@property(retain, nonatomic) NSString *curSearchText; // @synthesize curSearchText=_curSearchText;
@property(retain, nonatomic) NSMutableArray *candicateAnchorUserInfoList; // @synthesize candicateAnchorUserInfoList=_candicateAnchorUserInfoList;
@property(retain, nonatomic) NSDictionary *connectMicAuchorUserDict; // @synthesize connectMicAuchorUserDict=_connectMicAuchorUserDict;
@property(retain, nonatomic) NSArray *connectMicAuchorUserList; // @synthesize connectMicAuchorUserList=_connectMicAuchorUserList;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveConnectMicRandomHintTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *searchBarContainer; // @synthesize searchBarContainer=_searchBarContainer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicInviteAnchorViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onRandomMicHintTableFooterViewActionInvoked:(id)arg1;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (_Bool)isOnSearching;
- (void)onSearchResultReturnWithSearchText:(id)arg1 resultArray:(id)arg2;
- (void)onBeginSearchFromService;
- (void)doSearchWithText:(id)arg1;
- (void)onCancelSearch;
- (void)tryActiveSearch;
- (void)updateWithConnectMicAuchorUserList:(id)arg1 candicateAnchorList:(id)arg2;
- (void)stopLoading;
- (void)startLoading;
- (void)showTipsLabelWithTips:(id)arg1 topAreaHeight:(double)arg2;
- (void)checkFooterViewExposedAndReport;
- (void)layoutTableView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSearchBar;
- (void)layoutContentView;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

