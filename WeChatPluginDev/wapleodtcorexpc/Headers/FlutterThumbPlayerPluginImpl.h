//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterEventChannel, NSMutableDictionary, NSString;
@protocol FlutterBinaryMessenger, FlutterTextureRegistry;

@interface FlutterThumbPlayerPluginImpl : NSObject
{
    NSObject<FlutterTextureRegistry> *_registry;
    NSObject<FlutterBinaryMessenger> *_messenger;
    FlutterEventChannel *_playerEventChannel;
    CDUnknownBlockType _playerEventSink;
    NSMutableDictionary *_playerMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *playerMap; // @synthesize playerMap=_playerMap;
@property(copy, nonatomic) CDUnknownBlockType playerEventSink; // @synthesize playerEventSink=_playerEventSink;
@property(retain, nonatomic) FlutterEventChannel *playerEventChannel; // @synthesize playerEventChannel=_playerEventChannel;
@property(readonly, nonatomic) NSObject<FlutterBinaryMessenger> *messenger; // @synthesize messenger=_messenger;
@property(readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry; // @synthesize registry=_registry;
- (id)firstPlayerMatch:(CDUnknownBlockType)arg1;
- (id)getPlayerForId:(id)arg1 clear:(_Bool)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)tpGetFeedbackInfoPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpGetPlayerStatePlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpGetPlayerContextPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetPlaySpeedPlayerId:(long long)arg1 ratio:(double)arg2 error:(id *)arg3;
- (void)tpPreloadParams:(id)arg1 error:(id *)arg2;
- (id)tpGetVideoSizePlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetOnPlayerStateChangeListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetOnPlayerHideBufferingListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetOnPlayerShowBufferingListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetOnFirstFrameRenderedListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetPlayCompletedListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetOnPreparedListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpSetProgressListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpClearEffectPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpRemoveEffectEffect:(id)arg1 error:(id *)arg2;
- (id)tpUpdateEffectEffect:(id)arg1 error:(id *)arg2;
- (id)tpAddEffectEffect:(id)arg1 error:(id *)arg2;
- (id)tpReleasePlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpStopPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpUpdateDisplaySizeParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetLoopParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetStreamTypeParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetMuteParams:(id)arg1 error:(id *)arg2;
- (id)tpPlaySetScaleTypeParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerGetPlayRangePlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpPlayerSetPlayRangeParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSeekParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerPausePlayerId:(long long)arg1 isManualPause:(_Bool)arg2 error:(id *)arg3;
- (id)tpPlayerPlayPlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpPlayerPreparePlayerId:(long long)arg1 error:(id *)arg2;
- (id)tpPlayerSetMediaProtoParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerSetMediaInfoParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerInitParams:(id)arg1 error:(id *)arg2;
- (id)tpPlayerCreateMediaType:(long long)arg1 playReportDict:(id)arg2 error:(id *)arg3;
- (id)createPlayerForMediaType:(long long)arg1 playerId:(id)arg2 playReportDict:(id)arg3;
- (id)generatePlayerId;
- (void)initWithRegistry:(id)arg1 messenger:(id)arg2;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

