//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer, WCPlayerView;

@protocol WCPlayerViewUIDelegate <NSObject>

@optional
- (void)playerView:(WCPlayerView *)arg1 doubleTap:(UIGestureRecognizer *)arg2;
- (void)playerViewDidEndZoom:(WCPlayerView *)arg1;
- (void)playerViewDidZoom:(WCPlayerView *)arg1;
- (void)playerViewWillBeginZoom:(WCPlayerView *)arg1;
@end

