//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UICollectionView, UILabel, WCMomentsShareScopeBottomView, WCMomentsShareScopeDataSource, WCMomentsShareScopeViewModel, WCTextStatusShareScopeBottomView;
@protocol WCMomentsShareScopeViewControllerDelegate;

@interface WCMomentsShareScopeViewController
{
    _Bool _hasLoadMoreForTagClicked;
    _Bool _hasLoadMoreForContactClicked;
    _Bool _hasModifyShareScopeClicked;
    id <WCMomentsShareScopeViewControllerDelegate> _delegate;
    WCMomentsShareScopeViewModel *_shareScopeVM;
    WCMomentsShareScopeDataSource *_cellVMData;
    UICollectionView *_contactCollectionView;
    WCMomentsShareScopeBottomView *_shareScopeBottomView;
    WCTextStatusShareScopeBottomView *_statusScopeBottomTip;
    UILabel *_noShareScopeDataTips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *noShareScopeDataTips; // @synthesize noShareScopeDataTips=_noShareScopeDataTips;
@property(retain, nonatomic) WCTextStatusShareScopeBottomView *statusScopeBottomTip; // @synthesize statusScopeBottomTip=_statusScopeBottomTip;
@property(retain, nonatomic) WCMomentsShareScopeBottomView *shareScopeBottomView; // @synthesize shareScopeBottomView=_shareScopeBottomView;
@property(retain, nonatomic) UICollectionView *contactCollectionView; // @synthesize contactCollectionView=_contactCollectionView;
@property(nonatomic) _Bool hasModifyShareScopeClicked; // @synthesize hasModifyShareScopeClicked=_hasModifyShareScopeClicked;
@property(nonatomic) _Bool hasLoadMoreForContactClicked; // @synthesize hasLoadMoreForContactClicked=_hasLoadMoreForContactClicked;
@property(nonatomic) _Bool hasLoadMoreForTagClicked; // @synthesize hasLoadMoreForTagClicked=_hasLoadMoreForTagClicked;
@property(retain, nonatomic) WCMomentsShareScopeDataSource *cellVMData; // @synthesize cellVMData=_cellVMData;
@property(retain, nonatomic) WCMomentsShareScopeViewModel *shareScopeVM; // @synthesize shareScopeVM=_shareScopeVM;
@property(nonatomic) __weak id <WCMomentsShareScopeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doModifyShareScopeExposureReport;
- (_Bool)disableScrollViewBottomInsetAdjustment;
- (void)_updateContentView;
- (void)_layoutContentView;
- (void)_initNoShareScopeDataTips;
- (void)_initStatusScopeBottomView;
- (void)_initShareScopeBottomView;
- (void)_initContactCollectionView;
- (void)_initDetailView;
- (void)_initView;
- (void)_initStyle;
- (double)_detailViewHeight;
- (_Bool)_shouldShowModifyScopeFooterForSection:(long long)arg1;
- (_Bool)_shouldShowHeaderForSection:(long long)arg1;
- (double)_getCellWidthInsideCollectionView;
- (double)_getSectionHeaderViewHeightInSection:(long long)arg1;
- (id)_getSectionFooterViewAtIndexPath:(id)arg1;
- (id)_getSectionHeaderViewAtIndexPath:(id)arg1;
- (void)_updateTitle;
- (void)_reloadShareScope;
- (void)_openContactInfo:(id)arg1;
- (void)_onCellViewAtIndex:(id)arg1 changeSelectedTo:(_Bool)arg2;
- (void)_reloadContactDataIntoDataSource;
- (void)_reloadTagDataIntoDataSource;
- (void)_resetDataSource;
- (void)GroupTagViewControllerWillDissappear;
- (void)privacySettingChanged:(long long)arg1 label:(id)arg2 contacts:(id)arg3;
- (_Bool)canSelectPrivacySetting:(long long)arg1;
- (void)onClickedAtModifyScopeButton;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)pageSheetWillDisappear;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

