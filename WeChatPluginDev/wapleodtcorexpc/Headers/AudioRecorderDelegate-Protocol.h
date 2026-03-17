//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AudioRecorderUserData, NSData, NSError;

@protocol AudioRecorderDelegate <NSObject>

@optional
- (void)OnOutputPcmBuffer:(NSData *)arg1 UserData:(AudioRecorderUserData *)arg2;
- (void)OnRecorderPart:(AudioRecorderUserData *)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(_Bool)arg5 Duration:(unsigned int)arg6;
- (void)OnRecorderEndRecording:(AudioRecorderUserData *)arg1;
- (void)OnRecorderBeginRecording:(AudioRecorderUserData *)arg1 ErrNo:(int)arg2;
- (void)OnRecorderLevelMeter:(AudioRecorderUserData *)arg1 Peak:(float)arg2;
- (_Bool)OnRecorderPrepareSend:(AudioRecorderUserData *)arg1;
- (void)onRecordStartFail:(NSError *)arg1;
@end

