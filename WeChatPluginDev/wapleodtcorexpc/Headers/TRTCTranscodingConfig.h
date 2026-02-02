//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TRTCTranscodingConfig : NSObject
{
    int _appId;
    int _bizId;
    int _videoWidth;
    int _videoHeight;
    int _videoBitrate;
    int _videoFramerate;
    int _videoGOP;
    int _backgroundColor;
    int _audioSampleRate;
    int _audioBitrate;
    int _audioChannels;
    int _audioCodec;
    long long _mode;
    NSString *_backgroundImage;
    NSArray *_mixUsers;
    NSString *_streamId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(copy, nonatomic) NSArray *mixUsers; // @synthesize mixUsers=_mixUsers;
@property(nonatomic) int audioCodec; // @synthesize audioCodec=_audioCodec;
@property(nonatomic) int audioChannels; // @synthesize audioChannels=_audioChannels;
@property(nonatomic) int audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) int audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(copy, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) int backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int videoGOP; // @synthesize videoGOP=_videoGOP;
@property(nonatomic) int videoFramerate; // @synthesize videoFramerate=_videoFramerate;
@property(nonatomic) int videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) int videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) int videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) int bizId; // @synthesize bizId=_bizId;
@property(nonatomic) int appId; // @synthesize appId=_appId;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (id)init;
- (int)convertMixedMode:(long long)arg1;
- (struct MixedTranscodingConfig)convertToCppParams;

@end

