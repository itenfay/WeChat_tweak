//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSMutableArray, NSString;
@protocol TipsViewDelegate;

@interface MMMsgTipsMixedListExpandView
{
    _Bool _isRowAnimating;
    id <TipsViewDelegate> _tipsViewDelegate;
    NSArray *_tipsBarList;
    NSMutableArray *_tipsViews;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRowAnimating; // @synthesize isRowAnimating=_isRowAnimating;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *tipsViews; // @synthesize tipsViews=_tipsViews;
@property(retain, nonatomic) NSArray *tipsBarList; // @synthesize tipsBarList=_tipsBarList;
@property(nonatomic) __weak id <TipsViewDelegate> tipsViewDelegate; // @synthesize tipsViewDelegate=_tipsViewDelegate;
- (void)onRightButtonWaitingForConfirm:(id)arg1;
- (void)onTipsViewDidShow:(id)arg1;
- (void)onTipsViewHeightChanged:(id)arg1;
- (void)onMenuControllerVisible:(id)arg1;
- (void)onTipsViewHideAtTimeout:(id)arg1;
- (void)onPerformExposeAction:(id)arg1;
- (void)onPerformIconAction:(id)arg1;
- (void)onPerformAction:(id)arg1;
- (void)onTipsViewClose:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (void)resetWaitingForConfirmExceptTipsView:(id)arg1;
- (void)resetWaitingForConfirmForAllTipsView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onExpandViewDisappear;
- (void)removeTipsView:(id)arg1;
- (double)totalHeight;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGRect)getRectInWindowWithTipsItem:(id)arg1;
- (id)tipsViewForItem:(id)arg1;
- (void)makeTipsViews;
- (void)updateTipsBarList:(id)arg1;
- (void)doLayout;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

