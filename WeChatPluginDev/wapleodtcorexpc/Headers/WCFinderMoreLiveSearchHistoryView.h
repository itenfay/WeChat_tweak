//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UITableView, WCFinderMoreLiveSearchSuggestionViewModel, WCFinderSearchReportModel;
@protocol WCFinderMoreLiveSearchHistoryViewDelegate;

@interface WCFinderMoreLiveSearchHistoryView : UIView
{
    int _commentScene;
    id <WCFinderMoreLiveSearchHistoryViewDelegate> _delegate;
    unsigned long long _searchScene;
    NSString *_searchSessionId;
    UITableView *_tableView;
    WCFinderMoreLiveSearchSuggestionViewModel *_viewModel;
    WCFinderSearchReportModel *_reportModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchReportModel *reportModel; // @synthesize reportModel=_reportModel;
@property(retain, nonatomic) WCFinderMoreLiveSearchSuggestionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
@property(nonatomic) __weak id <WCFinderMoreLiveSearchHistoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fillReportParams:(_Bool)arg1;
- (void)onMoreLiveSearchSuggestionClearCurrentDataSuccess;
- (void)onMoreLiveSearchSuggestionFetchSuggestionSuccess;
- (void)onMoreLiveSearchSuggestionLoadHistorySuccess;
- (void)onRemoveSearchHistory:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancelFetchSuggestion;
- (void)fetchSuggestion:(id)arg1;
- (void)loadLatestData;
- (void)configTableView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

