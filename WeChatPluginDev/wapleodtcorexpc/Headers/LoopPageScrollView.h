//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIScrollView, NSString, UIPanGestureRecognizer;
@protocol LoopPageScrollViewDataSourceDelegate;

@interface LoopPageScrollView
{
    MMUIScrollView *m_scrollView;
    id <LoopPageScrollViewDataSourceDelegate> m_delegate;
    int m_curPageNum;
    UIPanGestureRecognizer *m_panGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *m_panGesture; // @synthesize m_panGesture;
@property(nonatomic) int m_curPageNum; // @synthesize m_curPageNum;
@property(nonatomic) __weak id <LoopPageScrollViewDataSourceDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMUIScrollView *m_scrollView; // @synthesize m_scrollView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)changeToNPage:(unsigned int)arg1;
- (void)changeToLastPage;
- (void)changeToNextPage;
- (void)handleSingleTap:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (int)getRealPageNum:(int)arg1;
- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 withDelegate:(id)arg2;
- (id)getPanGestureRecognizer;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

