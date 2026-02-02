//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGoodsItem, MMFinderLiveGoodsViewModel, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMTableView, MMUILabel, MMUIView, NSMutableArray, NSString, UIView;
@protocol MMFinderLiveGoodsSelectionPanelDelegate;

@interface MMFinderLiveGoodsSelectionPanel
{
    long long _openFromSrc;
    id <MMFinderLiveGoodsSelectionPanelDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    MMLiveHalfScreenTitleBarView *_mainTitleBar;
    UIView *_topSeparatorLine;
    MMUIView *_headerView;
    MMUIView *_contentView;
    MMUILabel *_noSelectLabel;
    MMTableView *_goodsListTableView;
    NSMutableArray *_goodsViewModels;
    MMFinderLiveGoodsViewModel *_selectedGoodsViewModel;
    unsigned long long _curAskedProductId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long curAskedProductId; // @synthesize curAskedProductId=_curAskedProductId;
@property(retain, nonatomic) MMFinderLiveGoodsViewModel *selectedGoodsViewModel; // @synthesize selectedGoodsViewModel=_selectedGoodsViewModel;
@property(retain, nonatomic) NSMutableArray *goodsViewModels; // @synthesize goodsViewModels=_goodsViewModels;
@property(retain, nonatomic) MMTableView *goodsListTableView; // @synthesize goodsListTableView=_goodsListTableView;
@property(retain, nonatomic) MMUILabel *noSelectLabel; // @synthesize noSelectLabel=_noSelectLabel;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *mainTitleBar; // @synthesize mainTitleBar=_mainTitleBar;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveGoodsSelectionPanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long openFromSrc; // @synthesize openFromSrc=_openFromSrc;
- (void)handleHeaderViewGestureRecognizer:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveGoodsItem *currSelectGoodsItem;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)updateWithShopWindowItems:(id)arg1;
- (double)contentViewHeight;
- (void)showWithAnimated:(_Bool)arg1;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)intUI;
- (id)initWithTaskId:(id)arg1 curAskedProductId:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

