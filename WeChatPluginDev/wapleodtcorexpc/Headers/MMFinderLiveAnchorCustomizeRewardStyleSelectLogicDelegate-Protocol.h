//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveErrorPage, NSString, UIView, UIViewController;

@protocol MMFinderLiveAnchorCustomizeRewardStyleSelectLogicDelegate
- (UIViewController *)getViewControllerForPresentingImagePicker;
- (UIView *)getViewForPresentingActionSheet;

@optional
- (void)onCommitAnchorCustomizeRewardStyleEndWithErrorMsg:(NSString *)arg1 errorPage:(FinderLiveErrorPage *)arg2;
- (void)onCommitAnchorCustomizeRewardStyleStart;
- (void)onAnchorSelectedStyleResourceEndLoading;
- (void)onAnchorSelectedStyleResourceStartLoading;
- (void)onPreviewPagFileChanged;
@end

