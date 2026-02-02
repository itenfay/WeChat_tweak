//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveTaskId, NSArray, NSString, UICollectionView, UILabel;
@protocol MMLiveGameRecentlyPalyedViewDelegate;

@interface MMLiveGameRecentlyPalyedView : UIView
{
    id <MMLiveGameRecentlyPalyedViewDelegate> _delegate;
    MMLiveTaskId *_liveTaskId;
    UIView *_gameListView;
    UILabel *_titleLabel;
    UICollectionView *_recentlyPalyedGameCollectionView;
    NSArray *_gameUserInfoList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *gameUserInfoList; // @synthesize gameUserInfoList=_gameUserInfoList;
@property(retain, nonatomic) UICollectionView *recentlyPalyedGameCollectionView; // @synthesize recentlyPalyedGameCollectionView=_recentlyPalyedGameCollectionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *gameListView; // @synthesize gameListView=_gameListView;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) __weak id <MMLiveGameRecentlyPalyedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateGameUserInfoList:(id)arg1;
- (void)showView;
- (void)updateGameListView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

