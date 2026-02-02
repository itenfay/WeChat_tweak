//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol MMLiveViewDelegate <NSObject>

@optional
- (void)onMMLiveViewSwitchCdnPlayerViewWillStartAnimationWithStreamId:(NSString *)arg1 animationDuration:(double)arg2 currentProgress:(double)arg3 switchToNext:(_Bool)arg4;
- (void)onMMLiveViewNextCdnPlayerViewMovedWithStreamId:(NSString *)arg1 andProgress:(double)arg2;
- (void)onMMLiveViewSwitchCdnPlayerViewFinishedWithStreamId:(NSString *)arg1 isSwitchToNext:(_Bool)arg2;
- (void)onMMLiveViewAnchorAudioModeBackgroundPlayerVMChanged;
- (void)onMMLiveViewConnectMicStateChanged;
- (void)onMMLiveViewStopRemoteViewWithSdkUserId:(NSString *)arg1;
- (void)onMMLiveViewStartRemoteViewWithSdkUserId:(NSString *)arg1 andView:(UIView *)arg2;
- (NSString *)onMMLiveViewGetAvatarUrl;
- (NSString *)onMMLiveViewGetAnchorIdentityId;
- (_Bool)onMMLiveViewIsAudience;
- (void)onMMLiveViewStartLocalVideo;
- (void)onMMLiveViewSwitchCamera;
@end

