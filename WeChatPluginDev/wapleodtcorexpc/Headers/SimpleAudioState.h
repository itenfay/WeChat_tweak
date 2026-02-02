//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMContext, NSRecursiveLock;
@protocol SimpleAudioBufferDelegate;

@interface SimpleAudioState : NSObject
{
    _Bool _m_isPlaying;
    _Bool _m_running;
    unsigned int _m_bufferByteSize;
    unsigned int _m_numPacketsToRead;
    struct AudioQueueBuffer **m_buffers;
    struct AudioStreamBasicDescription *m_dataFormat;
    struct OpaqueAudioQueue *_m_queue;
    id <SimpleAudioBufferDelegate> _m_delegate;
    NSRecursiveLock *_m_dataLock;
    MMContext *_m_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMContext *m_context; // @synthesize m_context=_m_context;
@property(retain, nonatomic) NSRecursiveLock *m_dataLock; // @synthesize m_dataLock=_m_dataLock;
@property(nonatomic) __weak id <SimpleAudioBufferDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) struct OpaqueAudioQueue *m_queue; // @synthesize m_queue=_m_queue;
@property(nonatomic) unsigned int m_numPacketsToRead; // @synthesize m_numPacketsToRead=_m_numPacketsToRead;
@property(nonatomic) unsigned int m_bufferByteSize; // @synthesize m_bufferByteSize=_m_bufferByteSize;
@property(nonatomic) _Bool m_running; // @synthesize m_running=_m_running;
@property(nonatomic) _Bool m_isPlaying; // @synthesize m_isPlaying=_m_isPlaying;
@property(nonatomic) struct AudioStreamBasicDescription *m_dataFormat; // @synthesize m_dataFormat;
@property(nonatomic) struct AudioQueueBuffer **m_buffers; // @synthesize m_buffers;
- (void)dealloc;
- (id)init;

@end

