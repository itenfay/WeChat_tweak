//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, OMJAIGCParams, OMJCamSession, XEffectEffectManager;

@protocol SightCameraCaptureExt <NSObject>

@optional
- (void)onAutoSwitchingCamera;
- (void)camSession:(OMJCamSession *)arg1 needRequestAIGC:(OMJAIGCParams *)arg2;
- (void)camSessionDidPresentFirstFrame:(OMJCamSession *)arg1;
- (void)camSession:(OMJCamSession *)arg1 recordingTimeDidChange:(CDStruct_1b6d18a9)arg2 maxRecordingDuration:(CDStruct_1b6d18a9)arg3;
- (void)camSession:(OMJCamSession *)arg1 recordingDidFail:(NSError *)arg2;
- (void)onSwitchCameraFinished:(XEffectEffectManager *)arg1;
@end

