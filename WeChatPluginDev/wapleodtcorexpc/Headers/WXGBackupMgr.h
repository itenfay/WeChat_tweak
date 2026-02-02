//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatMigrationGetConnectInfo, NSArray, NSData, NSString, WCBackupEntryViewController, WCPCMigrationEntryViewController, WXGBackupImportMessageHelper, WXGBackupLogic;

@interface WXGBackupMgr
{
    unsigned long long m_sessionCount;
    unsigned long long m_msgCount;
    unsigned long long m_dataSize;
    NSString *deviceName;
    NSString *vendorID;
    unsigned int wechatVersion;
    _Bool m_bShouldNotInterruption;
    _Bool m_checkState;
    _Bool m_bNeedReloadBanner;
    _Bool _supportTimeSelect;
    _Bool _supportReconnect;
    _Bool _supportQuickBackup;
    _Bool _supportFileFilter;
    unsigned short _server_port;
    NSString *_server_id;
    NSData *_server_key;
    NSString *_server_hello;
    NSString *_server_ok;
    NSString *_server_ip;
    NSArray *_sessionArray;
    NSString *_pcName;
    NSString *_wifiName;
    NSString *_selfWifiName;
    unsigned long long _inMemoryMigrationSize;
    unsigned long long _notifyCode;
    long long _mediaFormatSupport;
    WCBackupEntryViewController *_brEntryVC;
    WCPCMigrationEntryViewController *_pcmEntryVC;
    WXGBackupLogic *_backupLogic;
    WXGBackupImportMessageHelper *_importMessageHelper;
    ChatMigrationGetConnectInfo *_getConnectionInfo;
    unsigned long long _pairType;
}

+ (_Bool)isNotifyStateCanReenter:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long pairType; // @synthesize pairType=_pairType;
@property(retain, nonatomic) ChatMigrationGetConnectInfo *getConnectionInfo; // @synthesize getConnectionInfo=_getConnectionInfo;
@property(retain, nonatomic) WXGBackupImportMessageHelper *importMessageHelper; // @synthesize importMessageHelper=_importMessageHelper;
@property(retain, nonatomic) WXGBackupLogic *backupLogic; // @synthesize backupLogic=_backupLogic;
@property(retain, nonatomic) WCPCMigrationEntryViewController *pcmEntryVC; // @synthesize pcmEntryVC=_pcmEntryVC;
@property(retain, nonatomic) WCBackupEntryViewController *brEntryVC; // @synthesize brEntryVC=_brEntryVC;
@property(nonatomic) long long mediaFormatSupport; // @synthesize mediaFormatSupport=_mediaFormatSupport;
@property(nonatomic) _Bool supportFileFilter; // @synthesize supportFileFilter=_supportFileFilter;
@property(nonatomic) _Bool supportQuickBackup; // @synthesize supportQuickBackup=_supportQuickBackup;
@property(nonatomic) _Bool supportReconnect; // @synthesize supportReconnect=_supportReconnect;
@property(nonatomic) _Bool supportTimeSelect; // @synthesize supportTimeSelect=_supportTimeSelect;
@property(nonatomic) unsigned long long notifyCode; // @synthesize notifyCode=_notifyCode;
@property(nonatomic) unsigned long long inMemoryMigrationSize; // @synthesize inMemoryMigrationSize=_inMemoryMigrationSize;
@property(retain, nonatomic) NSString *selfWifiName; // @synthesize selfWifiName=_selfWifiName;
@property(retain, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
@property(retain, nonatomic) NSString *pcName; // @synthesize pcName=_pcName;
@property(retain, nonatomic) NSArray *sessionArray; // @synthesize sessionArray=_sessionArray;
@property(nonatomic) unsigned short server_port; // @synthesize server_port=_server_port;
@property(retain, nonatomic) NSString *server_ip; // @synthesize server_ip=_server_ip;
@property(retain, nonatomic) NSString *server_ok; // @synthesize server_ok=_server_ok;
@property(retain, nonatomic) NSString *server_hello; // @synthesize server_hello=_server_hello;
@property(retain, nonatomic) NSData *server_key; // @synthesize server_key=_server_key;
@property(retain, nonatomic) NSString *server_id; // @synthesize server_id=_server_id;
- (void)reportDataReconciliation:(id)arg1;
- (void)unireport26824:(id)arg1;
- (void)report26824:(id)arg1;
- (void)report26824Type1:(id)arg1;
- (void)report26824Type0:(id)arg1;
- (id)getConnectDebugInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)p_sendStatusNotify:(int)arg1 withFunction:(id)arg2;
- (void)p_sendStatusNotify:(int)arg1;
- (void)notifyToClose;
- (void)notifyMigrateToMobile;
- (void)notifyMigrateToPC;
- (void)notifyToContinue;
- (void)notifyToPause;
- (void)onManulLogOut;
- (void)onKickQuit;
- (void)onAuthOK;
- (void)showLocalNotification;
- (void)onBackupImportMessageCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBackupImportMessageFinish;
- (void)onBackupImportMessagePrepareFinish;
- (void)onBackupImportMessageError;
- (void)onBackupImportMessageStart;
- (void)onFirstPacketOK:(_Bool)arg1;
- (void)onBackupLogicAlert:(unsigned long long)arg1;
- (void)onBackupTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (id)getProgress;
- (void)onBackupLogicNotify:(unsigned long long)arg1;
- (void)onCancelEntryViewController;
- (void)onMinimizeEntryViewController;
- (void)processNotifyCode:(unsigned long long)arg1;
- (void)extensionProcessNotifyCode:(unsigned long long)arg1;
- (_Bool)isSameNetGateWay:(id)arg1;
- (_Bool)isSameAccount:(id)arg1;
- (void)onGetConnectInfo:(id)arg1;
- (void)onGetConnectInfoNotSameAccount;
- (id)getConnectURL:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (unsigned long long)getDataSize;
- (void)setDataSize:(unsigned long long)arg1;
- (unsigned long long)getMsgCount;
- (unsigned long long)getSessionCount;
- (id)getAllSessionArray;
- (_Bool)isBackupMgrWorking;
- (void)cleanBackupData;
- (void)p_setCanInterrutpion;
- (void)p_setShouldNotInterruption;
- (void)finishAndUpdateSession;
- (void)cancelImport;
- (void)stopImport;
- (void)startImport:(_Bool)arg1 importType:(unsigned long long)arg2;
- (void)startMigrationImport:(_Bool)arg1;
- (void)startBackupImport:(_Bool)arg1;
- (void)pauseLogic;
- (void)restartLogic;
- (void)cancelLogic;
- (void)confirmLogic;
- (void)terminateLogic;
- (void)stopLogic;
- (void)startLogic;
- (void)onViewAnimationDidHide;
- (void)onViewAnimationWillHide;
- (void)removeBanner;
- (void)reloadBanner;
- (void)showBackupEntryViewController;
- (void)showMigrationEntryViewController;
- (void)showEntryViewController;
- (void)showMigratePCSelection;
- (void)checkState;
- (_Bool)isHasDutyAndShowEntryViewController;
- (void)p_clearBackupInfo;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
@property(copy, nonatomic) NSString *sessionID;
@property(nonatomic) float migrationSizeProgress;
- (unsigned long long)backupMigrationFilterSize;
- (void)setBackupMigrationFilterSize:(unsigned long long)arg1;
@property(nonatomic) unsigned long long migrationSize;
@property(nonatomic) unsigned long long backupState;
- (_Bool)isPCMigrationState;
- (_Bool)isBackupRecoverState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

