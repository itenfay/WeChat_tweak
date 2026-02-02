//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableArray;
@protocol KSAudioQueueDelegate;

@interface KSAudioQueue : NSObject
{
    struct AudioStreamBasicDescription _format;
    unsigned int _maxPacktSize;
    NSMutableArray *_canUseQueueBuf;
    NSMutableArray *_allQueueBuf;
    NSError *_error;
    float _volume;
    float _playRate;
    unsigned int _bufferCount;
    id <KSAudioQueueDelegate> _delegate;
    NSData *_magicCookie;
    struct OpaqueAudioQueue *_audioQueue;
    unsigned long long _status;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) struct OpaqueAudioQueue *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) NSData *magicCookie; // @synthesize magicCookie=_magicCookie;
@property(readonly, nonatomic) unsigned int bufferCount; // @synthesize bufferCount=_bufferCount;
@property(nonatomic) __weak id <KSAudioQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void)handleAudioQueuePropertyCallBack:(struct OpaqueAudioQueue *)arg1 property:(unsigned int)arg2;
- (void)handleAudioQueueOutputCallBack:(struct OpaqueAudioQueue *)arg1 buffer:(struct AudioQueueBuffer *)arg2;
- (int)startAudioQueue;
- (void)clearData;
- (void)disposeAudioQueue;
- (float)getCurrentPlayRate;
- (_Bool)setPlayRate:(float)arg1;
- (float)getCurrentVolume;
- (_Bool)setVolume:(float)arg1;
- (_Bool)tryStartQueue;
- (_Bool)reset;
- (_Bool)resume;
- (_Bool)pause;
- (void)playEnd;
- (void)prepareStop;
- (void)pauseBeforeStopAudioQueue;
- (void)stop;
- (_Bool)startQueue;
- (_Bool)enqueueBuf:(id)arg1 desNum:(unsigned int)arg2;
- (void)returnQueueBuf:(id)arg1;
- (unsigned int)acquireQueueBufCnt;
- (id)acquireQueueBuf:(unsigned long long *)arg1;
- (_Bool)prepareAudioQueue;
- (_Bool)playedTime:(double *)arg1;
- (void)setError:(id)arg1;
- (void)dealloc;
- (id)initWithFormat:(struct AudioStreamBasicDescription *)arg1 maxPacketSize:(unsigned int)arg2 bufferCount:(unsigned int)arg3;

@end

