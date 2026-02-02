//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGoodsManagerViewBottomActionView, MMFinderLiveTaskId, MMTableView, NSMutableArray, NSString;
@protocol MMFinderLiveGoodsManagerViewControllerDelegate;

@interface MMFinderLiveGoodsManagerViewController
{
    id <MMFinderLiveGoodsManagerViewControllerDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    MMTableView *_managerGoodsListTableView;
    NSMutableArray *_selectedGoodsViewModels;
    NSMutableArray *_goodsViewModels;
    MMFinderLiveGoodsManagerViewBottomActionView *_bottomEdittingView;
}

+ (void)loadWithTaskId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGoodsManagerViewBottomActionView *bottomEdittingView; // @synthesize bottomEdittingView=_bottomEdittingView;
@property(retain, nonatomic) NSMutableArray *goodsViewModels; // @synthesize goodsViewModels=_goodsViewModels;
@property(retain, nonatomic) NSMutableArray *selectedGoodsViewModels; // @synthesize selectedGoodsViewModels=_selectedGoodsViewModels;
@property(retain, nonatomic) MMTableView *managerGoodsListTableView; // @synthesize managerGoodsListTableView=_managerGoodsListTableView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveGoodsManagerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteGoods;
- (void)onFinderLiveGoodsManagerViewDelete;
- (void)uploadNewOrderNeedsToast:(_Bool)arg1;
- (void)onFinderLiveGoodsManagerViewSetTop;
- (_Bool)isInMultiSelectEditingMode;
- (void)onLiveGoodsCellSelected:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)addFromStore;
- (double)getBottomEditingBarHeight;
- (void)initSubviews;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (_Bool)showNavigationBarSepLine;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateWithShopWindowItems:(id)arg1;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

