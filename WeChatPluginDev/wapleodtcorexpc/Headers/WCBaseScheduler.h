//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCPlayerPlayArgs, WCPlayerPlaybackInfo;

@interface WCBaseScheduler : NSObject
{
    unsigned int _byteRate;
    unsigned int _networkSpeed;
    long long _type;
    unsigned long long _lastRequestTime;
    unsigned long long _networkUpdateTime;
    WCPlayerPlayArgs *_playerArgs;
    WCPlayerPlaybackInfo *_playbackInfo;
    double _threshold;
    double _bufferLimit;
    double _sliceTime;
}

- (void).cxx_destruct;
@property(nonatomic) double sliceTime; // @synthesize sliceTime=_sliceTime;
@property(nonatomic) double bufferLimit; // @synthesize bufferLimit=_bufferLimit;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
@property(nonatomic) unsigned long long networkUpdateTime; // @synthesize networkUpdateTime=_networkUpdateTime;
@property(nonatomic) unsigned long long lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(nonatomic) unsigned int networkSpeed; // @synthesize networkSpeed=_networkSpeed;
@property(nonatomic) unsigned int byteRate; // @synthesize byteRate=_byteRate;
@property(nonatomic) long long type; // @synthesize type=_type;
- (_Bool)isInPreloadLimitTime:(id)arg1;
- (_Bool)isCanImproveBaseBuffer;
- (double)getNextDownloadTimeWhenPlaying;
- (double)getNextDownloadTimeWhenPause;
- (id)initWithPlayerArgs:(id)arg1 playbackInfo:(id)arg2;

@end

