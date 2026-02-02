//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, UIView;

@protocol WCPipContentSourcePlayerDelegate <NSObject>
- (UIView *)getPipDisplayView;
- (void)onRequireResumePlayWhenPipDidStart;
- (void)onRequirePauseWhenPipNotStartSucc;
- (void)onPipSourcePlayerRePlay;
- (void)onPipSourcePlayerPlay;
- (void)onPipSourcePlayerPause;
- (void)onPipPlayerSeekFromTime:(double)arg1 toTime:(double)arg2;
- (void)onPlayerStopDisplayOnPipWindow:(long long)arg1;
- (void)onPlayerStartDisplayOnPipWindow:(long long)arg1;
- (void)onFailToStartPictureInPictureWithError:(NSError *)arg1;
- (void)onRestoreUIForPipStopWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)onPipStateDidChange:(long long)arg1;
- (void)pauseVideo:(_Bool)arg1;
@end

