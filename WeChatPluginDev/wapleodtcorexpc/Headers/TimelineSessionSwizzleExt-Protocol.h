//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SnsTimeLineRequest, SnsTimeLineResponse, UIScrollView, UIViewController;

@protocol TimelineSessionSwizzleExt

@optional
- (void)onTimelineRequest:(SnsTimeLineRequest *)arg1 didPrepareWithPageType:(long long)arg2;
- (void)onTimelineRequest:(SnsTimeLineRequest *)arg1 didFinishWithResponse:(SnsTimeLineResponse *)arg2;
- (void)onScrollViewDidScroll:(UIScrollView *)arg1;
- (void)onScrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)onScrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)onViewDealloc;
- (void)onViewDidDisappear:(_Bool)arg1;
- (void)onViewDidAppear:(_Bool)arg1 withVC:(UIViewController *)arg2;
- (void)onViewDidPopOrDismiss:(_Bool)arg1 withVC:(UIViewController *)arg2;
- (void)onReloadDataWrap;
- (void)onViewDidBePopedOrDismissed:(_Bool)arg1;
- (void)onViewWillBePushed:(_Bool)arg1;
@end

