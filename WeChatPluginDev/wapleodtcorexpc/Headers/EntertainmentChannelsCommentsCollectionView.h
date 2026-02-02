//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UICollectionView, UIViewPropertyAnimator;

@interface EntertainmentChannelsCommentsCollectionView : UIView
{
    UICollectionView *_collectionView;
    UIViewPropertyAnimator *_animator;
    NSArray *_bulletList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *bulletList; // @synthesize bulletList=_bulletList;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)tickScroll;
- (void)randInitialOffset:(double)arg1;
- (void)layoutSubviews;
- (void)updateBulletList:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

