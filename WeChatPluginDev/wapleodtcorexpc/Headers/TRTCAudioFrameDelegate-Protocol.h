//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TRTCAudioFrame;

@protocol TRTCAudioFrameDelegate <NSObject>

@optional
- (void)onVoiceEarMonitorAudioFrame:(TRTCAudioFrame *)arg1;
- (void)onMixedAllAudioFrame:(TRTCAudioFrame *)arg1;
- (void)onMixedPlayAudioFrame:(TRTCAudioFrame *)arg1;
- (void)onRemoteUserAudioFrame:(TRTCAudioFrame *)arg1 userId:(NSString *)arg2;
- (void)onLocalProcessedAudioFrame:(TRTCAudioFrame *)arg1;
- (void)onCapturedAudioFrame:(TRTCAudioFrame *)arg1;
@end

