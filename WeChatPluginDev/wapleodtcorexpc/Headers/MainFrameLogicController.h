//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MainFrameCellDataManager, MainFrameFoldReporter, NSMutableArray, NSMutableDictionary, NSString, WAContactGetter;
@protocol MainFrameLogicControllerDelegate;

@interface MainFrameLogicController
{
    id <MainFrameLogicControllerDelegate> m_delegate;
    _Bool m_bPlayNewMsgDuringOneSync;
    NSMutableArray *m_arrFilteredSession;
    NSString *m_nsLastSearchText;
    MMTimer *m_updateTimeLabelTimer;
    _Bool m_bReadyToLoadData;
    NSMutableDictionary *m_dicPlayNewMsgNotify;
    unsigned int m_shownCellMaxIndex;
    _Bool m_bIsPreCreatingCellData;
    long long m_lastPreCreateCellIndex;
    WAContactGetter *m_contactGetter;
    MainFrameCellDataManager *m_cellDataMgr;
    _Bool _hasLoadSessionData;
    NSMutableArray *m_frontSessionArray;
    NSString *m_delayFoldSessionForGuide;
    MainFrameFoldReporter *_foldReporter;
}

+ (id)getFakeCellDataFromCellData:(id)arg1;
+ (id)getPathOfLastFrontUserName;
+ (id)getLastFrontSessionArray;
+ (_Bool)hasMainFrameCache;
- (void).cxx_destruct;
@property(retain, nonatomic) MainFrameFoldReporter *foldReporter; // @synthesize foldReporter=_foldReporter;
@property(nonatomic) _Bool hasLoadSessionData; // @synthesize hasLoadSessionData=_hasLoadSessionData;
@property(retain, nonatomic) NSString *m_delayFoldSessionForGuide; // @synthesize m_delayFoldSessionForGuide;
@property(retain, nonatomic) NSMutableArray *m_frontSessionArray; // @synthesize m_frontSessionArray;
@property(retain, nonatomic) NSString *m_nsLastSearchText; // @synthesize m_nsLastSearchText;
@property(readonly, nonatomic) _Bool m_bReadyToLoadData; // @synthesize m_bReadyToLoadData;
@property(nonatomic) __weak id <MainFrameLogicControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) unsigned long long lastEnterMainTabTime;
- (void)onClickAtMainFrameTab;
- (void)unfoldAllTopSessionWithAnimte:(_Bool)arg1;
- (void)foldSessionUsernames:(id)arg1 animate:(_Bool)arg2;
- (void)foldAllTopUnreadSession;
- (long long)getUnreadTopSessionCount;
- (void)checkUnfoldSession;
- (_Bool)canFoldTopSession;
- (_Bool)isTopSessionFolding;
- (void)deleteSessionInfoAndReload:(id)arg1;
- (long long)indexInAllVisibleSessions:(id)arg1;
- (id)indexPathOfSessionUserName:(id)arg1;
- (long long)indexOfSessionUserName:(id)arg1 inSection:(long long)arg2;
- (void)pluginsChanged:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)OnChangeGroup:(id)arg1;
- (void)onNewSyncBegin;
- (void)reportBizSessionDelete:(id)arg1;
- (void)onHideSessionWithUserName:(id)arg1;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(id)arg2;
- (void)onWillDeleteSession:(id)arg1;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(long long)arg2;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onSessionChanged:(id)arg1;
- (void)onNeedRebuild;
- (void)onSessionRebuildEnd;
- (void)onSessionRebuildBegin;
- (void)onSessionTopStatusChanged:(id)arg1 bTop:(_Bool)arg2;
- (void)onMainSessionReload;
- (void)clearResource;
- (unsigned int)getCurNetworkStatusType;
- (id)getSessionInfoByContact:(id)arg1;
- (id)findFirstIndexPathFrom:(id)arg1 filter:(CDUnknownBlockType)arg2;
- (id)getFirstHasUnreadMsgSessionIndexFrom:(id)arg1;
- (id)getFilteredSessionInfo:(unsigned int)arg1;
- (unsigned long long)getFilteredSessionCount;
- (_Bool)isHasActiveUsr;
- (void)hideSession:(id)arg1;
- (void)deleteSessionByUsername:(id)arg1;
- (unsigned int)getTotalUnreadCountInRedDot;
- (unsigned int)getTotalUnreadCountForAppIcon;
- (unsigned int)getTotalUnreadCount;
- (id)getSessionBaseInfoAtIndexPath:(id)arg1;
- (id)getSessionInfoAtIndexPath:(id)arg1;
- (unsigned int)getVisibleSessionCount;
- (long long)getSessionCountForSection:(long long)arg1;
- (unsigned int)getSessionCount;
- (void)setReadyToLoadData;
- (void)onPageDidSelectTab;
- (void)onTableViewReloadDataWithVisibleCellsIndexPath:(id)arg1;
- (void)onPageDisappearWithVisibleCellsIndexPath:(id)arg1;
- (void)onPageAppearWithVisibleCellsIndexPath:(id)arg1;
- (void)onViewDidAppear;
- (void)onDidSelectCellAt:(id)arg1;
- (void)didEndDisplayCell:(id)arg1 isReloadingData:(_Bool)arg2;
- (void)willDisplayCell:(id)arg1 isReloadingData:(_Bool)arg2;
- (void)updateTimeForAllCellDatas;
- (id)getCellDataByUsrName:(id)arg1;
- (void)cleanupPreLoadCacheIfNeed:(unsigned int)arg1;
- (void)cleanupCellDataCache;
- (id)updateCellData:(id)arg1;
- (id)getCellDataForFilterSession:(unsigned int)arg1;
- (id)getCellDataAtIndexPath:(id)arg1;
- (long long)getFakeCellCount;
- (id)getFakeCellData:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (void)asyncSaveFrontUserName;
- (void)syncSaveFrontUserName;
- (void)fixSelfHeadImage;
- (void)removeNotificationCenterObservers;
- (void)addNotificationCenterObservers;
- (void)unRegisterExt;
- (void)registerExt;
- (void)callUpdateSessionByName:(id)arg1;
- (void)callUpdateSession:(id)arg1;
- (void)playNewMsgNotify:(id)arg1 NotifyFlag:(long long)arg2;
- (_Bool)isPlayingOrRecording;
- (_Bool)isMsgUnread:(id)arg1 NotifyFlag:(long long)arg2;
- (void)handleUIApplicationDidBecomeActiveNotification:(id)arg1;
- (void)onUpdateTimeLabelTimer:(id)arg1;
- (void)stopUpdateTimeLabelTimer;
- (void)startUpdateTimeLabelTimer;
- (void)startupPreCreateForCellData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

