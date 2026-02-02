//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIPanGestureRecognizer, UIScrollView;

@interface WARefreshComponent : UIView
{
    struct UIEdgeInsets _scrollViewOriginalInset;
    UIScrollView *_scrollView;
    CDUnknownBlockType _refreshingBlock;
    CDUnknownBlockType _beginRefreshingCompletionBlock;
    CDUnknownBlockType _endRefreshingCompletionBlock;
    long long _state;
    double _pullingPercent;
    UIPanGestureRecognizer *_pan;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *pan; // @synthesize pan=_pan;
@property(nonatomic) double pullingPercent; // @synthesize pullingPercent=_pullingPercent;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) struct UIEdgeInsets scrollViewOriginalInset; // @synthesize scrollViewOriginalInset=_scrollViewOriginalInset;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType endRefreshingCompletionBlock; // @synthesize endRefreshingCompletionBlock=_endRefreshingCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType beginRefreshingCompletionBlock; // @synthesize beginRefreshingCompletionBlock=_beginRefreshingCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType refreshingBlock; // @synthesize refreshingBlock=_refreshingBlock;
- (void)executeRefreshingCallback;
- (_Bool)isRefreshing;
- (void)endRefreshingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)endRefreshing;
- (void)beginRefreshingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)beginRefreshing;
- (void)scrollViewPanStateDidChange:(id)arg1;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObservers;
- (void)addObservers;
- (void)drawRect:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)placeSubviews;
- (void)layoutSubviews;
- (void)prepare;
- (id)initWithFrame:(struct CGRect)arg1;

@end

