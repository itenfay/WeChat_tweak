//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ARCamera, ARCollaborationData, ARGeoTrackingStatus, ARSession, NSError;

@protocol ARSessionObserver <NSObject>

@optional
- (void)session:(ARSession *)arg1 didChangeGeoTrackingStatus:(ARGeoTrackingStatus *)arg2;
- (void)session:(ARSession *)arg1 didOutputCollaborationData:(ARCollaborationData *)arg2;
- (void)session:(ARSession *)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (_Bool)sessionShouldAttemptRelocalization:(ARSession *)arg1;
- (void)sessionInterruptionEnded:(ARSession *)arg1;
- (void)sessionWasInterrupted:(ARSession *)arg1;
- (void)session:(ARSession *)arg1 cameraDidChangeTrackingState:(ARCamera *)arg2;
- (void)session:(ARSession *)arg1 didFailWithError:(NSError *)arg2;
@end

