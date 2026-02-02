//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicPostVideoCollectionFooterCell, MMMusicSearchVideoDataProvider, MMMusicSearchVideoInitParams, MMUIActivityIndicatorView, MMUISearchBar, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol MMMusicSearchVideoControllerDataSource, MMMusicSearchVideoControllerDelegate;

@interface MMMusicSearchVideoController : NSObject
{
    MMMusicSearchVideoInitParams *_initParams;
    MMUISearchBar *_searchBar;
    UICollectionView *_listView;
    UICollectionViewFlowLayout *_flowLayout;
    MMMusicSearchVideoDataProvider *_dataProvider;
    MMUIActivityIndicatorView *_loadingView;
    MMMusicPostVideoCollectionFooterCell *m_footerView;
    _Bool m_continueFlag;
    double _minVideoDuration;
    id <MMMusicSearchVideoControllerDataSource> _dataSource;
    id <MMMusicSearchVideoControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMMusicSearchVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMMusicSearchVideoControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)isSelectedWithModel:(id)arg1;
- (void)mmMusicPostVideoCollectionCell:(id)arg1 onSelectedBtnClicked:(id)arg2;
- (void)onDataChanged:(_Bool)arg1 isClearAll:(_Bool)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateCanMultiSelect:(_Bool)arg1;
- (_Bool)updateDataSelectedStatusByUniqueId:(id)arg1;
- (void)updateDataSelectedStatus;
- (void)updateCurrEposideDuration:(double)arg1;
- (void)setCurrEposideDuration:(double)arg1;
- (void)resignSearchBarFirstResponder;
- (void)enterSearchMode;
- (void)setSearchBarHidden:(_Bool)arg1;
- (id)loadingView;
- (id)listView;
- (id)searchBar;
- (id)initWithHostView:(id)arg1 initParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

