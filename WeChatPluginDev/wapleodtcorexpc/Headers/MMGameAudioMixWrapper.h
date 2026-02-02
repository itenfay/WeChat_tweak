//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableData, NSMutableDictionary, NSThread;
@protocol MMGameAudioMixDelegate;

@interface MMGameAudioMixWrapper : NSObject
{
    id <MMGameAudioMixDelegate> delegate;
    int _outputSampleRate;
    int _outputChannel;
    long long _outputFormat;
    void *_mixerHandler;
    int _outputSize;
    NSMutableDictionary *_nsDic;
    struct shared_ptr<WAGameThreadWaitReady> _wait;
    _Bool _ready;
    _Bool _terminal;
    NSThread *_thread;
    NSMutableData *_mixData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *mixData; // @synthesize mixData=_mixData;
@property _Bool terminal; // @synthesize terminal=_terminal;
@property _Bool ready; // @synthesize ready=_ready;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(nonatomic) __weak id <MMGameAudioMixDelegate> delegate; // @synthesize delegate;
- (int)getInputSampleCount:(int)arg1 sampleRate:(int)arg2;
- (int)getInputSampleSize:(int)arg1 sampleRate:(int)arg2 format:(long long)arg3;
- (void)onMixThread;
- (void)destroy;
- (id)getData;
- (_Bool)putData:(int)arg1 channel:(int)arg2 sampleRate:(int)arg3 format:(long long)arg4 data:(void *)arg5 size:(int)arg6;
- (id)getStream:(int)arg1 channel:(int)arg2 sampleRate:(int)arg3 format:(long long)arg4;
- (_Bool)create:(int)arg1 channel:(int)arg2 format:(long long)arg3;
- (void)dealloc;
- (id)init;

@end

