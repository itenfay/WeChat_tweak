//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UICollectionView, UIViewController, WCFinderProfileOverviewHeader, WCFinderProfileOverviewPageModel, WCFinderProfileOverviewSection, WCFinderStreamProfileHeadData;
@protocol WCFinderProfileOverviewBaseSectionDelegate;

@interface WCFinderProfileOverviewBaseSectionCtrl : NSObject
{
    WCFinderProfileOverviewSection *_model;
    UIViewController *_viewController;
    WCFinderStreamProfileHeadData *_contactViewModel;
    WCFinderProfileOverviewPageModel *_pageModel;
    id <WCFinderProfileOverviewBaseSectionDelegate> _delegate;
    UICollectionView *_collectionView;
    WCFinderProfileOverviewHeader *_headerView;
}

+ (void)setupRegister:(id)arg1;
+ (_Bool)featureSupport:(id)arg1;
+ (id)suppportAllSections;
+ (id)sectionDefines;
- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderProfileOverviewHeader *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCFinderProfileOverviewBaseSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak WCFinderProfileOverviewPageModel *pageModel; // @synthesize pageModel=_pageModel;
@property(nonatomic) __weak WCFinderStreamProfileHeadData *contactViewModel; // @synthesize contactViewModel=_contactViewModel;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) WCFinderProfileOverviewSection *model; // @synthesize model=_model;
- (void)preloadVisibleVideo;
- (struct CGRect)liveMorphDismissRectWithCustomKey:(id)arg1;
- (void)updateHeaderTitle:(id)arg1;
- (void)onHeaderWillDisplay:(id)arg1;
- (void)onItemUnExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onItemExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onPageSizeDidChanged;
- (void)pageDidAppear;
- (void)pageDidDisappear;
- (void)pageWillAppear;
- (id)overviewPage;
- (void)reloadStatusView;
- (void)jumpToRefTab:(CDUnknownBlockType)arg1;
- (void)jumpToRefTab;
- (_Bool)alreadyDisplayJsutWatch;
- (double)adjustHorizontalSize;
- (double)adjustHorizontalInset;
- (double)fullHorizontalInset;
- (struct UIEdgeInsets)edgeInsetForSeperator:(id)arg1 position:(long long)arg2;
- (long long)seperatorStyleForSection:(id)arg1;
- (void)didEndDisplayItemIdentifier:(id)arg1;
- (void)willDisplayItemIdentifier:(id)arg1;
- (void)onClickBottomMore;
- (void)onClickHeaderRightBtn:(id)arg1;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (struct UIEdgeInsets)insetForSectionAtIndex:(long long)arg1 identifier:(id)arg2;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (id)supplementaryViewForSection:(id)arg1 elementKind:(id)arg2 collectionView:(id)arg3;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (struct CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (struct SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (id)sections;
- (id)customBottomMoreBtnWording;
- (long long)moreBtnType;
- (id)sectionTitle;
@property(readonly, nonatomic) double contentMargin;
- (void)onSectionDataChanged:(id)arg1;
- (void)_onOVOSectionDataChanged:(id)arg1;
- (void)scrollToCell:(id)arg1 item:(id)arg2;
- (id)visitableCellIdentifiers;
- (void)reloadStateView;
- (id)cellForIdentifier:(id)arg1 forSection:(id)arg2;
- (void)reloadItems:(id)arg1;
- (void)reloadItem:(id)arg1 section:(id)arg2;
- (void)reloadSection:(id)arg1;
- (void)reloadSectionCtrl;
- (void)reloadData;
- (void)relayout;

@end

