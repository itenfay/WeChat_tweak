//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TXCDispatchQueue, TXCTimedOutput;

@interface TXCVideoEncodeFpsThrottle
{
    _Bool _isRpsIdrMode;
    TXCDispatchQueue *_queue;
    TXCTimedOutput *_sender;
    CDUnknownBlockType _complete;
    long long _rpsIdrFramerate;
    long long _framerate;
}

- (void).cxx_destruct;
@property(nonatomic) long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long rpsIdrFramerate; // @synthesize rpsIdrFramerate=_rpsIdrFramerate;
@property(nonatomic) _Bool isRpsIdrMode; // @synthesize isRpsIdrMode=_isRpsIdrMode;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(retain, nonatomic) TXCTimedOutput *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
- (void)updateSenderInterval:(long long)arg1;
- (void)setIsRpsIdrMode:(_Bool)arg1 framerate:(long long)arg2;
- (void)reset;
- (void)timedOutput:(id)arg1 outputObject:(id)arg2;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)setFrameRate:(long long)arg1;
- (void)stop;
- (void)start;
- (id)initWithQueue:(id)arg1 withFps:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

