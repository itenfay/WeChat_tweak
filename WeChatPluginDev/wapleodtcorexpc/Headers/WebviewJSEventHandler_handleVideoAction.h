//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WebviewJSEventHandler_handleVideoAction
{
}

- (id)nativeVideoPlugin;
- (id)getFinderFeedInfo:(id)arg1 errMsg:(id *)arg2;
- (void)opFinderVideo:(id)arg1 errMsg:(id *)arg2;
- (void)openFullScreenFinderVideo:(id)arg1 event:(id)arg2;
- (void)exchangeFinderPlayInfo:(id)arg1 event:(id)arg2;
- (id)getInitialParams:(id)arg1 errMsg:(id *)arg2;
- (id)getSameLayerPlayerCount:(id)arg1 errMsg:(id *)arg2;
- (id)takeVideoSnapshotForViewId:(unsigned int)arg1 maxByteSize:(unsigned int)arg2 errMsg:(id *)arg3;
- (void)setExitFullscreenBtn:(id)arg1 errMsg:(id *)arg2;
- (void)removeSameLayerVideo:(id)arg1 errMsg:(id *)arg2;
- (id)operateSameLayerVideo:(id)arg1 errMsg:(id *)arg2;
- (void)updateSameLayerVideo:(id)arg1 event:(id)arg2 errMsg:(id *)arg3;
- (void)insertSameLayerVideo:(id)arg1 event:(id)arg2 errMsg:(id *)arg3;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

