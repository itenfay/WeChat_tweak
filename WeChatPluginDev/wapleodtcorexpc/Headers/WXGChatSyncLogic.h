//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnUploadTaskInfo, NSArray, NSDate, NSString, WXGChatSyncDataPacker;

@interface WXGChatSyncLogic : NSObject
{
    NSString *m_uploadingFileName;
    NSString *m_uploadingFilePath;
    _Bool m_startSync;
    long long m_sessionListCount;
    long long m_sessionInfoCount;
    long long m_msgCount;
    long long m_timeLimit;
    NSArray *m_msgIntervalArray;
    NSArray *m_msgLimitArray;
    NSString *m_getMoreIdentifier;
    unsigned long long m_getMoreMsgLimit;
    unsigned int m_dataSize;
    NSDate *m_startSyncDate;
    NSDate *m_startPack;
    NSString *m_pemPublicKey;
    CdnUploadTaskInfo *m_currentUploadInfo;
    _Bool m_bPartnerDeviceLogin;
    unsigned int m_deviceType;
    NSString *m_currentSyncType;
    NSString *_deviceContext;
    WXGChatSyncDataPacker *_dataPacker;
}

+ (id)unsignedcharToHexString:(char *)arg1 withSize:(unsigned int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WXGChatSyncDataPacker *dataPacker; // @synthesize dataPacker=_dataPacker;
@property(copy, nonatomic) NSString *deviceContext; // @synthesize deviceContext=_deviceContext;
- (void)reportAppMsgFailed;
- (void)reportCDNFailed;
- (void)reportSyncSuccess;
- (void)reportStartSync;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)sendAppMessage;
- (void)autoSendAppMessage;
- (void)OnCdnUpload:(id)arg1;
- (void)startUploadDataToCDNWithFilePath:(id)arg1;
- (void)onChatSyncDataPackFinishWithFilePath:(id)arg1 withMsgCount:(unsigned long long)arg2;
- (void)startGetMoreSynceWithExt:(id)arg1 withPemKey:(id)arg2;
- (void)startSleepSyncWithExt:(id)arg1 withPemKey:(id)arg2;
- (void)onLogoutWeb;
- (void)onLoginWeb;
- (void)trySendAppMessage;
- (void)startSyncWithType:(unsigned long long)arg1 withPemKey:(id)arg2;
- (void)stopSync;
- (void)p_markStopSync;
- (void)p_markStartSync;
- (long long)getTimeLimit;
- (long long)getSessionInfoCount;
- (long long)getSessionListCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

