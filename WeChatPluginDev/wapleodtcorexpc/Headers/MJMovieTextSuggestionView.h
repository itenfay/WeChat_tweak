//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSArray, NSString, UICollectionView;
@protocol MJMovieTextSuggestionViewDelegate;

@interface MJMovieTextSuggestionView
{
    id <MJMovieTextSuggestionViewDelegate> _delegate;
    MMUILabel *_titleLabel;
    UICollectionView *_collectionView;
    NSArray *_collectionViewCellItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *collectionViewCellItems; // @synthesize collectionViewCellItems=_collectionViewCellItems;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MJMovieTextSuggestionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)reloadWithSuggestions:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

