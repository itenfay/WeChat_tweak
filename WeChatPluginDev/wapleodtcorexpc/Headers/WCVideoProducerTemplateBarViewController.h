//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, NSIndexPath, NSString, UICollectionView, UIView, WCVideoProducerDataSource;
@protocol WCVideoProducerTemplateBarDelegate;

@interface WCVideoProducerTemplateBarViewController
{
    _Bool _canRecreateWhileLoading;
    _Bool _isCollectionViewLoaded;
    id <WCVideoProducerTemplateBarDelegate> _delegate;
    long long _selectedStyle;
    WCVideoProducerDataSource *_cellVMData;
    UIView *_contentContainerView;
    CAGradientLayer *_gradientMaskLayer;
    NSIndexPath *_selectedIndex;
    UICollectionView *_templateBarSelectorCollectionView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCollectionViewLoaded; // @synthesize isCollectionViewLoaded=_isCollectionViewLoaded;
@property(retain, nonatomic) UICollectionView *templateBarSelectorCollectionView; // @synthesize templateBarSelectorCollectionView=_templateBarSelectorCollectionView;
@property(retain, nonatomic) NSIndexPath *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) CAGradientLayer *gradientMaskLayer; // @synthesize gradientMaskLayer=_gradientMaskLayer;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) WCVideoProducerDataSource *cellVMData; // @synthesize cellVMData=_cellVMData;
@property(nonatomic) _Bool canRecreateWhileLoading; // @synthesize canRecreateWhileLoading=_canRecreateWhileLoading;
@property(nonatomic) long long selectedStyle; // @synthesize selectedStyle=_selectedStyle;
@property(nonatomic) __weak id <WCVideoProducerTemplateBarDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_getCellViewHeight;
- (double)_getTemplateBarSafeHeight;
- (void)_initContentView;
- (void)_initBackgroundCloseView;
- (void)_initView;
- (void)_relayoutView;
- (void)_resizeCollectionView;
- (id)_changingTemplate;
- (void)_addPickOutTemplateList:(id)arg1;
- (void)_addRecommendTemplateList:(id)arg1;
- (void)_addFolderTemplateList:(id)arg1;
- (void)_addLauncherTemplateList:(id)arg1;
- (void)_addStubTemplateList:(id)arg1;
- (void)_addCreateSameTemplateList:(id)arg1;
- (void)_addDefaultTemplateList:(id)arg1;
- (void)_updateCellChangingStatus;
- (void)_updateCellOrder;
- (void)_onCellAtIndex:(id)arg1 changedSelectTo:(_Bool)arg2 manually:(_Bool)arg3;
- (void)_reloadData;
- (void)_safeScrollToItemAtIndex:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)addManualTemplate:(id)arg1 andAutoSelect:(_Bool)arg2;
- (void)selectTemplateById:(id)arg1;
- (id)templateCellVMById:(id)arg1;
- (long long)cellOrderOfTemplateById:(id)arg1;
- (id)indexPathOfTemplateById:(id)arg1;
- (void)resetDataWithDefaultTemplateList:(id)arg1 createSameTemplateList:(id)arg2 stubTemplateList:(id)arg3 launcherTemplateList:(id)arg4 folderTemplateList:(id)arg5 recommendTemplateList:(id)arg6 pickOutTemplateList:(id)arg7;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setViewTop:(double)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (double)getContentHeightWhenShowing;
- (void)onRelayoutViews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

