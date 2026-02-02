//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSMutableSet, NSString, UIButton, UICollectionView, UILabel;
@protocol WCFinderProfilePlaylistCellDataSource;

@interface WCFinderProfilePlaylistCell : UICollectionViewCell
{
    id <WCFinderProfilePlaylistCellDataSource> _dataSource;
    UILabel *_titleLabel;
    UIButton *_allButton;
    UICollectionView *_collectionView;
    NSMutableSet *_registerCellSet;
}

+ (struct CGSize)sizeThatFit:(struct CGSize)arg1 showPlayInfo:(_Bool)arg2;
+ (double)calcualteItemWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *registerCellSet; // @synthesize registerCellSet=_registerCellSet;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *allButton; // @synthesize allButton=_allButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCFinderProfilePlaylistCellDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

