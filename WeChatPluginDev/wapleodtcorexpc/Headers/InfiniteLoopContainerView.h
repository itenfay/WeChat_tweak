//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSString, UIScrollView, UITapGestureRecognizer;
@protocol InfiniteLoopContainerViewDelegate;

@interface InfiniteLoopContainerView : UIView
{
    _Bool _pagingEnabled;
    _Bool _scrollEnabled;
    id <InfiniteLoopContainerViewDelegate> _delegate;
    double _interitemSpacing;
    UIScrollView *_containerView;
    NSMutableDictionary *_indexToViewDict;
    long long _maxVisibleItemCount;
    long long _itemCount;
    long long _index;
    long long _pivotIndex;
    double _pivotOffset;
    long long _beginDraggingIndex;
    unsigned long long _type;
    UITapGestureRecognizer *_tapGesture;
    struct CGSize _itemSize;
    struct UIEdgeInsets _contentInset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) long long beginDraggingIndex; // @synthesize beginDraggingIndex=_beginDraggingIndex;
@property(nonatomic) double pivotOffset; // @synthesize pivotOffset=_pivotOffset;
@property(nonatomic) long long pivotIndex; // @synthesize pivotIndex=_pivotIndex;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) long long maxVisibleItemCount; // @synthesize maxVisibleItemCount=_maxVisibleItemCount;
@property(retain, nonatomic) NSMutableDictionary *indexToViewDict; // @synthesize indexToViewDict=_indexToViewDict;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) __weak id <InfiniteLoopContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) _Bool doubleDataSource;
- (_Bool)horizontal;
- (_Bool)canLoop;
- (double)unitLength;
- (struct CGRect)frameForViewAtIndex:(long long)arg1;
- (long long)indexOffsetForPoint:(struct CGPoint)arg1;
- (long long)indexOffset;
@property(readonly, nonatomic) long long curIndex;
- (id)viewAtIndex:(long long)arg1;
- (void)refreshView;
- (void)updatePivot;
- (void)onTap:(id)arg1;
- (void)changeToItemAtIndex:(long long)arg1;
- (void)changeToNextItem;
- (void)reloadData;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initContainerView;
- (void)initGesture;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

