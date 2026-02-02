//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTaskId, MMTableView, NSArray, NSString;
@protocol MMFinderLiveProductsTableViewDelegate;

@interface MMFinderLiveProductsTableView : UIView
{
    MMTableView *_tableView;
    MMFinderLiveTaskId *_taskID;
    id <MMFinderLiveProductsTableViewDelegate> _delegate;
    CDUnknownBlockType _reprocessGoodsViewModel;
    NSArray *_goodsViewModels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *goodsViewModels; // @synthesize goodsViewModels=_goodsViewModels;
@property(copy, nonatomic) CDUnknownBlockType reprocessGoodsViewModel; // @synthesize reprocessGoodsViewModel=_reprocessGoodsViewModel;
@property(nonatomic) __weak id <MMFinderLiveProductsTableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (id)visibleGoodsCellWithProductID:(unsigned long long)arg1;
- (void)cell:(id)arg1 willShowMoreSKUsTailForModel:(id)arg2;
- (void)cell:(id)arg1 didClickMoreSKUsTailForModel:(id)arg2;
- (void)cell:(id)arg1 didReleaseMoreSKUsTailForModel:(id)arg2;
- (void)cell:(id)arg1 model:(id)arg2 willShowSKUCellForIndex:(unsigned long long)arg3;
- (void)cell:(id)arg1 model:(id)arg2 didSelectSKU:(id)arg3;
- (void)onOpenRecordPromotionReplay:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)onAskForPromoteProductButtonClicked:(id)arg1 goodsViewModel:(id)arg2;
- (void)onAddToShoppingCartButtonClicked:(id)arg1 goodsViewModel:(id)arg2;
- (void)onMayNeedChangeSizeForImageLoaded:(id)arg1;
- (void)onActionButtonClicked:(id)arg1 goodsViewModel:(id)arg2 info:(id)arg3;
- (void)onLiveGoodsCellLimitDiscountArriveTime:(id)arg1 goodsViewModel:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setProducts:(id)arg1;
- (void)setShopWindowItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

