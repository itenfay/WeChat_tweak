//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaUIScrollView, MMKScrollViewOnScrollCallback, NSString;

@interface KindaScrollView
{
    _Bool _m_shouldShowScrollBar;
    KindaUIScrollView *_m_scrollView;
    MMKScrollViewOnScrollCallback *_callback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMKScrollViewOnScrollCallback *callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool m_shouldShowScrollBar; // @synthesize m_shouldShowScrollBar=_m_shouldShowScrollBar;
@property(retain, nonatomic) KindaUIScrollView *m_scrollView; // @synthesize m_scrollView=_m_scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setContentOffset:(id)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(id)arg1;
- (id)getContentOffset;
- (_Bool)getScrollToDimissKeyboardEnabled;
- (void)setScrollToDimissKeyboardEnabled:(_Bool)arg1;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1;
- (void)setContentInsect:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4;
- (void)scrollTo:(id)arg1 xOffset:(float)arg2 yOffset:(float)arg3 animated:(_Bool)arg4;
- (void)setOnScrollCallback:(id)arg1;
- (id)getContent;
- (_Bool)getShowScrollBar;
- (void)setShowScrollBar:(_Bool)arg1;
- (id)getView;
- (_Bool)getScrollWhenViewSizeEnough;
- (void)setScrollWhenViewSizeEnough:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

