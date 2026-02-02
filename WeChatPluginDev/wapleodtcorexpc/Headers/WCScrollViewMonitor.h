//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIScrollView;

@interface WCScrollViewMonitor : NSObject
{
    UIScrollView *_targetScrollView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIScrollView *targetScrollView; // @synthesize targetScrollView=_targetScrollView;
- (_Bool)isScrollViewPossibleScrollingToTop:(id)arg1;
- (_Bool)canScrollViewScrollToTop:(id)arg1;
- (void)checkScrollingToTop;
- (void)_recursivelySearchVisibleScrollViewsInView:(id)arg1 context:(id)arg2;
- (id)searchVisibleScrollViewsInView:(id)arg1;
- (id)initWithTargetScrollView:(id)arg1;

@end

