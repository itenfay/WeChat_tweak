//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAudioSessionPortDescription, NSString;

@protocol TXLiveAudioSessionDelegate <NSObject>

@optional
- (_Bool)setPreferredInput:(AVAudioSessionPortDescription *)arg1 error:(id *)arg2;
- (_Bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id *)arg2;
- (_Bool)setPreferredSampleRate:(double)arg1 error:(id *)arg2;
- (_Bool)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
- (_Bool)setCategory:(NSString *)arg1 mode:(NSString *)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)setCategory:(NSString *)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setCategory:(NSString *)arg1 error:(id *)arg2;
- (_Bool)setMode:(NSString *)arg1 error:(id *)arg2;
- (_Bool)setActive:(_Bool)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
@end

