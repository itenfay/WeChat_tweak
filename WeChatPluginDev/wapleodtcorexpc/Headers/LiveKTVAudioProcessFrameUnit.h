//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface LiveKTVAudioProcessFrameUnit : NSObject
{
    int _channelCnt;
    int _sampleRate;
    int _frameDuration;
    unsigned long long _audioFormat;
    NSData *_inBufferData;
}

+ (id)genInFrameUnit:(id)arg1 channels:(int)arg2 sampleRate:(int)arg3 frameDuration:(int)arg4 audioFormat:(unsigned long long)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *inBufferData; // @synthesize inBufferData=_inBufferData;
@property(nonatomic) unsigned long long audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) int frameDuration; // @synthesize frameDuration=_frameDuration;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) int channelCnt; // @synthesize channelCnt=_channelCnt;
@property(readonly, nonatomic) short *outBuffer;
@property(readonly, nonatomic) int bufferLengthInShort;
@property(readonly, nonatomic) short *inBuffer;

@end

