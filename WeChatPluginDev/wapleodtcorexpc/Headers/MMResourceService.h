//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMResInfoMgr, MMResourceDownloadMgr, NSArray, NSString;

@interface MMResourceService
{
    NSString *KEY_UPDATE_RES_KEY;
    NSString *ACCESS_RES_GROUP;
    unsigned int _lastRstCheckResCgiFailTime;
    unsigned int _lastDownloadFailTime;
    NSArray *_packageResourceTypeArray;
    MMResInfoMgr *_resInfoMgr;
    MMResourceDownloadMgr *_resDownloadMgr;
}

+ (void)decompressData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMResourceDownloadMgr *resDownloadMgr; // @synthesize resDownloadMgr=_resDownloadMgr;
@property(retain, nonatomic) MMResInfoMgr *resInfoMgr; // @synthesize resInfoMgr=_resInfoMgr;
@property(retain, nonatomic) NSArray *packageResourceTypeArray; // @synthesize packageResourceTypeArray=_packageResourceTypeArray;
- (void)checkToRetryFailTask;
- (unsigned int)getFailRetryInterval;
- (void)markDownloadResourceFail;
- (void)markRstCheckCgiFail;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleCgiReport:(id)arg1;
- (void)ForceUpdateErrorHandler:(id)arg1 ErrorType:(long long)arg2;
- (void)ForceUpdateErrorHandler:(id)arg1;
- (_Bool)isForceUpdateMessageReturn:(id)arg1;
- (id)getOriginalMd5:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (id)getResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (id)getResInfo:(unsigned int)arg1;
- (_Bool)insertNewResInfo:(id)arg1;
- (void)onDownloadTaskEnd:(long long)arg1 downloadData:(id)arg2 task:(id)arg3;
- (void)onDownloadTaskStart:(id)arg1;
- (void)handleDownloadTask:(id)arg1 downloadData:(id)arg2;
- (void)OnResUpdateFinishOnMainThread:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (_Bool)hasRegistedResourceType:(unsigned int)arg1;
- (id)parseCacheNode:(struct XmlReaderNode_t *)arg1;
- (id)parseDecryptNode:(struct XmlReaderNode_t *)arg1;
- (id)parseDeleteNode:(struct XmlReaderNode_t *)arg1;
- (const char *)readChildText:(const char *)arg1 inNode:(struct XmlReaderNode_t *)arg2;
- (void)processResDeleteRequest:(id)arg1 Scene:(int)arg2;
- (void)processResDecryptRequest:(id)arg1 Scene:(int)arg2;
- (_Bool)isNeedToDownloadNonWebRes:(id)arg1;
- (void)createDownloadTask:(id)arg1;
- (void)processResCacheRequest:(id)arg1 Scene:(int)arg2;
- (void)parseNewXml:(id)arg1;
- (unsigned int)curNetType;
- (void)clearExpiredResource:(unsigned int)arg1;
- (id)convertResTypeLogStringFromReqList:(id)arg1;
- (void)reloadDownloadTask;
- (void)forceUpdateRes:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 ForceWithoutLogin:(_Bool)arg3;
- (void)forceUpdateRes:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (void)checkMultiResUpdate:(id)arg1;
- (void)checkResUpdate:(unsigned int)arg1;
- (void)checkAllTestResUpdate:(id)arg1;
- (_Bool)checkAllResUpdate:(id)arg1;
- (void)delayCheckResUpdate:(id)arg1;
- (id)pbCGIWrapForEncryptCheckResUpdataWithArrResID:(id)arg1 scene:(unsigned int)arg2 context:(id)arg3;
- (_Bool)getCheckResUpdateRequest:(id)arg1 scene:(int)arg2 context:(id)arg3;
- (void)removeResource:(unsigned int)arg1 subtype:(unsigned int)arg2;
- (void)didConsumeResource:(unsigned int)arg1 subtype:(unsigned int)arg2;
- (id)getResData:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 ErrorCode:(long long *)arg3;
- (id)getResPath:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 getVersion:(unsigned int *)arg3 verifyChecksum:(_Bool)arg4;
- (id)getResPath:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 getVersion:(unsigned int *)arg3;
- (id)getResPath:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (void)clearABTestData:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (void)dealloc;
- (void)configDelayCheck;
- (void)checkAndReloadDownloadTask;
- (void)deleteAESKeyInKeyChain:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithKeyVersion:(unsigned int)arg3 WithEID:(unsigned int)arg4;
- (void)saveAESKeyInKeyChain:(id)arg1 WithResType:(unsigned int)arg2 WithSubtype:(unsigned int)arg3 WithKeyVersion:(unsigned int)arg4 WithEID:(unsigned int)arg5;
- (id)getAESKeyInKeyChain:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithKeyVersion:(unsigned int)arg3 WithEID:(unsigned int)arg4;
- (void)reOpenDB;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)isRequestInNonAuth;
- (id)init;
- (void)unusedSourceCheck;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

