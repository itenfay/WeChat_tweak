//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UICollectionViewDiffableDataSource, UILabel;

@interface WCFinderHalfProfileInteractionInfoView : UIView
{
    UILabel *_titleLabel;
    UICollectionView *_collectionView;
    NSArray *_items;
    NSArray *_configurations;
    UICollectionViewDiffableDataSource *_dataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSArray *configurations; // @synthesize configurations=_configurations;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_updateLayout;
- (void)_updateUI;
- (void)updateWithInteractionItems:(id)arg1;
- (void)_setupLayout;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

