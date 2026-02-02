//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSDiffableDataSourceSnapshot, NSString, UICollectionView, UICollectionViewDiffableDataSource, UILabel, WCFinderFeedContentVM, WCFinderLandScapePlayerParam;
@protocol WCFinderCollectionFeedListProvider, WCFinderLandScapeCollectionDisplayViewDelegate;

@interface WCFinderLandScapeCollectionDisplayView : UIView
{
    _Bool _readyToShow;
    id <WCFinderLandScapeCollectionDisplayViewDelegate> _delegate;
    double _layoutWidth;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSDiffableDataSourceSnapshot *_lastDataSnapshot;
    UILabel *_collectionTitleLabel;
    WCFinderFeedContentVM *_contentVM;
    id <WCFinderCollectionFeedListProvider> _collectionDataProvider;
    WCFinderLandScapePlayerParam *_param;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLandScapePlayerParam *param; // @synthesize param=_param;
@property(retain, nonatomic) id <WCFinderCollectionFeedListProvider> collectionDataProvider; // @synthesize collectionDataProvider=_collectionDataProvider;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UILabel *collectionTitleLabel; // @synthesize collectionTitleLabel=_collectionTitleLabel;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *lastDataSnapshot; // @synthesize lastDataSnapshot=_lastDataSnapshot;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(nonatomic) _Bool readyToShow; // @synthesize readyToShow=_readyToShow;
@property(nonatomic) __weak id <WCFinderLandScapeCollectionDisplayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reportCellEventWithIndexPath:(id)arg1 event:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)onFeedArrayChanged:(id)arg1 context:(id)arg2;
- (id)diffableItemIdentifiersWithTid:(id)arg1;
- (void)checkToPrefetchMoreData;
- (id)getNextEpisode;
- (void)jumpToTid:(id)arg1 animation:(_Bool)arg2;
- (void)reloadCollectionDataPullFromTop:(_Bool)arg1 firstPage:(_Bool)arg2;
- (void)updateReadyToShowState;
- (_Bool)shouldShowLandscapeCollectionWithCollectionInfo:(id)arg1;
- (void)updateWithContentVM:(id)arg1 param:(id)arg2;
- (void)_layoutUI;
- (void)layoutSubviews;
- (void)_setupCollectionViewDataSource;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

