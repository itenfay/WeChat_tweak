//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UIScrollView;
@protocol MMScrollActionSheetItemViewDelegate, WCFinderScrollActionGridViewDelegate;

@interface WCFinderScrollActionGridView : UIView
{
    NSMutableArray *_sections;
    id <MMScrollActionSheetItemViewDelegate> _itemDelegate;
    id <WCFinderScrollActionGridViewDelegate> _delegate;
    UICollectionView *_collectionView;
    long long _columnCount;
    NSMutableDictionary *_heightCache;
}

+ (long long)calculateColumntCount:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *heightCache; // @synthesize heightCache=_heightCache;
@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCFinderScrollActionGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMScrollActionSheetItemViewDelegate> itemDelegate; // @synthesize itemDelegate=_itemDelegate;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)calculateItemPadding;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)heightForItem:(id)arg1 section:(id)arg2;
- (double)displayTotalHeight;
@property(readonly, nonatomic) UIScrollView *contentView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

