//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMGradientBottomView, MMScrollActionSheet, NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol MMLiveActionSheetFlowLayoutViewDelegate;

@interface MMLiveActionSheetFlowLayoutView : UIView
{
    id <MMLiveActionSheetFlowLayoutViewDelegate> _delegate;
    MMScrollActionSheet *_actionSheet;
    NSArray *_actionSheetItems;
    NSArray *_sctionTitleArray;
    UICollectionView *_actionSheetCollectionView;
    UICollectionViewFlowLayout *_actionSheetCollectionLayout;
    NSIndexPath *_firstRedDotIndexPath;
    MMGradientBottomView *_bottomGradientView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMGradientBottomView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) NSIndexPath *firstRedDotIndexPath; // @synthesize firstRedDotIndexPath=_firstRedDotIndexPath;
@property(retain, nonatomic) UICollectionViewFlowLayout *actionSheetCollectionLayout; // @synthesize actionSheetCollectionLayout=_actionSheetCollectionLayout;
@property(retain, nonatomic) UICollectionView *actionSheetCollectionView; // @synthesize actionSheetCollectionView=_actionSheetCollectionView;
@property(retain, nonatomic) NSArray *sctionTitleArray; // @synthesize sctionTitleArray=_sctionTitleArray;
@property(retain, nonatomic) NSArray *actionSheetItems; // @synthesize actionSheetItems=_actionSheetItems;
@property(nonatomic) __weak MMScrollActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) __weak id <MMLiveActionSheetFlowLayoutViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onActionSheetItemClicked:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)getTitleAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)getCellHorizontalMargin;
- (id)getCurrentActionSheetItems;
- (void)updateWithActionSheetItems:(id)arg1 sctionTitleArray:(id)arg2 showInView:(id)arg3;
- (void)relayoutView;
- (void)fitThatWidth:(double)arg1;
- (void)updateCollectionLayout;
- (double)getCurrentCellHorizontalMargin;
- (double)getCurrentCellVerticalMarginBottom;
- (double)getCurrentSectionVerticalSpacing;
- (double)getCurrentCellVerticalSpacing;
- (_Bool)showSectionHeader;
- (void)layoutBottomGradientView;
- (void)createBottomGradientViewIfNeeded;
- (void)laytoutUI;
- (void)layoutSubviews;
- (void)updateActionSheetCollectionView:(_Bool)arg1;
- (void)initView;
- (id)getActionSheetCollectionView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

