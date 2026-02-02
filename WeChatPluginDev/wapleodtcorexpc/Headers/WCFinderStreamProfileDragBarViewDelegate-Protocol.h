//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIPanGestureRecognizer, WCFinderStreamProfileDragBarView;

@protocol WCFinderStreamProfileDragBarViewDelegate <NSObject>
- (void)dragBarView:(WCFinderStreamProfileDragBarView *)arg1 draggingCloseChangeProgress:(double)arg2;
- (double)dragBarViewExpandMaxHeight:(WCFinderStreamProfileDragBarView *)arg1;
- (double)dragBarViewExpandMinHeight:(WCFinderStreamProfileDragBarView *)arg1;
- (void)dragBarViewDidEnd:(WCFinderStreamProfileDragBarView *)arg1 beginAnimatedClose:(_Bool)arg2;
- (void)dragBarViewDidEnd:(WCFinderStreamProfileDragBarView *)arg1 slideToClose:(_Bool)arg2;
- (void)dragBarViewWillBegin:(WCFinderStreamProfileDragBarView *)arg1;

@optional
- (_Bool)dragBarView:(WCFinderStreamProfileDragBarView *)arg1 outterPanGesShouldBegin:(UIPanGestureRecognizer *)arg2;
@end

