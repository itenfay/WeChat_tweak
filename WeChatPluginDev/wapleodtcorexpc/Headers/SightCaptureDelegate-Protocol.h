//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, OMJRecordingFinishInfo, UIImage;
@protocol SightPreviewView;

@protocol SightCaptureDelegate <NSObject>
- (void)onRecorderFinished:(unsigned int)arg1 moviePath:(NSString *)arg2 withThumb:(UIImage *)arg3 duration:(float)arg4 templateFinishInfo:(OMJRecordingFinishInfo *)arg5;
- (void)onRecorderFinished:(unsigned int)arg1 moviePath:(NSString *)arg2 withThumb:(UIImage *)arg3 duration:(float)arg4 cameraPosition:(long long)arg5;
- (void)onRecorderFailed:(unsigned int)arg1 errorCode:(unsigned int)arg2;
- (void)onRecorderFailed:(unsigned int)arg1;
- (void)onCameraStop;
- (void)onCameraAudioReady;
- (void)onCameraVideoReady;
- (void)onCameraPreviewReady:(id <SightPreviewView>)arg1;

@optional
- (void)onCameraPreviewGap:(UIImage *)arg1;
@end

