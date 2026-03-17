//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterTPPlayFeedbackInfo, NSDictionary, NSNumber, TPPlayerContext, TPPlayerInitParams, TPPlayerPreloadParams, TPPlayerRange, TPPlayerRenderEffect, TPPlayerScaleTypeParams, TPPlayerSeekParams, TPPlayerSetLoopParams, TPPlayerSetMediaInfoParams, TPPlayerSetMediaProtoParams, TPPlayerSetMuteParams, TPPlayerSetPlayRangeParams, TPPlayerSetStreamTypeParams, TPPlayerUpdateSizeParams, TPVideoSizeRet;

@protocol TPFlutterApi
- (FlutterTPPlayFeedbackInfo *)tpGetFeedbackInfoPlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpGetPlayerStatePlayerId:(long long)arg1 error:(id *)arg2;
- (TPPlayerContext *)tpGetPlayerContextPlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpSetPlaySpeedPlayerId:(long long)arg1 ratio:(double)arg2 error:(id *)arg3;
- (void)tpPreloadParams:(TPPlayerPreloadParams *)arg1 error:(id *)arg2;
- (TPVideoSizeRet *)tpGetVideoSizePlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpSetOnPlayerStateChangeListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpSetOnPlayerHideBufferingListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpSetOnPlayerShowBufferingListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpSetOnFirstFrameRenderedListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpSetPlayCompletedListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpSetOnPreparedListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpSetProgressListenerPlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpClearEffectPlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpRemoveEffectEffect:(TPPlayerRenderEffect *)arg1 error:(id *)arg2;
- (NSNumber *)tpUpdateEffectEffect:(TPPlayerRenderEffect *)arg1 error:(id *)arg2;
- (NSNumber *)tpAddEffectEffect:(TPPlayerRenderEffect *)arg1 error:(id *)arg2;
- (NSNumber *)tpReleasePlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpStopPlayerId:(long long)arg1 error:(id *)arg2;
- (TPPlayerRange *)tpPlayerGetPlayRangePlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpPlayerSetPlayRangeParams:(TPPlayerSetPlayRangeParams *)arg1 error:(id *)arg2;
- (NSNumber *)tpPlayerSeekParams:(TPPlayerSeekParams *)arg1 error:(id *)arg2;
- (NSNumber *)tpPlayerPausePlayerId:(long long)arg1 isManualPause:(_Bool)arg2 error:(id *)arg3;
- (NSNumber *)tpPlayerPlayPlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpPlayerPreparePlayerId:(long long)arg1 error:(id *)arg2;
- (NSNumber *)tpPlayerSetStreamTypeParams:(TPPlayerSetStreamTypeParams *)arg1 error:(id *)arg2;
- (NSNumber *)tpPlayerSetMuteParams:(TPPlayerSetMuteParams *)arg1 error:(id *)arg2;
- (NSNumber *)tpPlaySetScaleTypeParams:(TPPlayerScaleTypeParams *)arg1 error:(id *)arg2;
- (NSNumber *)tpPlayerSetMediaProtoParams:(TPPlayerSetMediaProtoParams *)arg1 error:(id *)arg2;
- (NSNumber *)tpPlayerSetMediaInfoParams:(TPPlayerSetMediaInfoParams *)arg1 error:(id *)arg2;
- (NSNumber *)tpUpdateDisplaySizeParams:(TPPlayerUpdateSizeParams *)arg1 error:(id *)arg2;
- (NSNumber *)tpPlayerSetLoopParams:(TPPlayerSetLoopParams *)arg1 error:(id *)arg2;
- (NSNumber *)tpPlayerInitParams:(TPPlayerInitParams *)arg1 error:(id *)arg2;
- (NSNumber *)tpPlayerCreateMediaType:(long long)arg1 playReportDict:(NSDictionary *)arg2 error:(id *)arg3;
@end

