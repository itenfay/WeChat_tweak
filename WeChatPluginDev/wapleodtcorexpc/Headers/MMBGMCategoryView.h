//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMCategoryViewModel, MMBGMPanelPublishContext, MMBGMSelectedConfig, NSString, UICollectionViewDiffableDataSource, WCFinderAnimationLoadingView;
@protocol MMBGMCategoryViewDelegate;

@interface MMBGMCategoryView
{
    id <MMBGMCategoryViewDelegate> _delegate;
    MMBGMCategoryViewModel *_viewModel;
    WCFinderAnimationLoadingView *_loadingView;
    UICollectionViewDiffableDataSource *_diffDataSource;
    MMBGMPanelPublishContext *_publishContext;
    MMBGMSelectedConfig *_panelConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMBGMSelectedConfig *panelConfig; // @synthesize panelConfig=_panelConfig;
@property(retain, nonatomic) MMBGMPanelPublishContext *publishContext; // @synthesize publishContext=_publishContext;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffDataSource; // @synthesize diffDataSource=_diffDataSource;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMBGMCategoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MMBGMCategoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onBgmCategoryVMDataChange;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)applyDiffSnapshot;
- (id)genReportDict;
- (void)setupData;
- (void)setupDataReport;
- (void)setupViews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

