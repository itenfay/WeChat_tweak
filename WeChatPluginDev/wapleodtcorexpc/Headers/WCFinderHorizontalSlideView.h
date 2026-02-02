//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UICollectionView;
@protocol WCFinderHorizontalSlideViewDelegate;

@interface WCFinderHorizontalSlideView : UICollectionViewCell
{
    _Bool _scrollEnabled;
    double _itemSpace;
    id <WCFinderHorizontalSlideViewDelegate> _delegate;
    UICollectionView *_collectionView;
    struct CGSize _itemSize;
    struct UIEdgeInsets _sectionInset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCFinderHorizontalSlideViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double itemSpace; // @synthesize itemSpace=_itemSpace;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)refreshView;
- (void)registerViewClass:(Class)arg1 identifier:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

