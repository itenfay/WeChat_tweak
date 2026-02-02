//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIImage;

@protocol V2TXLivePusherJSAdapterDelegate <NSObject>

@optional
- (void)onConfigApplied:(_Bool)arg1;
- (void)onEnableCustomVideoCapture:(_Bool)arg1 width:(double)arg2 height:(double)arg3;
- (void)onAudioRecordDidStop;
- (_Bool)onAudioRecordWillUpdate;
- (void)onSnapshotComplete:(UIImage *)arg1;
- (void)onBGMComplete:(long long)arg1;
- (void)onBGMProgress:(long long)arg1 durationMs:(long long)arg2;
- (void)onBGMStart:(long long)arg1;
- (void)onCameraStateChanged:(_Bool)arg1;
- (void)onAudioVolumeEvaluation:(long long)arg1;
- (void)onPushStart;
- (void)onNetStatus:(NSDictionary *)arg1;
- (void)onPushEvent:(long long)arg1 withParam:(NSDictionary *)arg2;
@end

