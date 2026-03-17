//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedFlowView, WCFinderPageViewContainer;

@protocol WCFinderPageViewContainerDelegate <NSObject>
- (double)heightOfDisableScrollPageArea;
- (WCFinderFeedFlowView *)finderPageViewContainer:(WCFinderPageViewContainer *)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (void)finderPageViewContainerDidEndSwitchingPage:(WCFinderPageViewContainer *)arg1;
- (void)finderPageViewContainer:(WCFinderPageViewContainer *)arg1 switchPageViewFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderPageViewContainerWillSwitchPage:(WCFinderPageViewContainer *)arg1 type:(unsigned long long)arg2;
- (void)linkedContentOffsetYDidChange:(WCFinderPageViewContainer *)arg1;
@end

