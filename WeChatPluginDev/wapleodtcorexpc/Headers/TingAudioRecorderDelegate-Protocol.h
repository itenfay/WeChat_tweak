//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TingAudioRecorder;

@protocol TingAudioRecorderDelegate <NSObject>

@optional
- (void)tingAudioRecorderOnInterrupt:(TingAudioRecorder *)arg1;
- (void)tingAudioRecorder:(TingAudioRecorder *)arg1 onFinishRecordWithRetCode:(unsigned int)arg2 filePath:(NSString *)arg3;
- (void)tingAudioRecorder:(TingAudioRecorder *)arg1 onBeginRecording:(int)arg2;
@end

