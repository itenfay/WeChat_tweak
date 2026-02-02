//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIBarButtonItem, UIPopoverController, UISplitViewController, UIViewController;

@protocol UISplitViewControllerDelegate

@optional
- (void)splitViewControllerInteractivePresentationGestureDidEnd:(UISplitViewController *)arg1;
- (void)splitViewControllerInteractivePresentationGestureWillBegin:(UISplitViewController *)arg1;
- (void)splitViewController:(UISplitViewController *)arg1 willHideColumn:(long long)arg2;
- (void)splitViewController:(UISplitViewController *)arg1 willShowColumn:(long long)arg2;
- (void)splitViewControllerDidExpand:(UISplitViewController *)arg1;
- (void)splitViewControllerDidCollapse:(UISplitViewController *)arg1;
- (long long)splitViewController:(UISplitViewController *)arg1 displayModeForExpandingToProposedDisplayMode:(long long)arg2;
- (long long)splitViewController:(UISplitViewController *)arg1 topColumnForCollapsingToProposedTopColumn:(long long)arg2;
- (_Bool)splitViewController:(UISplitViewController *)arg1 shouldHideViewController:(UIViewController *)arg2 inOrientation:(long long)arg3;
- (void)splitViewController:(UISplitViewController *)arg1 popoverController:(UIPopoverController *)arg2 willPresentViewController:(UIViewController *)arg3;
- (void)splitViewController:(UISplitViewController *)arg1 willShowViewController:(UIViewController *)arg2 invalidatingBarButtonItem:(UIBarButtonItem *)arg3;
- (void)splitViewController:(UISplitViewController *)arg1 willHideViewController:(UIViewController *)arg2 withBarButtonItem:(UIBarButtonItem *)arg3 forPopoverController:(UIPopoverController *)arg4;
- (long long)splitViewControllerPreferredInterfaceOrientationForPresentation:(UISplitViewController *)arg1;
- (unsigned long long)splitViewControllerSupportedInterfaceOrientations:(UISplitViewController *)arg1;
- (UIViewController *)splitViewController:(UISplitViewController *)arg1 separateSecondaryViewControllerFromPrimaryViewController:(UIViewController *)arg2;
- (_Bool)splitViewController:(UISplitViewController *)arg1 collapseSecondaryViewController:(UIViewController *)arg2 ontoPrimaryViewController:(UIViewController *)arg3;
- (UIViewController *)primaryViewControllerForExpandingSplitViewController:(UISplitViewController *)arg1;
- (UIViewController *)primaryViewControllerForCollapsingSplitViewController:(UISplitViewController *)arg1;
- (_Bool)splitViewController:(UISplitViewController *)arg1 showDetailViewController:(UIViewController *)arg2 sender:(id)arg3;
- (_Bool)splitViewController:(UISplitViewController *)arg1 showViewController:(UIViewController *)arg2 sender:(id)arg3;
- (long long)targetDisplayModeForActionInSplitViewController:(UISplitViewController *)arg1;
- (void)splitViewController:(UISplitViewController *)arg1 willChangeToDisplayMode:(long long)arg2;
@end

