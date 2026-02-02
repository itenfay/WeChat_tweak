//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAMediaCastingUpnpDevice, WAMediaCastingUpnpDiscovery, WAMediaCastingUpnpServiceCallback, WAMediaCastingUpnpServicePoll;
@protocol WAMediaCastingUpnpServiceDelegate;

@interface WAMediaCastingUpnpService : NSObject
{
    _Bool _isLive;
    _Bool _shouldResumePollingWhenAppear;
    id <WAMediaCastingUpnpServiceDelegate> _delegate;
    unsigned long long _videoPlayerState;
    WAMediaCastingUpnpDevice *_currentDevice;
    WAMediaCastingUpnpDiscovery *_discovery;
    WAMediaCastingUpnpServicePoll *_poll;
    unsigned long long _transportInfoRetryCount;
    NSString *_currentURI;
    WAMediaCastingUpnpServiceCallback *_callback;
}

+ (void)runOnMainQueue:(CDUnknownBlockType)arg1;
+ (id)service;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldResumePollingWhenAppear; // @synthesize shouldResumePollingWhenAppear=_shouldResumePollingWhenAppear;
@property(retain, nonatomic) WAMediaCastingUpnpServiceCallback *callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(retain, nonatomic) NSString *currentURI; // @synthesize currentURI=_currentURI;
@property(nonatomic) unsigned long long transportInfoRetryCount; // @synthesize transportInfoRetryCount=_transportInfoRetryCount;
@property(retain, nonatomic) WAMediaCastingUpnpServicePoll *poll; // @synthesize poll=_poll;
@property(retain, nonatomic) WAMediaCastingUpnpDiscovery *discovery; // @synthesize discovery=_discovery;
@property(retain, nonatomic) WAMediaCastingUpnpDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(nonatomic) unsigned long long videoPlayerState; // @synthesize videoPlayerState=_videoPlayerState;
@property(nonatomic) __weak id <WAMediaCastingUpnpServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startPoll;
- (void)stopPoll;
@property(readonly, nonatomic) _Bool isSearching;
- (void)pollShouldBegin:(id)arg1;
- (void)WAMediaCastingUpnpDiscoveryDidDeviceChanged:(id)arg1;
- (void)WAMediaCastingUpnpDiscoveryDidFinished:(id)arg1;
- (void)WAMediaCastingUpnpDiscoveryDidStart:(id)arg1;
- (void)handleVideoDisappear;
- (void)handleVideoAppear;
- (void)exit;
- (void)handleMediaInfoReturn:(id)arg1 error:(id)arg2;
- (void)handlePollRetryCountLimit;
- (void)handlePositionInfoReturn:(double)arg1 duration:(double)arg2 error:(id)arg3;
- (void)handleTransportInfoReturn:(unsigned long long)arg1 error:(id)arg2;
- (void)handlePauseComplete:(id)arg1;
- (void)handleStopComplete:(id)arg1;
- (void)handleSeekComplete:(id)arg1;
- (void)handlePlayComplete:(id)arg1;
- (void)setVolume:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)seekWithPosition:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseWithCompletion:(CDUnknownBlockType)arg1;
- (void)playWithCompletion:(CDUnknownBlockType)arg1;
- (void)playWithURI:(id)arg1 startPosition:(double)arg2 isLive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cancelRequestCallbackAndStopPolling;
- (void)cancelSearch;
- (void)search;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

