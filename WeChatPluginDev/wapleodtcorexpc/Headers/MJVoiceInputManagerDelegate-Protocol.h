//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJVoiceInputManager, NSArray, NSError, NSString;

@protocol MJVoiceInputManagerDelegate <NSObject>

@optional
- (void)voiceInputManager:(MJVoiceInputManager *)arg1 didReachRecordingDurationLimitWithToastText:(NSString *)arg2 identifier:(NSString *)arg3;
- (void)voiceInputManager:(MJVoiceInputManager *)arg1 didUpdateRecognitionState:(unsigned long long)arg2 withIdentifier:(NSString *)arg3;
- (void)voiceInputManager:(MJVoiceInputManager *)arg1 didUpdateDecibels:(const void *)arg2 withIdentifier:(NSString *)arg3;
- (void)voiceInputManager:(MJVoiceInputManager *)arg1 didUpdateSentenceInfo:(unsigned int)arg2 withIdentifier:(NSString *)arg3;
- (void)voiceInputManager:(MJVoiceInputManager *)arg1 didFinishRecognitionWithResult:(NSArray *)arg2 identifier:(NSString *)arg3 error:(NSError *)arg4;
- (void)voiceInputManager:(MJVoiceInputManager *)arg1 didUpdateRecognitionResult:(NSArray *)arg2 withIdentifier:(NSString *)arg3 error:(NSError *)arg4;
- (void)voiceInputManager:(MJVoiceInputManager *)arg1 didStopRecordingWithIdentifier:(NSString *)arg2 isCancelled:(_Bool)arg3 audioFilePath:(NSString *)arg4 captions:(NSArray *)arg5 error:(NSError *)arg6;
- (void)voiceInputManager:(MJVoiceInputManager *)arg1 didStartRecordingWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)voiceInputManager:(MJVoiceInputManager *)arg1 didUpdateAudioLevel:(float)arg2 withIdentifier:(NSString *)arg3;
@end

