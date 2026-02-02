//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TingDataReportService;

@interface TingReportManagerCpp : NSObject
{
    int _audioSessionRoute;
    unsigned int _netType;
    TingDataReportService *_logic;
}

+ (id)extraReportDataFromScene:(int)arg1 ActionListenItem:(id)arg2 actionCategoryItem:(id)arg3 playingListenItem:(id)arg4 playingCategoryItem:(id)arg5;
+ (void)clearSession;
- (void).cxx_destruct;
@property(retain, nonatomic) TingDataReportService *logic; // @synthesize logic=_logic;
@property(nonatomic) unsigned int netType; // @synthesize netType=_netType;
@property(nonatomic) int audioSessionRoute; // @synthesize audioSessionRoute=_audioSessionRoute;
- (void)finderRedDotDataChangedActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3 toCtrlInfo:(id)arg4 disposePath:(id)arg5;
- (void)doClearSession;
- (void)cancelClearSessionInvoker;
- (void)markSessionReport:(id)arg1;
- (void)markPlayFinishAction:(int)arg1;
- (void)markCurrentPlayerSessionIdWillTerminated;
- (void)markAudioModuleResume;
- (void)markAudioModulePausePlay;
- (void)markAudioModuleInterrupted;
- (void)markPlayCenterClear;
- (void)markMinimizeCloseButtonClicked;
- (void)onPlayerAction:(int)arg1 context:(id)arg2;
- (void)markTimeTaskStop;
- (void)keepCurrentPlayerSessionId;
- (void)tryUpdateCurrentSessionId;
- (void)updateTingPlayerSessionId:(id)arg1;
- (void)onClickWithLine:(id)arg1 item:(id)arg2 scene:(int)arg3;
- (void)onClickWithCategory:(id)arg1 scene:(int)arg2 index:(int)arg3 fill:(CDUnknownBlockType)arg4;
- (void)onClickWithItem:(id)arg1 belongsToCategory:(id)arg2 scene:(int)arg3 index:(int)arg4 fill:(CDUnknownBlockType)arg5;
- (void)onClickWithItemPlayButton:(id)arg1 belongsToCategory:(id)arg2 scene:(int)arg3 index:(int)arg4 play:(_Bool)arg5 fill:(CDUnknownBlockType)arg6;
- (void)onExposedWithLine:(id)arg1 item:(id)arg2 scene:(int)arg3;
- (void)onExposedWithCategory:(id)arg1 scene:(int)arg2 index:(int)arg3 fill:(CDUnknownBlockType)arg4;
- (void)onExposedWithItem:(id)arg1 belongsToCategory:(id)arg2 scene:(int)arg3 index:(int)arg4 fill:(CDUnknownBlockType)arg5;
- (void)onPageDisappear:(int)arg1 fill:(CDUnknownBlockType)arg2;
- (void)onPageAppear:(int)arg1 fill:(CDUnknownBlockType)arg2;
- (void)reportNow;
- (void)onAction:(int)arg1 scene:(int)arg2 tingItem:(id)arg3 categoryItem:(id)arg4 fill:(CDUnknownBlockType)arg5;
- (void)onAction:(int)arg1 scene:(int)arg2 fill:(CDUnknownBlockType)arg3;
- (void)onAction:(int)arg1 context:(id)arg2;
- (void)onAction:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onCarPlayDisconnected;
- (void)onCarPlayConnected;
- (void)onWCAudioSessionRouteChange:(id)arg1 reasonValue:(unsigned long long)arg2;
- (void)updateAudioSessionRoute:(id)arg1;
- (void)didReceiveDidEnterBackgroundNotification;
- (void)didReceiveWillEnterForegroundNotification;
- (id)getPlayingTask;
- (_Bool)isPlaying;
- (int)getAppEnterScene;
- (id)getAppSessionId;
- (int)getNetType;
- (int)getAudioSessionRoute;
- (id)getPlayerTingItem;
- (id)getPlayerReportContext;
- (id)getTapeItem;
- (void)dealloc;
- (id)init;
- (id)imp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

