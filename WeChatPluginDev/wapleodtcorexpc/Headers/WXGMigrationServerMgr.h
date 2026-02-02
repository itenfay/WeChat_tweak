//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatMigrationCreateQRCode, NSArray, NSData, NSString, WXGMigrationMainViewController, WXGMigrationServerEntryViewController, WXGMigrationServerLogic;

@interface WXGMigrationServerMgr
{
    WXGMigrationServerEntryViewController *m_serverEntryViewController;
    WXGMigrationMainViewController *mgViewController;
    id m_kickOutLogicObj;
    SEL m_kickOutSel;
    _Bool m_isWorking;
    WXGMigrationServerLogic *m_serverLogic;
    ChatMigrationCreateQRCode *m_qrCodeHandler;
    unsigned short _server_port;
    unsigned int _cryptUin;
    NSString *_server_id;
    NSData *_server_key;
    NSString *_server_hello;
    NSString *_server_ok;
    NSString *_server_ip;
    NSString *_server_ticket;
    NSArray *_sessionArray;
    unsigned long long _totalMsgCount;
    unsigned long long _totalSessionSize;
    NSString *_pcName;
    NSString *_pcAccouttName;
    NSString *_wifiName;
    NSString *_selfWifiName;
    unsigned long long _inMemoryMigrationSize;
    unsigned long long _notifyCode;
    unsigned long long _entryOpenType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long entryOpenType; // @synthesize entryOpenType=_entryOpenType;
@property(nonatomic) unsigned long long notifyCode; // @synthesize notifyCode=_notifyCode;
@property(nonatomic) unsigned long long inMemoryMigrationSize; // @synthesize inMemoryMigrationSize=_inMemoryMigrationSize;
@property(retain, nonatomic) NSString *selfWifiName; // @synthesize selfWifiName=_selfWifiName;
@property(retain, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
@property(retain, nonatomic) NSString *pcAccouttName; // @synthesize pcAccouttName=_pcAccouttName;
@property(retain, nonatomic) NSString *pcName; // @synthesize pcName=_pcName;
@property(nonatomic) unsigned long long totalSessionSize; // @synthesize totalSessionSize=_totalSessionSize;
@property(nonatomic) unsigned long long totalMsgCount; // @synthesize totalMsgCount=_totalMsgCount;
@property(retain, nonatomic) NSArray *sessionArray; // @synthesize sessionArray=_sessionArray;
@property(nonatomic) unsigned short server_port; // @synthesize server_port=_server_port;
@property(nonatomic) unsigned int cryptUin; // @synthesize cryptUin=_cryptUin;
@property(retain, nonatomic) NSString *server_ticket; // @synthesize server_ticket=_server_ticket;
@property(retain, nonatomic) NSString *server_ip; // @synthesize server_ip=_server_ip;
@property(retain, nonatomic) NSString *server_ok; // @synthesize server_ok=_server_ok;
@property(retain, nonatomic) NSString *server_hello; // @synthesize server_hello=_server_hello;
@property(retain, nonatomic) NSData *server_key; // @synthesize server_key=_server_key;
@property(retain, nonatomic) NSString *server_id; // @synthesize server_id=_server_id;
- (void)onCancelEntryViewController;
- (void)onMinimizeEntryViewController;
- (void)autoLoginLogic:(id)arg1 needInterruptKickOut:(CDUnknownBlockType)arg2 withReplayKickOutSelector:(SEL)arg3;
- (void)onGetQRCodeOffline:(id)arg1;
- (void)onGetQRCode:(id)arg1;
- (void)p_getQRCodeImageOffline;
- (void)p_getQRCodeImageOnline;
- (void)getQRCodeImage;
- (void)resetGetQRCodeImage;
- (void)confirmNoSelectTimeMigrationOrQuickMigration;
- (void)clearServerAllTmpData;
- (_Bool)isServerWorking;
- (void)pauseLogic;
- (void)stopServerService;
- (void)startServerService;
- (void)onServerLogicTransferSpeed:(float)arg1 leftTime:(unsigned int)arg2 sizeProgress:(float)arg3;
- (void)onServerLogicCurrentProcessingSession:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)onServerLogicAlertCode:(unsigned long long)arg1;
- (void)onServerLogicNotifyCode:(unsigned long long)arg1;
- (void)onFinishServerEntryViewController;
- (void)onCancelServerEntryViewController;
- (void)onMinimizeServerEntryViewController;
- (void)innerShowMigrationViewController;
- (void)outerShowMigrationViewController;
- (void)showMigrationViewController;
- (void)notifyGetQRCodeFailed;
- (void)notifyWaitLoadingData;
- (void)notifyWaitToMigration;
- (void)notifyWaitToSelect;
- (_Bool)isLogout;
- (void)doLogoutAction;
- (void)registerKickOutEvent:(id)arg1 AndSelector:(SEL)arg2;
@property(nonatomic) float migrationSizeProgress;
@property(nonatomic) unsigned long long migrationSize;
- (id)getAllSessionArray;
- (void)resetServerState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

