//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTaskId, NSArray, NSString, UIButton, UICollectionView;
@protocol MMFinderLiveCouponCardsMaskViewDelegate;

@interface MMFinderLiveCouponCardsMaskView : UIView
{
    id <MMFinderLiveCouponCardsMaskViewDelegate> _delegate;
    UICollectionView *_cardsView;
    UIView *_numberView;
    UIButton *_closeButton;
    NSArray *_cardViewModels;
    MMFinderLiveTaskId *_taskID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSArray *cardViewModels; // @synthesize cardViewModels=_cardViewModels;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *numberView; // @synthesize numberView=_numberView;
@property(retain, nonatomic) UICollectionView *cardsView; // @synthesize cardsView=_cardsView;
@property(nonatomic) __weak id <MMFinderLiveCouponCardsMaskViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportCardExposeWithIndex:(long long)arg1 isForOpen:(_Bool)arg2;
- (void)didMoveToWindow;
- (void)onCloseButtonClicked;
- (void)onCouponCardButtonClicked:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)initCloseButton;
- (void)initCardsView;
- (void)initSubviews;
- (id)initWithDelegate:(id)arg1 taskID:(id)arg2 cardViewModels:(id)arg3 frame:(struct CGRect)arg4;
@property(readonly, nonatomic) struct CGSize cardSize;
@property(readonly, nonatomic) double spacing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

