//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@interface UIViewController (WCSplit)
- (_Bool)isInWCSplitEmptyViewNavigationController;
- (_Bool)isPresentedSplitDetailView;
- (void)maskAsWCSplitEmptyView;
- (_Bool)isWCSplitEmptyView;
- (void)markAsWCSplitDetailNavigationController;
- (_Bool)isWCSplitDetailNavigationController;
- (void)handleWCSplitScreenEdgePanGesture:(id)arg1;
- (id)getWCSplitNavBackPanGesture;
- (id)setupInteractiveDismissGesture;
@end

