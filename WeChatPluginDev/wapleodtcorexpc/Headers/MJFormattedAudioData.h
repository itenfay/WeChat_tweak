//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MJFormattedAudioData
{
    long long _sampleRate;
}

@property(readonly, nonatomic) long long sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)description;
- (id)initWithData:(id)arg1 encodeType:(long long)arg2 sampleRate:(long long)arg3;

@end

