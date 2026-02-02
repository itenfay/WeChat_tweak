//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, TXCDispatchQueue;

@interface TXCIOSScreenCapturer : NSObject
{
    struct EncodeParamsTypeHeader {
        unsigned short is_annexb;
        unsigned short rc_method;
        unsigned int width;
        unsigned int height;
        unsigned int framerate;
        unsigned int bitrate;
        unsigned int gop;
    } _currentEncodeParams;
    _Bool _isRunning;
    TXCDispatchQueue *_queue;
    TXCDispatchQueue *_outputQueue;
    NSMutableSet *_subscribers;
    NSString *_appGroupId;
}

- (void).cxx_destruct;
@property _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSString *appGroupId; // @synthesize appGroupId=_appGroupId;
@property(retain, nonatomic) NSMutableSet *subscribers; // @synthesize subscribers=_subscribers;
@property(retain, nonatomic) TXCDispatchQueue *outputQueue; // @synthesize outputQueue=_outputQueue;
@property(retain, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
- (void)requestKeyFrame;
- (void)setEncodeParams:(const void *)arg1;
- (void)onBroadcastExtResumed;
- (void)onBroadcastExtPaused;
- (void)onBroadcastExtFinished;
- (void)onBroadcastExtStarted;
- (void)onReceiveVideoPacket:(const void *)arg1;
- (void)stop;
- (void)start;
- (void)setFrameRate:(long long)arg1;
- (void)applyConfigs:(id)arg1;
@property(readonly, nonatomic) unsigned long long captureType;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

