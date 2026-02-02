//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingReportServiceCpp
{
}

+ (id)sharedInstance;
- (id)getSquareItemSessionContextStr:(id)arg1;
- (id)getSquareTabSessionContextStr:(id)arg1;
- (id)getSquareSessionContextStr:(id)arg1;
- (id)getAppSessionContextStr:(id)arg1;
- (id)getActiveSessionContextStr:(id)arg1;
- (id)getExploreSessionsContextStr:(id)arg1;
- (id)getCurrCategoryInfoContextStr:(id)arg1;
- (id)getCurrCategorySession:(id)arg1;
- (id)getCurExploreSessionsContextStr;
- (id)getTing28683ParamsStr;
- (void)kvStat:(int)arg1 value:(id)arg2;
- (void)kvStatData:(id)arg1;
- (void)idKeyStat:(int)arg1 key:(int)arg2 value:(int)arg3;
- (void)onReachabilityChange:(int)arg1;
- (void)onAudioSessionRouteChanged:(int)arg1;
- (_Bool)appBackgroundState;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)markPlayFinishAction:(int)arg1;
- (void)markTingPlayResumeAction:(int)arg1;
- (void)markTingPlayPauseAction:(int)arg1;
- (void)markTingPlayStopAction:(int)arg1;
- (void)tryUpdateCurrentSessionId;
- (void)updateTingPlayerSessionId:(id)arg1;
- (void)markCurrentPlayerSessionIdWillTerminated;
- (void)keepCurrentPlayerSessionId;
- (void)markAudioModuleInterrupted;
- (void)markAudioModuleResume;
- (void)markAudioModulePausePlay;
- (void)markPlayCenterClear;
- (void)markMinimizeCloseButtonClicked;
- (id)getBaseReportContext;
- (void)report;
- (void)onPlayerAction:(int)arg1 context:(id)arg2 playTask:(id)arg3;
- (void)onClickWithLine:(id)arg1 discoverItem:(id)arg2 scene:(int)arg3;
- (void)onClickWithCategoryAndContext:(id)arg1 scene:(int)arg2 index:(int)arg3 context:(id)arg4;
- (void)onClickWithCategory:(id)arg1 scene:(int)arg2 index:(int)arg3 fillBlock:(CDUnknownBlockType)arg4;
- (void)onClickWithItemAndContext:(id)arg1 scene:(int)arg2 index:(int)arg3 context:(id)arg4;
- (void)onClickWithItem:(id)arg1 scene:(int)arg2 index:(int)arg3 fillBlock:(CDUnknownBlockType)arg4;
- (void)onClickWithItemPlayButtonAndContext:(id)arg1 scene:(int)arg2 index:(int)arg3 play:(_Bool)arg4 context:(id)arg5;
- (void)onClickWithItemPlayButton:(id)arg1 scene:(int)arg2 index:(int)arg3 play:(_Bool)arg4 fillBlock:(CDUnknownBlockType)arg5;
- (void)onActionWithItemAndContext:(int)arg1 scene:(int)arg2 tingItem:(id)arg3 categoryItem:(id)arg4 context:(id)arg5;
- (void)onAction:(int)arg1 scene:(int)arg2 tingItem:(id)arg3 categoryItem:(id)arg4 fillBlock:(CDUnknownBlockType)arg5;
- (void)onActionWithActionAndSceneAndContext:(int)arg1 scene:(int)arg2 context:(id)arg3;
- (void)onActionWithActionAndScene:(int)arg1 scene:(int)arg2 fillBlock:(CDUnknownBlockType)arg3;
- (void)onActionWithActionAndContextAndTask:(int)arg1 context:(id)arg2 playTask:(id)arg3;
- (void)onActionWithActionAndContext:(int)arg1 context:(id)arg2;
- (_Bool)isUseReportService;
- (void)setUseReportService:(_Bool)arg1;
- (id)getReportClientInfo:(int)arg1;
- (id)getExploreSessionsContext;
- (void)clearExploreSessionsContext:(int)arg1;
- (void)setExploreSessionsContext:(id)arg1;
- (void)onActionWithContext:(id)arg1;
- (void)setKVReportDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

