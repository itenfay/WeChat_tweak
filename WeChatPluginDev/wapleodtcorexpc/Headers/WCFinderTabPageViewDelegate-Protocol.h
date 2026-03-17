//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderTabPageView;

@protocol WCFinderTabPageViewDelegate <NSObject>

@optional
- (void)finderTabPageView:(WCFinderTabPageView *)arg1 didSelectFilterAtIndex:(unsigned long long)arg2;
- (void)finderTabPageView:(WCFinderTabPageView *)arg1 willSelectFilterAtIndex:(unsigned long long)arg2;
- (void)finderTabPageViewWillSwitchPage:(WCFinderTabPageView *)arg1;
- (void)headerViewWillEndDisplayInFinderTabPageView:(WCFinderTabPageView *)arg1;
- (void)headerViewWillDisplayInFinderTabPageView:(WCFinderTabPageView *)arg1;
- (void)finderTabPageView:(WCFinderTabPageView *)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderTabPageView:(WCFinderTabPageView *)arg1 targetAlphaOfTabContainerChanged:(double)arg2;
- (void)finderTabPageView:(WCFinderTabPageView *)arg1 alphaOfTabContainerChanged:(double)arg2;
- (double)hoverOffsetOfFinderTabPageView:(WCFinderTabPageView *)arg1;
- (double)topInsetOfFinderTabPageView:(WCFinderTabPageView *)arg1;
@end

