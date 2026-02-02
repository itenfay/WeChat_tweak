//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class SimpleAudioState;

@interface SimpleAudioPlayer : NSObject
{
    _Bool _m_hasPrepare;
    float _m_volume;
    SimpleAudioState *m_bufferState;
}

+ (void)sprintRetCode:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) float m_volume; // @synthesize m_volume=_m_volume;
@property(nonatomic) _Bool m_hasPrepare; // @synthesize m_hasPrepare=_m_hasPrepare;
@property(retain, nonatomic) SimpleAudioState *m_bufferState; // @synthesize m_bufferState;
- (void)printRetCode:(int)arg1;
- (void)stop;
- (_Bool)play;
- (_Bool)preparePlay;
- (_Bool)audioQueueStop;
- (_Bool)audioQueueStart;
- (_Bool)updateBuffer;
- (void)clearBuffer;
- (_Bool)updateQueue;
- (void)clearQueue;
- (_Bool)updateDataFormat;
- (id)getState;
- (id)init;
- (void)dealloc;

@end

