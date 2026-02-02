//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderLandScapeVideoProgressDisplayViewDelegate <NSObject>

@optional
- (void)onFinderLandScapeProgressViewHiddenStateChange:(_Bool)arg1;
- (void)onFinderLandScapeProgressViewDidClickBulletSwitchBtn:(_Bool)arg1;
- (void)onFinderLandScapeProgressViewDidClickBulletBtn;
- (void)onFinderLandScapeProgressViewDidClickRuturnBtn;
- (void)onFinderLandScapeProgressViewDidClickRotateBtn;
- (void)onFinderLandScapeProgressViewDidClickPauseBtn:(_Bool)arg1;
- (void)onFinderLandScapeProgressViewPlayRateDidChange:(double)arg1;
@end

