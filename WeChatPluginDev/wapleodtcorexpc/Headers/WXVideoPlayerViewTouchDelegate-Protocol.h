//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer;

@protocol WXVideoPlayerViewTouchDelegate <NSObject>

@optional
- (void)onFullScreenSingleTap;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onWXVideoPlayerViewLongPress:(id)arg1;
- (void)onWXVideoPlayerViewSingleTap:(UIGestureRecognizer *)arg1;
@end

