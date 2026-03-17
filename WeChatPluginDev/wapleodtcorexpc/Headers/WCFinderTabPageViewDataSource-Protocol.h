//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIColor, UIView, WCFinderFeedFlowView, WCFinderFeedFlowViewTipsConfig, WCFinderTabPageView;
@protocol WCFinderTabPageViewBasicProtocol;

@protocol WCFinderTabPageViewDataSource <NSObject>
- (WCFinderFeedFlowView *)finderTabPageView:(WCFinderTabPageView *)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (long long)numberOfTabPageInFinderTabPageView:(WCFinderTabPageView *)arg1;

@optional
- (_Bool)finderTabPageHeaderAddBlurView;
- (UIColor *)customTabContainerBackgroundColorForFinderTabPageView:(WCFinderTabPageView *)arg1;
- (double)lineMarginForTabContainerInFinderTabPageView:(WCFinderTabPageView *)arg1;
- (WCFinderFeedFlowViewTipsConfig *)emptyTipsConfigInFinderTabPagView:(WCFinderTabPageView *)arg1;
- (void)finderTabPageView:(WCFinderTabPageView *)arg1 configureTabViewContainer:(UIView<WCFinderTabPageViewBasicProtocol> *)arg2;
- (double)heightForTabViewContainerInFinderTabPageView:(WCFinderTabPageView *)arg1;
- (UIView<WCFinderTabPageViewBasicProtocol> *)tabViewContainerInFinderTabPageView:(WCFinderTabPageView *)arg1;
- (NSArray *)tabPageView:(WCFinderTabPageView *)arg1 filterNameArrayAtIndex:(unsigned long long)arg2;
- (_Bool)finderTabPageView:(WCFinderTabPageView *)arg1 forbidShowTabAtIndex:(unsigned long long)arg2;
- (double)finderTabPageView:(WCFinderTabPageView *)arg1 heightForTabViewAtIndex:(unsigned long long)arg2;
- (UIView *)finderTabPageView:(WCFinderTabPageView *)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (NSString *)finderTabPageView:(WCFinderTabPageView *)arg1 tabNameAtIndex:(unsigned long long)arg2;
- (struct UIEdgeInsets)marginForTabContainerInFinderTabPageView:(WCFinderTabPageView *)arg1;
- (double)heightForHeaderViewChangeAlphaInFinderTabPageView:(WCFinderTabPageView *)arg1;
- (double)heightForHeaderViewInFinderTabPageView:(WCFinderTabPageView *)arg1;
- (UIView *)headerViewInFinderTabPageView:(WCFinderTabPageView *)arg1;
@end

