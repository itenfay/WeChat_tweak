//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveGoodsEmptyView, MMFinderLiveShopGoodsManageSectionHeaderView, MMFinderLiveShopShelfCoordinator, MMFinderLiveShopShelfExtraHeaderInfos, MMFinderLiveShopShelfMainTableHeaderView, MMFinderLiveTaskId;
@protocol MMFinderLiveShopShelfExtraHeaderCellDelegate;

@interface MMFinderLiveShopShelfExtraHeaderCell : UIView
{
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveShopShelfCoordinator *_coordinator;
    id <MMFinderLiveShopShelfExtraHeaderCellDelegate> _delegate;
    MMFinderLiveShopGoodsManageSectionHeaderView *_manageHeaderView;
    MMFinderLiveGoodsEmptyView *_emptyView;
    MMFinderLiveShopShelfExtraHeaderInfos *_extraHeaderInfos;
    MMFinderLiveShopShelfMainTableHeaderView *_tableHeaderView;
    struct UIEdgeInsets _padding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveShopShelfMainTableHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MMFinderLiveShopShelfExtraHeaderInfos *extraHeaderInfos; // @synthesize extraHeaderInfos=_extraHeaderInfos;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) MMFinderLiveGoodsEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) MMFinderLiveShopGoodsManageSectionHeaderView *manageHeaderView; // @synthesize manageHeaderView=_manageHeaderView;
@property(nonatomic) __weak id <MMFinderLiveShopShelfExtraHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMFinderLiveShopShelfCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)reportExpose;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)updateWithCoordinatorAndExtraHeaderInfos:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

