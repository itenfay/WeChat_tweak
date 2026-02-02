//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterStandardTypedData, LVSnapshotInfo, MegaMainFeedListContext, MegaVideoFeedInfo, NSDictionary, NSString;

@protocol MegaVideoNativeApi
- (void)markStarFeed:(MegaVideoFeedInfo *)arg1 starContext:(FlutterStandardTypedData *)arg2 commentscene:(long long)arg3 snapshotInfo:(LVSnapshotInfo *)arg4 error:(id *)arg5;
- (NSString *)remarkForWechatUserUsername:(NSString *)arg1 error:(id *)arg2;
- (void)showLastExitFeedHintFeed:(MegaVideoFeedInfo *)arg1 error:(id *)arg2;
- (MegaMainFeedListContext *)getInitMainFeedListContextWithError:(id *)arg1;
- (void)showSharePanelFeed:(MegaVideoFeedInfo *)arg1 commentscene:(long long)arg2 error:(id *)arg3;
- (void)minimizePlayerId:(long long)arg1 error:(id *)arg2;
- (void)updatePlaySessionIdPlaySessionId:(NSString *)arg1 commentscene:(long long)arg2 error:(id *)arg3;
- (void)didGetGestureEventIsHandled:(_Bool)arg1 error:(id *)arg2;
- (void)setOnceOrientationOrientation:(long long)arg1 error:(id *)arg2;
- (void)openKitchenType:(long long)arg1 feed:(MegaVideoFeedInfo *)arg2 params:(NSDictionary *)arg3 error:(id *)arg4;
- (void)openWatchLaterListTicket:(NSString *)arg1 error:(id *)arg2;
- (void)openFeedPlayerDetailCheckroomTicket:(NSString *)arg1 openParamsBytes:(FlutterStandardTypedData *)arg2 error:(id *)arg3;
@end

