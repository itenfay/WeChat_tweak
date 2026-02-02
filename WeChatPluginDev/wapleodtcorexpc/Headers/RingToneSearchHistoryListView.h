//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RingToneSearchHistoryViewModel, UITableView;
@protocol RingToneSearchHistoryListViewDelegate;

@interface RingToneSearchHistoryListView : UIView
{
    id <RingToneSearchHistoryListViewDelegate> _delegate;
    UITableView *_tableView;
    RingToneSearchHistoryViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RingToneSearchHistoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <RingToneSearchHistoryListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearCurrentDataSuccess;
- (void)onFetchSuggestionSuccess;
- (void)onLoadHistorySuccess;
- (void)onRemoveSearchHistory:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)deleteSearchRecord:(id)arg1;
- (void)deleteAllSearchRecord;
- (void)addSearchContent:(id)arg1;
- (void)cancelFetchSuggestion;
- (void)fetchSuggestion:(id)arg1;
- (void)loadLatestData;
- (void)configTableView;
- (void)preinit;
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

