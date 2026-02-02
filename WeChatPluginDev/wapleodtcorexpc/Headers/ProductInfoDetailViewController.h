//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollView, MMTableViewInfo, NSArray, NSString, ScanProductItem, UIPageControl, UIView;

@interface ProductInfoDetailViewController
{
    MMTableViewInfo *_mainTableViewInfo;
    ScanProductItem *_productItem;
    NSArray *_detailList;
    NSArray *_bannerList;
    MMScrollView *_adScrollView;
    UIView *_headerView;
    UIPageControl *_adPageControl;
}

- (void).cxx_destruct;
- (void)onJumptoFeedBackView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (double)getShopInfoCellHeight:(id)arg1;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onPageControllerChangePage:(id)arg1;
- (id)getTableHeaderView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onOperate:(id)arg1;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithProductItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

