//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAudioPCMBuffer, AVAudioTime;

@protocol WAAudioPlayBackDelegate <NSObject>

@optional
- (void)onWxAudioPlayBackWithSessionId:(int)arg1 data:(char *)arg2 size:(unsigned int)arg3 channels:(unsigned int)arg4 samplerate:(unsigned int)arg5 fmt:(unsigned long long)arg6;
- (void)onAudioPlayBack:(AVAudioPCMBuffer *)arg1 when:(AVAudioTime *)arg2;
@end

