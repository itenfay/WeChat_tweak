//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface V2TXLiveTranscodingConfig : NSObject
{
    unsigned long long _videoWidth;
    unsigned long long _videoHeight;
    unsigned long long _videoBitrate;
    unsigned long long _videoFramerate;
    unsigned long long _videoGOP;
    unsigned long long _backgroundColor;
    NSString *_backgroundImage;
    unsigned long long _audioSampleRate;
    unsigned long long _audioBitrate;
    unsigned long long _audioChannels;
    NSArray *_mixStreams;
    NSString *_outputStreamId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *outputStreamId; // @synthesize outputStreamId=_outputStreamId;
@property(copy, nonatomic) NSArray *mixStreams; // @synthesize mixStreams=_mixStreams;
@property(nonatomic) unsigned long long audioChannels; // @synthesize audioChannels=_audioChannels;
@property(nonatomic) unsigned long long audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) unsigned long long audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(copy, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) unsigned long long backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) unsigned long long videoGOP; // @synthesize videoGOP=_videoGOP;
@property(nonatomic) unsigned long long videoFramerate; // @synthesize videoFramerate=_videoFramerate;
@property(nonatomic) unsigned long long videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) unsigned long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) unsigned long long videoWidth; // @synthesize videoWidth=_videoWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end

