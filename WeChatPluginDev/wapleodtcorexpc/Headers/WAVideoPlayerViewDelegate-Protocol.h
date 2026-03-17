//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIView, WAWebViewController;
@protocol WAStreamPlayerInterface;

@protocol WAVideoPlayerViewDelegate <NSObject>

@optional
- (void)onVideoPlay:(double)arg1 duration:(double)arg2;
- (WAWebViewController *)getWAVC;
- (_Bool)isForground;
- (void)enableWebViewScroll:(_Bool)arg1;
- (long long)forceInterfaceOrientation;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(id <WAStreamPlayerInterface>)arg3;
- (void)onVideoEvent:(NSString *)arg1 param:(NSDictionary *)arg2;
- (void)videoPlayerView:(UIView<WAStreamPlayerInterface> *)arg1 onVideoStateChange:(long long)arg2;
- (void)onVolumeChange:(double)arg1;
@end

