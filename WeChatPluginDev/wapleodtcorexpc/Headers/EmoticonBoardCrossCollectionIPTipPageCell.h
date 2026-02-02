//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol EmoticonBoardCrossCollectionIPTipPageDelegate;

@interface EmoticonBoardCrossCollectionIPTipPageCell
{
    double _bottomInset;
}

@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
- (void)onTapConfirmMergeButton;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateLayout;
- (void)layoutSubviews;
- (void)reloadViews;
- (void)setSectionInfo:(id)arg1;
- (void)configCollectionViewWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <EmoticonBoardCrossCollectionIPTipPageDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

