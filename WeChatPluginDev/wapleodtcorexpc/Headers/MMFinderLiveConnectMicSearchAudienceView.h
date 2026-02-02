//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUISearchBar, NSArray, NSMutableArray, NSString, UILabel, UIView;
@protocol MMFinderLiveConnectedMicUserCellViewDelegate;

@interface MMFinderLiveConnectMicSearchAudienceView
{
    id <MMFinderLiveConnectedMicUserCellViewDelegate> _cellActionDelegate;
    UIView *_contentView;
    UIView *_searchBarContainer;
    MMUISearchBar *_searchBar;
    UILabel *_tipsLabel;
    MMTableView *_tableView;
    NSArray *_micAudienceList;
    NSMutableArray *_filteredMicAudienceList;
    NSString *_currentSearchText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property(retain, nonatomic) NSMutableArray *filteredMicAudienceList; // @synthesize filteredMicAudienceList=_filteredMicAudienceList;
@property(retain, nonatomic) NSArray *micAudienceList; // @synthesize micAudienceList=_micAudienceList;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *searchBarContainer; // @synthesize searchBarContainer=_searchBarContainer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMFinderLiveConnectedMicUserCellViewDelegate> cellActionDelegate; // @synthesize cellActionDelegate=_cellActionDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (void)doSearchWithText:(id)arg1;
- (void)onCancelSearch;
- (void)tryActiveSearch;
- (void)updateConnectingUserList:(id)arg1 invalidUserList:(id)arg2;
- (void)updateWithConnectMicUserList:(id)arg1;
- (void)showTipsLabelWithTips:(id)arg1 topAreaHeight:(double)arg2;
- (void)layoutTableView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSearchBar;
- (void)layoutContentView;
- (void)setupPageSheetConfig;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

