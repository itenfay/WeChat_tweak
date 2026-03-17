//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, StreamInputQueueItem;

@protocol EVADProcessorDelegate <NSObject>

@optional
- (_Bool)shouldAcceptFirstSlice;
- (void)onVADDetectSilentTooLong;
- (void)onVADDetectDelayVoice:(NSData *)arg1 Pcm:(NSData *)arg2;
- (void)onVADFilterdSpeakingVoice:(StreamInputQueueItem *)arg1;
- (void)onVADDetectSpeakingToSlience:(long long)arg1 data:(StreamInputQueueItem *)arg2;
- (void)onVADDetectSlienceToSpeaking:(long long)arg1 data:(StreamInputQueueItem *)arg2 HasSpeak:(_Bool)arg3;
- (void)onVADDetectFirstStart:(StreamInputQueueItem *)arg1;
@end

