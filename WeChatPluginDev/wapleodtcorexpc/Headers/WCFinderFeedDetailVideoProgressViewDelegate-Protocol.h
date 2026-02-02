//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderFeedDetailVideoProgressViewDelegate <NSObject>

@optional
- (void)onFinderDetailProgressViewExitFullScreen;
- (void)onFinderDetailProgressViewExitIPhoneLandscape;
- (void)onFinderDetailProgressViewClickBulletSwitchBtn:(_Bool)arg1;
- (void)onFinderDetailProgressViewClickBulletInputBtn;
- (void)onFinderDetailProgressViewClickBulletBtn;
- (void)onFinderDetailProgressViewClickFullScreenBtn;
- (void)onFinderDetailProgressViewClickPauseBtn:(_Bool)arg1;
- (void)onFinderDetailProgressViewClickPlayRateButton;
- (void)onFinderDetailProgressViewHiddenStateChange:(_Bool)arg1;
@end

