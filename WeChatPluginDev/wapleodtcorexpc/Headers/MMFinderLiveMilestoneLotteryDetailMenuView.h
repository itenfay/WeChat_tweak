//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveMilestoneLotteryViewModel, NSArray, NSString, UILabel, UIScrollView, UIView;

@interface MMFinderLiveMilestoneLotteryDetailMenuView
{
    _Bool _isFirstLayout;
    double _initScrollOffset;
    NSArray *_items;
    UIView *_itemContainerView;
    UIScrollView *_itemScrollView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MMFinderLiveMilestoneLotteryViewModel *_vm;
    struct CGSize _lastLayoutSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveMilestoneLotteryViewModel *vm; // @synthesize vm=_vm;
@property(nonatomic) _Bool isFirstLayout; // @synthesize isFirstLayout=_isFirstLayout;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *itemScrollView; // @synthesize itemScrollView=_itemScrollView;
@property(retain, nonatomic) UIView *itemContainerView; // @synthesize itemContainerView=_itemContainerView;
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) double initScrollOffset; // @synthesize initScrollOffset=_initScrollOffset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onItemButtonClicked:(id)arg1;
- (id)buildViewWithItem:(id)arg1 index:(unsigned long long)arg2;
- (void)rebuildItemViews;
- (void)reloadGradientLayerIfNeeded;
- (void)autoScrollToLatestLottery;
- (void)layoutSubviews;
@property(readonly, nonatomic) double currentScrollOffset;
- (void)commonInitWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)getMenuItems;
- (id)initWithViewModel:(id)arg1 items:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

