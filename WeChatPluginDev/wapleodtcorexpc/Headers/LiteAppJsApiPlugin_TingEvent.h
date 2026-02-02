//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface LiteAppJsApiPlugin_TingEvent
{
    _Bool _isNotifyTingStateChange;
    _Bool _lastVituralPlayerForegroundState;
    NSString *_albumId;
    NSString *_audioId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool lastVituralPlayerForegroundState; // @synthesize lastVituralPlayerForegroundState=_lastVituralPlayerForegroundState;
@property(nonatomic) _Bool isNotifyTingStateChange; // @synthesize isNotifyTingStateChange=_isNotifyTingStateChange;
@property(retain, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
- (void)sendBackgroundStateChangeEvent:(id)arg1;
- (void)flowPlayer:(id)arg1 onPlayListRefresh:(id)arg2;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)onSetPlayerForegroundState:(_Bool)arg1;
- (void)stopObserveTingStateChange;
- (void)startObserveTingStateChange;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

