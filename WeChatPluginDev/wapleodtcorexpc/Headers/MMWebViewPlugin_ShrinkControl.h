//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMWebViewPlugin_ShrinkControl
{
    _Bool _isBottomBarShow;
    _Bool _shouldHandleScrollEvent;
    unsigned int _unTrackScrollingNum;
    double _offsetYWhenDraggingBegin;
    double _offsetYWhenLastDidScroll;
    struct CGSize _lastWebScrollContentSize;
}

@property(nonatomic) unsigned int unTrackScrollingNum; // @synthesize unTrackScrollingNum=_unTrackScrollingNum;
@property(nonatomic) struct CGSize lastWebScrollContentSize; // @synthesize lastWebScrollContentSize=_lastWebScrollContentSize;
@property(nonatomic) double offsetYWhenLastDidScroll; // @synthesize offsetYWhenLastDidScroll=_offsetYWhenLastDidScroll;
@property(nonatomic) double offsetYWhenDraggingBegin; // @synthesize offsetYWhenDraggingBegin=_offsetYWhenDraggingBegin;
@property(nonatomic) _Bool shouldHandleScrollEvent; // @synthesize shouldHandleScrollEvent=_shouldHandleScrollEvent;
@property(nonatomic) _Bool isBottomBarShow; // @synthesize isBottomBarShow=_isBottomBarShow;
- (double)shrinkRateWithCurrentScrollView:(id)arg1;
- (_Bool)isScrollViewExceedsBottom:(id)arg1;
- (_Bool)scrollViewShouldShrink:(id)arg1;
- (_Bool)isScrollViewExceedsTop:(id)arg1;
- (void)handleWebScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)handleWebScrollViewDidEndDecelerating:(id)arg1;
- (void)handleWebScrollViewDidScroll:(id)arg1;
- (void)handleWebScrollViewWillBeginDecelerating:(id)arg1;
- (void)handleWebScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)handleWebScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint)arg3;
- (void)handleWebScrollViewWillBeginDragging:(id)arg1;
- (void)handleWebPageStateChanged:(struct CGSize)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;

@end

