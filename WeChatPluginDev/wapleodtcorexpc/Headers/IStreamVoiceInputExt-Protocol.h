//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class StreamInputQueueItem, StreamInputResult;

@protocol IStreamVoiceInputExt <NSObject>

@optional
- (void)onVoiceDetectSpeakingToSlience:(long long)arg1 data:(StreamInputQueueItem *)arg2;
- (void)onVoiceSilentTooLong:(unsigned int)arg1;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)onGetResultText:(StreamInputResult *)arg1 andInputId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEndRecord;
- (void)OnStartRecord;
@end

