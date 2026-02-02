//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BizAttrSyncCtrl, NSMutableDictionary, NSObject, NSString, WCPayGetCollAssistMenuCgi;
@protocol OS_dispatch_queue;

@interface BrandAttrMgr
{
    NSMutableDictionary *_syncBufList;
    BizAttrSyncCtrl *_syncCtrl;
    WCPayGetCollAssistMenuCgi *_getCollAssistMenuCgi;
    NSObject<OS_dispatch_queue> *_workerThread;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerThread; // @synthesize workerThread=_workerThread;
@property(retain, nonatomic) WCPayGetCollAssistMenuCgi *getCollAssistMenuCgi; // @synthesize getCollAssistMenuCgi=_getCollAssistMenuCgi;
- (_Bool)isLanguageChanged;
- (_Bool)trySetCurrentLanguageAsLastLanguage;
- (void)onAuthOK;
- (void)onGetCollAssistMenuCgiResponse:(id)arg1;
- (void)updateCollAssistMenuFromSvr;
- (void)loadCtrlInfo;
- (void)saveCtrlInfo;
- (void)tryLoadSyncCtrl;
- (void)loadBufCache;
- (void)asyncQueue_saveBufCache;
- (void)tryLoadSyncBufList;
- (void)deleteSyncBufferWithBrandUserNameList:(id)arg1;
- (void)deleteSyncBuf:(id)arg1;
- (void)updateBrandContact:(id)arg1 withSyncBuf:(id)arg2;
- (void)onNewSyncBatchModContacts:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (unsigned long long)loadRequestIntervalFromDynamicConfig;
- (void)onMMDynamicConfigUpdated;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handleSetProfileSettingResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleModBizUseUserInfoResponse:(id)arg1;
- (void)requestModifyProfileSettingWithBizName:(id)arg1 finderUserName:(id)arg2 setting:(id)arg3;
- (void)requestModifiyUseUserInfoWithSceneType:(unsigned int)arg1 appid:(id)arg2 JSAPIName:(id)arg3 scopeName:(id)arg4 state:(unsigned int)arg5;
- (void)onFetchBizProfile:(id)arg1;
- (_Bool)_fetchBiz:(id)arg1 bizSessionID:(unsigned int)arg2 scene:(unsigned int)arg3 action:(int)arg4 offset:(id)arg5 pageSize:(unsigned int)arg6 userInfo:(id)arg7 searchClickId:(id)arg8 pageMode:(unsigned int)arg9 bizFromScene:(int)arg10;
- (_Bool)fetchProfileNextPkg:(id)arg1 bizSessionID:(unsigned int)arg2 scene:(unsigned int)arg3 action:(int)arg4 offset:(id)arg5 userInfo:(id)arg6 searchClickId:(id)arg7 pageMode:(unsigned int)arg8 bizFromScene:(int)arg9;
- (_Bool)fetchProfileFirstPkg:(id)arg1 bizSessionID:(unsigned int)arg2 scene:(unsigned int)arg3 userInfo:(id)arg4 searchClickId:(id)arg5 pageMode:(unsigned int)arg6 bizFromScene:(int)arg7;
- (void)onGetContactByNewAttrCGI:(id)arg1;
- (_Bool)getBrandInfoByNewAttrCGI:(id)arg1;
- (_Bool)shouldUseNewAttrCGIToUpdate:(id)arg1;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

