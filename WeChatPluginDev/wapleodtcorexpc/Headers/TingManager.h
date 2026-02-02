//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString, TingAppTaskManager, TingAudioTabDataManager, TingCdnImageUploadManager, TingCrossplatformManager, TingImageDownloader, TingLyricsManager, TingMembershipManager, TingMinimizeMgr, TingNowPlayingInfoCenter, TingPlayCenterMgr, TingPlayerManager, TingPlayerUIManager, TingShareManager, _TtC6WeChat13TingEntryKara;
@protocol ITingReportManager;

@interface TingManager
{
    _Bool _isFilePlayEnabled;
    _Bool _isFlutterWarmUpEnabled;
    _Bool _isEnabled;
    _Bool _isInBlackListFromDynamicConfig;
    _Bool _isInWhiteListFromDynamicConfig;
    _Bool _enableFindEntrance;
    TingPlayerManager *_playerManager;
    id <ITingReportManager> _reportManager;
    TingLyricsManager *_lyricsManager;
    TingMinimizeMgr *_minimizedTaskManager;
    TingPlayCenterMgr *_playingInfoMgr;
    TingShareManager *_shareManager;
    TingAppTaskManager *_appTaskManager;
    TingCrossplatformManager *_crossplatformManager;
    TingCdnImageUploadManager *_cdnImageUploadManager;
    TingAudioTabDataManager *_audioTabDataManager;
    TingPlayerUIManager *_playerUIManager;
    TingImageDownloader *_imageDownloader;
    TingMembershipManager *_membershipManager;
    TingNowPlayingInfoCenter *_nowPlayingInfoCenter;
    _TtC6WeChat13TingEntryKara *_entryKara;
    unsigned long long _mode;
    TingCrossplatformManager *_crossPlatformManager;
    MemoryMappedKV *_mmkv;
}

+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
@property(retain, nonatomic) TingCrossplatformManager *crossPlatformManager; // @synthesize crossPlatformManager=_crossPlatformManager;
@property(nonatomic) _Bool enableFindEntrance; // @synthesize enableFindEntrance=_enableFindEntrance;
@property(nonatomic) _Bool isInWhiteListFromDynamicConfig; // @synthesize isInWhiteListFromDynamicConfig=_isInWhiteListFromDynamicConfig;
@property(nonatomic) _Bool isInBlackListFromDynamicConfig; // @synthesize isInBlackListFromDynamicConfig=_isInBlackListFromDynamicConfig;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) _TtC6WeChat13TingEntryKara *entryKara; // @synthesize entryKara=_entryKara;
@property(retain, nonatomic) TingNowPlayingInfoCenter *nowPlayingInfoCenter; // @synthesize nowPlayingInfoCenter=_nowPlayingInfoCenter;
@property(retain, nonatomic) TingMembershipManager *membershipManager; // @synthesize membershipManager=_membershipManager;
@property(retain, nonatomic) TingImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) TingPlayerUIManager *playerUIManager; // @synthesize playerUIManager=_playerUIManager;
@property(retain, nonatomic) TingAudioTabDataManager *audioTabDataManager; // @synthesize audioTabDataManager=_audioTabDataManager;
@property(retain, nonatomic) TingCdnImageUploadManager *cdnImageUploadManager; // @synthesize cdnImageUploadManager=_cdnImageUploadManager;
@property(readonly, nonatomic) TingCrossplatformManager *crossplatformManager; // @synthesize crossplatformManager=_crossplatformManager;
@property(retain, nonatomic) TingAppTaskManager *appTaskManager; // @synthesize appTaskManager=_appTaskManager;
@property(retain, nonatomic) TingShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) TingPlayCenterMgr *playingInfoMgr; // @synthesize playingInfoMgr=_playingInfoMgr;
@property(retain, nonatomic) TingMinimizeMgr *minimizedTaskManager; // @synthesize minimizedTaskManager=_minimizedTaskManager;
@property(retain, nonatomic) TingLyricsManager *lyricsManager; // @synthesize lyricsManager=_lyricsManager;
@property(retain, nonatomic) id <ITingReportManager> reportManager; // @synthesize reportManager=_reportManager;
@property(retain, nonatomic) TingPlayerManager *playerManager; // @synthesize playerManager=_playerManager;
@property(nonatomic) _Bool isFlutterWarmUpEnabled; // @synthesize isFlutterWarmUpEnabled=_isFlutterWarmUpEnabled;
@property(nonatomic) _Bool isFilePlayEnabled; // @synthesize isFilePlayEnabled=_isFilePlayEnabled;
@property(nonatomic) _Bool enableCloseAppBottomBar;
- (_Bool)shutdownListenNewSync;
- (_Bool)canShowDiscoverManagmentEntrance;
- (_Bool)isEnableAudioRadioChannel;
- (_Bool)willOpenAudioTabOnFindEntry;
- (_Bool)canUpgradeFindEntrance;
- (_Bool)enableFinderTingEntranceByUser;
- (_Bool)shouldShowFindEntranceNotification;
- (_Bool)shouldShowFindEntrance;
- (void)readFindEntranceSwitch;
- (void)setupExptSettings;
- (_Bool)enableEntryKara;
- (_Bool)isPlayerSwitchOpenedFromXLab;
- (_Bool)isMiniProgramSwitchOpenedFromXLab;
- (_Bool)calInWhiteListFromDynamicConfig;
- (_Bool)calInBlackListFromDynamicConfig;
- (_Bool)isSwitchOpenedFromDynamicConfig;
- (_Bool)calcTingMainSwitch;
- (long long)tingExptIdentification;
- (_Bool)isProfileMusicTabFlutterEnabledOnUseHeadCgi;
- (_Bool)isProfileMusicTabFlutterEnabled;
- (_Bool)isEnableMvStartPlayOptimize;
- (_Bool)ttsSentenceReadEnable;
- (id)audioAutoPauseConfig;
- (_Bool)isSingleAudioAutoPlayEnable;
- (_Bool)isPrefetchCheckSpamAndGetLinkEnabled;
- (_Bool)isSquareTabAudioDisableReddot;
- (_Bool)isSquareTabAudioSearchEnabled;
- (_Bool)isUGCSwitchEnabled;
- (_Bool)isFinderAudioEnabled;
- (_Bool)isListenLaterEnabled;
- (_Bool)isWebEnabled;
- (_Bool)isTimelineTingEntryEnabled;
- (_Bool)isSquareEnabled;
- (_Bool)isInBlackList;
- (_Bool)canShowAudioTaskBar;
- (_Bool)shouldShowAudioTaskBar;
- (void)resetTingAppState;
- (void)releaseUnderlymanager;
- (void)createUnderlymanager;
- (void)clearUnderlymanager;
- (void)removeObserver;
- (void)setupObserver;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)dealloc;
- (void)onServiceTerminate;
- (void)onServiceInit;
@property(nonatomic) _Bool hasShowFinderLikeMusicEducation;
- (unsigned long long)cleanAllCache;
- (unsigned long long)allPlayerCacheSize;
- (unsigned long long)cleanPlayerCoreTPCache;
- (unsigned long long)cleanPlayerCoreKSCache;
- (id)playerCoreTPCachePath;
- (unsigned long long)playerCoreTPCacheSize;
- (id)playerCoreKsCachePath;
- (unsigned long long)playerCoreKsCacheSize;
- (void)closeStorage;
- (_Bool)setupStorage;
- (id)tempDirectory;
- (id)mainPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

