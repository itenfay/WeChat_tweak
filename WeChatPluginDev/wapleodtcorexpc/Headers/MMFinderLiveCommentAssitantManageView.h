//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveCommentAssitantManageViewModel, NSArray, NSString, UICollectionView, UIImageView, UILabel;

@interface MMFinderLiveCommentAssitantManageView : UIView
{
    _Bool _ignoreSafeArea;
    double _contentTopMargin;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UICollectionView *_collectionView;
    MMFinderLiveCommentAssitantManageViewModel *_viewModel;
    double _safeAreaTop;
    NSArray *_assistants;
    double _itemSpacing;
    double _collectionViewWidth;
    double _collectionViewItemPerRow;
}

- (void).cxx_destruct;
@property(nonatomic) double collectionViewItemPerRow; // @synthesize collectionViewItemPerRow=_collectionViewItemPerRow;
@property(nonatomic) double collectionViewWidth; // @synthesize collectionViewWidth=_collectionViewWidth;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(retain, nonatomic) NSArray *assistants; // @synthesize assistants=_assistants;
@property(nonatomic) double safeAreaTop; // @synthesize safeAreaTop=_safeAreaTop;
@property(retain, nonatomic) MMFinderLiveCommentAssitantManageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool ignoreSafeArea; // @synthesize ignoreSafeArea=_ignoreSafeArea;
@property(nonatomic) double contentTopMargin; // @synthesize contentTopMargin=_contentTopMargin;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)assistantsReachMaxCount;
- (void)layoutUI;
- (void)initUI;
- (double)getCollectionViewWidth;
- (double)getCollectionViewItemWidth;
- (void)reloadData;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

