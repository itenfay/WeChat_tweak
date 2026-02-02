//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableDictionary, NSObject, NSString, WXGBackupImportMessageHelper, WXGBackupRecoverHelper;
@protocol OS_dispatch_group;

@interface WXGBackupMigrateMobileLogic
{
    _Bool _bStopService;
    _Bool _bFirstTag;
    _Bool _bProcessFinish;
    WXGBackupRecoverHelper *_recoverHelper;
    WXGBackupImportMessageHelper *_importHelper;
    NSObject<OS_dispatch_group> *_writeGroup;
    NSData *_finishData;
    NSMutableDictionary *_filterSizeDic;
    unsigned long long _backFilterSizes;
    unsigned long long _currentSessionCount;
    unsigned long long _totalSessionCount;
    NSString *_lastSessionName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bProcessFinish; // @synthesize bProcessFinish=_bProcessFinish;
@property(copy, nonatomic) NSString *lastSessionName; // @synthesize lastSessionName=_lastSessionName;
@property(nonatomic) _Bool bFirstTag; // @synthesize bFirstTag=_bFirstTag;
@property(nonatomic) unsigned long long totalSessionCount; // @synthesize totalSessionCount=_totalSessionCount;
@property(nonatomic) unsigned long long currentSessionCount; // @synthesize currentSessionCount=_currentSessionCount;
@property(nonatomic) _Bool bStopService; // @synthesize bStopService=_bStopService;
@property(nonatomic) unsigned long long backFilterSizes; // @synthesize backFilterSizes=_backFilterSizes;
@property(retain, nonatomic) NSMutableDictionary *filterSizeDic; // @synthesize filterSizeDic=_filterSizeDic;
@property(retain, nonatomic) NSData *finishData; // @synthesize finishData=_finishData;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *writeGroup; // @synthesize writeGroup=_writeGroup;
@property(retain, nonatomic) WXGBackupImportMessageHelper *importHelper; // @synthesize importHelper=_importHelper;
@property(retain, nonatomic) WXGBackupRecoverHelper *recoverHelper; // @synthesize recoverHelper=_recoverHelper;
- (void)reportDisconnect:(unsigned long long)arg1;
- (void)onBackupImportMessagePrepareFinish;
- (void)onBackupImportMessageError;
- (void)onBackupImportMessageFinish;
- (void)onLastImportFinished;
- (_Bool)onPhoneDiskNotEnouge;
- (void)onFilterRequestEnd:(id)arg1 filterSize:(unsigned long long)arg2;
- (void)onRequestSessionProcessEndWithResponse:(id)arg1;
- (void)onDataTagProcessEnd:(id)arg1;
- (void)onData:(id)arg1 writeToFileFinish:(_Bool)arg2;
- (void)processFinishRequestData:(id)arg1;
- (void)processFilterRequestData:(id)arg1;
- (void)processBackupDataTagData:(id)arg1;
- (void)processDataPushData:(id)arg1;
- (void)processRequestSessionData:(id)arg1;
- (void)processStartRequestData:(id)arg1;
- (void)sendFilterResponse:(id)arg1;
- (void)sendDataTagResponseForDataTag:(id)arg1;
- (void)sendDataPushResponse:(id)arg1;
- (void)sendRequestSessionResponseWithDataInfoArray:(id)arg1;
- (void)sendStartResponseWithStatus:(int)arg1;
- (void)sendMigratePCConfirm;
- (_Bool)sendData:(id)arg1;
- (void)confirmLogic;
- (void)stopService;
- (void)startService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

