//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UICollectionView;
@protocol UICollectionViewDataSource, UICollectionViewDelegate;

@interface WCFinderFlowLayoutNestCollectionCell : UICollectionViewCell
{
    UICollectionView *_collectionView;
    id _attachObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id attachObject; // @synthesize attachObject=_attachObject;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)reloadData;
@property(nonatomic) __weak id <UICollectionViewDataSource> dataSource;
@property(nonatomic) __weak id <UICollectionViewDelegate> delegate;
- (id)initWithFrame:(struct CGRect)arg1;

@end

