//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol VoicePrintRecorderDelegate <NSObject>
- (void)onVolumeChanged:(double)arg1;
- (void)onRecordingOK;
- (void)onRecordingFirstStepOK;
- (void)onRecordingFailedWithError:(NSString *)arg1 rollback:(unsigned int)arg2;
- (void)onRecordingStopWithLoading:(_Bool)arg1;
- (void)onRecordingStart;
- (void)onCannotActivateAudioWithWording:(NSString *)arg1;
- (void)forceRecordButtonLift;
- (_Bool)isRecordButtonPressed;
@end

