//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSString, TextStatePublishIconList, TextStatePublishOfficialIconCollectionLayout, UICollectionView;
@protocol TextStatePublishOfficialIconCollectionViewDelegate;

@interface TextStatePublishOfficialIconCollectionView : UIView
{
    id <TextStatePublishOfficialIconCollectionViewDelegate> _delegate;
    TextStatePublishIconList *_iconList;
    UICollectionView *_collectionView;
    TextStatePublishOfficialIconCollectionLayout *_collectionViewLayout;
    long long _itemCountPerRow;
    NSMutableDictionary *_iconIdToItem;
    NSMutableDictionary *_indexPathToItemHeight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *indexPathToItemHeight; // @synthesize indexPathToItemHeight=_indexPathToItemHeight;
@property(retain, nonatomic) NSMutableDictionary *iconIdToItem; // @synthesize iconIdToItem=_iconIdToItem;
@property(nonatomic) long long itemCountPerRow; // @synthesize itemCountPerRow=_itemCountPerRow;
@property(retain, nonatomic) TextStatePublishOfficialIconCollectionLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) TextStatePublishIconList *iconList; // @synthesize iconList=_iconList;
@property(nonatomic) __weak id <TextStatePublishOfficialIconCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (double)itemHeightForIndexPath:(id)arg1;
- (long long)rowIndexForIndexPath:(id)arg1;
- (void)updateItemCountPerRow;
- (void)refresh;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

