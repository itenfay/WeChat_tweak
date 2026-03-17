//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class ActiveSessionContext, AppSessionContext, CurrCategoryInfoContext, CurrCategorySessionAttrContext, ExploreSessionsContext, MMListenCategoryItem, MMListenDiscoverItem, MMListenDiscoverLine, MMListenReportClientInfo, NSString, SquareItemSessionContext, SquareSessionContext, SquareTabSessionContext, TingItem, TingKVReportData, TingReportContext;
@protocol TingKVReportDelegate, TingPlayTask, TingReportServiceDelegate;

@protocol TingReportService <NSObject, UnitRCBaseProtocol>
- (NSString *)getSquareItemSessionContextStr:(SquareItemSessionContext *)arg1;
- (NSString *)getSquareTabSessionContextStr:(SquareTabSessionContext *)arg1;
- (NSString *)getSquareSessionContextStr:(SquareSessionContext *)arg1;
- (NSString *)getAppSessionContextStr:(AppSessionContext *)arg1;
- (NSString *)getActiveSessionContextStr:(ActiveSessionContext *)arg1;
- (NSString *)getExploreSessionsContextStr:(ExploreSessionsContext *)arg1;
- (NSString *)getCurrCategoryInfoContextStr:(CurrCategoryInfoContext *)arg1;
- (NSString *)getCurrCategorySession:(CurrCategorySessionAttrContext *)arg1;
- (NSString *)getCurExploreSessionsContextStr;
- (NSString *)getTing28683ParamsStr;
- (void)kvStat:(int)arg1 value:(NSString *)arg2;
- (void)kvStatData:(TingKVReportData *)arg1;
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
- (void)updateTingPlayerSessionId:(NSString *)arg1;
- (void)markCurrentPlayerSessionIdWillTerminated;
- (void)keepCurrentPlayerSessionId;
- (void)markAudioModuleInterrupted;
- (void)markAudioModuleResume;
- (void)markAudioModulePausePlay;
- (void)markPlayCenterClear;
- (void)markMinimizeCloseButtonClicked;
- (TingReportContext *)getBaseReportContext;
- (void)report;
- (void)onPlayerAction:(int)arg1 context:(TingReportContext *)arg2 playTask:(id <TingPlayTask>)arg3;
- (void)onClickWithLine:(MMListenDiscoverLine *)arg1 discoverItem:(MMListenDiscoverItem *)arg2 scene:(int)arg3;
- (void)onClickWithCategoryAndContext:(MMListenCategoryItem *)arg1 scene:(int)arg2 index:(int)arg3 context:(TingReportContext *)arg4;
- (void)onClickWithCategory:(MMListenCategoryItem *)arg1 scene:(int)arg2 index:(int)arg3 fillBlock:(TingReportContext * (^)(TingReportContext *))arg4;
- (void)onClickWithItemAndContext:(TingItem *)arg1 scene:(int)arg2 index:(int)arg3 context:(TingReportContext *)arg4;
- (void)onClickWithItem:(TingItem *)arg1 scene:(int)arg2 index:(int)arg3 fillBlock:(TingReportContext * (^)(TingReportContext *))arg4;
- (void)onClickWithItemPlayButtonAndContext:(TingItem *)arg1 scene:(int)arg2 index:(int)arg3 play:(_Bool)arg4 context:(TingReportContext *)arg5;
- (void)onClickWithItemPlayButton:(TingItem *)arg1 scene:(int)arg2 index:(int)arg3 play:(_Bool)arg4 fillBlock:(TingReportContext * (^)(TingReportContext *))arg5;
- (void)onActionWithItemAndContext:(int)arg1 scene:(int)arg2 tingItem:(TingItem *)arg3 categoryItem:(MMListenCategoryItem *)arg4 context:(TingReportContext *)arg5;
- (void)onAction:(int)arg1 scene:(int)arg2 tingItem:(TingItem *)arg3 categoryItem:(MMListenCategoryItem *)arg4 fillBlock:(TingReportContext * (^)(TingReportContext *))arg5;
- (void)onActionWithActionAndSceneAndContext:(int)arg1 scene:(int)arg2 context:(TingReportContext *)arg3;
- (void)onActionWithActionAndScene:(int)arg1 scene:(int)arg2 fillBlock:(TingReportContext * (^)(TingReportContext *))arg3;
- (void)onActionWithActionAndContextAndTask:(int)arg1 context:(TingReportContext *)arg2 playTask:(id <TingPlayTask>)arg3;
- (void)onActionWithActionAndContext:(int)arg1 context:(TingReportContext *)arg2;
- (_Bool)isUseReportService;
- (void)setUseReportService:(_Bool)arg1;
- (MMListenReportClientInfo *)getReportClientInfo:(int)arg1;
- (ExploreSessionsContext *)getExploreSessionsContext;
- (void)clearExploreSessionsContext:(int)arg1;
- (void)setExploreSessionsContext:(ExploreSessionsContext *)arg1;
- (void)onActionWithContext:(TingReportContext *)arg1;
- (void)setKVReportDelegate:(id <TingKVReportDelegate>)arg1;
- (void)setDelegate:(id <TingReportServiceDelegate>)arg1;
@end

