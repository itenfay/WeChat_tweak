//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAudioFile, AVAudioFormat, AVAudioPCMBuffer, NSString, NSURL;

@interface WAUniversalAudioInfo : NSObject
{
    _Bool _autoPlay;
    _Bool _loop;
    unsigned int _frameLength;
    NSURL *_src;
    NSString *_audioID;
    NSURL *_url;
    double _startTime;
    double _audioVolume;
    double _duration;
    AVAudioPCMBuffer *_skippedPCMBuffer;
    AVAudioPCMBuffer *_PCMBuffer;
    AVAudioFormat *_audioFormat;
    AVAudioFile *_audioFile;
    double _offset;
    NSString *_cacheKey;
    NSString *_dataPathToWrite;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *dataPathToWrite; // @synthesize dataPathToWrite=_dataPathToWrite;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(retain, nonatomic) AVAudioFile *audioFile; // @synthesize audioFile=_audioFile;
@property(nonatomic) unsigned int frameLength; // @synthesize frameLength=_frameLength;
@property(retain, nonatomic) AVAudioFormat *audioFormat; // @synthesize audioFormat=_audioFormat;
@property(retain, nonatomic) AVAudioPCMBuffer *PCMBuffer; // @synthesize PCMBuffer=_PCMBuffer;
@property(retain, nonatomic) AVAudioPCMBuffer *skippedPCMBuffer; // @synthesize skippedPCMBuffer=_skippedPCMBuffer;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double audioVolume; // @synthesize audioVolume=_audioVolume;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *audioID; // @synthesize audioID=_audioID;
@property(copy, nonatomic) NSURL *src; // @synthesize src=_src;
- (id)init;

@end

