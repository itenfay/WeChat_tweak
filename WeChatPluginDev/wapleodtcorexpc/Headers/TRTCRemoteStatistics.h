//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCRemoteStatistics : NSObject
{
    unsigned int _audioPacketLoss;
    unsigned int _videoPacketLoss;
    unsigned int _width;
    unsigned int _height;
    unsigned int _frameRate;
    unsigned int _videoBitrate;
    unsigned int _audioSampleRate;
    unsigned int _audioBitrate;
    unsigned int _jitterBufferDelay;
    unsigned int _point2PointDelay;
    unsigned int _audioTotalBlockTime;
    unsigned int _audioBlockRate;
    unsigned int _videoTotalBlockTime;
    unsigned int _videoBlockRate;
    unsigned int _finalLoss;
    NSString *_userId;
    long long _streamType;
}

- (void).cxx_destruct;
@property(nonatomic) long long streamType; // @synthesize streamType=_streamType;
@property(nonatomic) unsigned int finalLoss; // @synthesize finalLoss=_finalLoss;
@property(nonatomic) unsigned int videoBlockRate; // @synthesize videoBlockRate=_videoBlockRate;
@property(nonatomic) unsigned int videoTotalBlockTime; // @synthesize videoTotalBlockTime=_videoTotalBlockTime;
@property(nonatomic) unsigned int audioBlockRate; // @synthesize audioBlockRate=_audioBlockRate;
@property(nonatomic) unsigned int audioTotalBlockTime; // @synthesize audioTotalBlockTime=_audioTotalBlockTime;
@property(nonatomic) unsigned int point2PointDelay; // @synthesize point2PointDelay=_point2PointDelay;
@property(nonatomic) unsigned int jitterBufferDelay; // @synthesize jitterBufferDelay=_jitterBufferDelay;
@property(nonatomic) unsigned int audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) unsigned int audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) unsigned int videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) unsigned int frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned int videoPacketLoss; // @synthesize videoPacketLoss=_videoPacketLoss;
@property(nonatomic) unsigned int audioPacketLoss; // @synthesize audioPacketLoss=_audioPacketLoss;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (id)description;

@end

