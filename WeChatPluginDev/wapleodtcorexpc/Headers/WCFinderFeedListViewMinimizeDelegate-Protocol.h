//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderMinimizeBizKeyProvider-Protocol.h"

@class MMUIViewController, UIViewController, WCFinderFeedListView;

@protocol WCFinderFeedListViewMinimizeDelegate <WCFinderMinimizeBizKeyProvider>
- (_Bool)finderFeedListViewControllerSupportMinimize:(WCFinderFeedListView *)arg1;

@optional
- (_Bool)finderFeedListViewControllerShuldUseAnimationFromVC:(UIViewController *)arg1 toVC:(UIViewController *)arg2 isClosure:(_Bool)arg3;
- (MMUIViewController *)finderFeedListViewMinimizeStoreVC;
- (void)finderFeedListViewControllerExpandPageFromMinimize:(WCFinderFeedListView *)arg1;
- (_Bool)finderFeedListViewControllerShouldAutoMinimize;
- (_Bool)finderFeedListViewShouldDragDownCloseInvoke;
- (_Bool)finderFeedListViewControllerForbidenDragDownClose;
@end

