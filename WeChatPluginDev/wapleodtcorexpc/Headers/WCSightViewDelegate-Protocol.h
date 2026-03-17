//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCSightView;

@protocol WCSightViewDelegate <NSObject>

@optional
- (void)onPlayExited;
- (_Bool)onSightViewShouldForbidShowingPauseIcon;
- (void)onActionOccurForGestureType:(long long)arg1;
- (void)onPlayEnd:(_Bool)arg1;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)onJumpToViewDetail:(NSString *)arg1;
- (void)onLongPressedWCSightFullScreenWindow:(WCSightView *)arg1;
- (void)onLongPressedWCSight:(WCSightView *)arg1;
- (void)onSightViewWillBeClear;
- (void)onClickWCSight:(WCSightView *)arg1;
@end

