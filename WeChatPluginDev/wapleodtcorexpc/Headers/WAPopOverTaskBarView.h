//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString, UICollectionView, UIView, WAPopOverTaskBarlogic;
@protocol WAPopOverTaskBarViewDelegate;

@interface WAPopOverTaskBarView
{
    _Bool _isNeedBackToChatButton;
    id <WAPopOverTaskBarViewDelegate> _taskBarViewDelegate;
    MMUIViewController *_containerVC;
    UIView *_contentView;
    UICollectionView *_taskCollectionView;
    WAPopOverTaskBarlogic *_taskBarLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPopOverTaskBarlogic *taskBarLogic; // @synthesize taskBarLogic=_taskBarLogic;
@property(retain, nonatomic) UICollectionView *taskCollectionView; // @synthesize taskCollectionView=_taskCollectionView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) _Bool isNeedBackToChatButton; // @synthesize isNeedBackToChatButton=_isNeedBackToChatButton;
@property(nonatomic) __weak id <WAPopOverTaskBarViewDelegate> taskBarViewDelegate; // @synthesize taskBarViewDelegate=_taskBarViewDelegate;
- (void)onMainFrameTaskItemUpdated;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)taskItemAtRowIndex:(long long)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)calCollectionViewHeight;
- (void)layoutTaskCollectionView;
- (void)layoutContentView;
- (void)reloadData;
- (void)initTaskCollectionView;
- (void)initContentView;
- (void)initView;
- (void)layoutSubviews;
- (void)moveToLeftMostTaskItem;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPopOverTaskBarLogic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

