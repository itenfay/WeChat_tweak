//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderDataItem;

@protocol WCFinderLandScapeVideoInteractivePlayerViewDelegate <NSObject>

@optional
- (void)onFinderLandScapeInteractiveViewAntiAddictCheckLogic;
- (void)onFinderLandScapeInteractiveViewContentMediaDidEndPlay;
- (void)onFinderLandScapeInteractiveViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onFinderLandScapeInteractiveViewClickPlayRateBtn:(double)arg1;
- (void)onFinderLandScapeInteractiveViewClickPlayNextVideoWithDataItem:(WCFinderDataItem *)arg1;
- (void)onFinderLandScapeInteractiveViewDidEndLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeInteractiveViewDidStartLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeInteractiveViewEndPan;
- (void)onFinderLandScapeInteractiveViewStartPan;
- (void)onFinderLandScapeInteractiveViewClickPlayRateBtnWithRate:(double)arg1;
- (void)onFinderLandScapeInteractiveViewClickBulletSwitchBtn:(_Bool)arg1;
- (void)onFinderLandScapeInteractiveViewClickBulletBtn;
- (void)onFinderLandScapeInteractiveViewClickPauseBtn:(_Bool)arg1;
- (void)onFinderLandScapeInteractiveViewClickReturnBtn;
- (void)onFinderLandScapeInteractiveViewClickRotateBtn;
@end

