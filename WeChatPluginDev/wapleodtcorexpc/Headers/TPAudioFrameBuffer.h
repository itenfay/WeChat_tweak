//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPAudioFrameBuffer : NSObject
{
    unsigned int _sampleRate;
    int _nbSamples;
    int _channels;
    int _trackID;
    int _flags;
    char **_data;
    int *_size;
    unsigned long long _channelLayout;
    long long _format;
    long long _ptsMs;
}

@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic) int trackID; // @synthesize trackID=_trackID;
@property(nonatomic) int channels; // @synthesize channels=_channels;
@property(nonatomic) int nbSamples; // @synthesize nbSamples=_nbSamples;
@property(nonatomic) long long ptsMs; // @synthesize ptsMs=_ptsMs;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(nonatomic) unsigned long long channelLayout; // @synthesize channelLayout=_channelLayout;
@property(nonatomic) unsigned int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) int *size; // @synthesize size=_size;
@property(nonatomic) char **data; // @synthesize data=_data;

@end

