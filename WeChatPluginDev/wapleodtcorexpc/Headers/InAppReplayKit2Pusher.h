//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TRTCCloud;

@interface InAppReplayKit2Pusher : NSObject
{
    _Bool _isPushing;
    _Bool _isStarting;
    TRTCCloud *_trtcCloud;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStarting; // @synthesize isStarting=_isStarting;
@property(nonatomic) _Bool isPushing; // @synthesize isPushing=_isPushing;
@property(retain, nonatomic) TRTCCloud *trtcCloud; // @synthesize trtcCloud=_trtcCloud;
- (void)onNetworkQuality:(id)arg1 remoteQuality:(id)arg2;
- (void)onConnectionLost;
- (void)onEnterRoom:(long long)arg1;
- (void)onNetStatus:(id)arg1;
- (void)showRecodingStatus:(_Bool)arg1;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)resumePush;
- (void)pausePush;
- (void)stopInAppScreenCapture;
- (void)startInAppScreenCapture;
- (void)stop;
- (void)start;
- (id)initWithTRTCCloud:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

