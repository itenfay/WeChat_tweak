//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface LiveKTVAudioEffectProcessInitParam : NSObject
{
    int _channelCnt;
    int _sampleRate;
    int _frameDuration;
    unsigned long long _audioFormat;
}

+ (id)defaultParam;
@property(nonatomic) unsigned long long audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) int frameDuration; // @synthesize frameDuration=_frameDuration;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) int channelCnt; // @synthesize channelCnt=_channelCnt;
- (_Bool)isLegal;
- (_Bool)isEqual:(id)arg1;

@end

