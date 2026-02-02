//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, SimpleRecordState;

@interface SimpleAudioRecorder : NSObject
{
    MMTimer *_m_meterTimer;
    SimpleRecordState *_m_bufferState;
}

+ (void)sprintRetCode:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SimpleRecordState *m_bufferState; // @synthesize m_bufferState=_m_bufferState;
@property(retain, nonatomic) MMTimer *m_meterTimer; // @synthesize m_meterTimer=_m_meterTimer;
- (void)printRetCode:(int)arg1;
- (void)stop;
- (_Bool)record;
- (_Bool)audioQueueStop;
- (_Bool)audioQueueStart;
- (_Bool)prepareRecord;
- (_Bool)updateBuffer;
- (void)clearBuffer;
- (_Bool)updateQueue;
- (void)clearQueue;
- (_Bool)updateDataFormat;
- (long long)RecordingTime;
- (id)getState;
- (void)setCheckMeterInterval:(double)arg1;
- (void)onMeterChange;
- (id)init;
- (void)dealloc;

@end

