//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface MMGameAudioMixStream : NSObject
{
    int _sessionId;
    int _streamId;
    int _channel;
    int _samplerate;
    _Bool _buffReady;
    long long _format;
    unsigned int _sampleSize;
    unsigned int _readySize;
    unsigned int _maxSize;
    NSMutableData *_nsData;
    NSMutableData *_buffData;
    unsigned int putTimes;
    unsigned int putSize;
    unsigned int getTimes;
    unsigned int getSize;
    unsigned int ignoreTimes;
    unsigned int ignoreSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(nonatomic) int samplerate; // @synthesize samplerate=_samplerate;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned int size; // @synthesize size=_sampleSize;
@property(nonatomic) int sessionId; // @synthesize sessionId=_sessionId;
- (id)getData;
- (_Bool)putData:(int)arg1 samplerate:(int)arg2 format:(long long)arg3 data:(void *)arg4 size:(unsigned int)arg5;
- (id)init:(int)arg1 channel:(int)arg2 samplerate:(int)arg3 format:(long long)arg4 size:(int)arg5;

@end

