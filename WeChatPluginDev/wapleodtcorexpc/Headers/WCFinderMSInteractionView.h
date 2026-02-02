//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout;

@interface WCFinderMSInteractionView : UIView
{
    double _layoutWidth;
    UICollectionViewFlowLayout *_collectionLayout;
    UICollectionView *_collectionView;
    NSMutableArray *_interactionData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *interactionData; // @synthesize interactionData=_interactionData;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateWithInteractionData:(id)arg1;
- (void)_layoutUI;
- (void)layoutSubviews;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

