//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditVideoAttr, NSMutableArray, NSString, UICollectionView, UIView, WCFinderEditVideoPorgressInfoViewModel;
@protocol WCFinderEditVideoProgressInfoViewDelegate;

@interface WCFinderEditVideoProgressInfoView
{
    _Bool _isScrollingTriggerByPlayer;
    id <WCFinderEditVideoProgressInfoViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UIView *_line;
    WCFinderEditVideoPorgressInfoViewModel *_viewModel;
    unsigned long long _triggerTime;
    EditVideoAttr *_attr;
    NSMutableArray *_videoPieceDuration;
}

+ (double)viewH;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *videoPieceDuration; // @synthesize videoPieceDuration=_videoPieceDuration;
@property(retain, nonatomic) EditVideoAttr *attr; // @synthesize attr=_attr;
@property(nonatomic) _Bool isScrollingTriggerByPlayer; // @synthesize isScrollingTriggerByPlayer=_isScrollingTriggerByPlayer;
@property(nonatomic) unsigned long long triggerTime; // @synthesize triggerTime=_triggerTime;
@property(nonatomic) __weak WCFinderEditVideoPorgressInfoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCFinderEditVideoProgressInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onDrag:(id)arg1;
- (double)getProgress;
- (unsigned long long)currentPlayIndex;
- (void)generateVideoPieceDurationArray;
- (void)updateWithEditVideoAttr:(id)arg1;
- (void)reloadCollectionView;
- (void)layoutSubviews;
- (void)setProgress:(double)arg1 withAnimatedDuration:(double)arg2;
- (_Bool)isDragging;
- (void)setupWithProgressVM:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

