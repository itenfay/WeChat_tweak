//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCHWAACCoreDecoder : NSObject
{
    struct OpaqueAudioConverter *_audioConverter;
    struct AudioStreamBasicDescription _audioStreamBasicDescription;
}

- (id)decodeAudioFrame:(void *)arg1 withLength:(int)arg2 Pts:(long long)arg3;
- (void)setupAudioConverter:(int)arg1 SampleRate:(int)arg2 outChannel:(int)arg3 outSamplerate:(int)arg4 Bit:(int)arg5 profile:(int)arg6;
- (void)dealloc;
- (id)init;

@end

