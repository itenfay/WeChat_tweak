//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TRTCLocalStatistics : NSObject
{
    unsigned int _width;
    unsigned int _height;
    unsigned int _frameRate;
    unsigned int _videoBitrate;
    unsigned int _audioSampleRate;
    unsigned int _audioBitrate;
    unsigned int _audioCaptureState;
    long long _streamType;
}

@property(nonatomic) unsigned int audioCaptureState; // @synthesize audioCaptureState=_audioCaptureState;
@property(nonatomic) long long streamType; // @synthesize streamType=_streamType;
@property(nonatomic) unsigned int audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) unsigned int audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) unsigned int videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) unsigned int frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
- (id)description;

@end

