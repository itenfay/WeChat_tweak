//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonDownloadMd5ListCgi, EmoticonDownloadProxy, NSString;
@protocol EmoticonRecoverLogicObjectDelegate;

@interface EmoticonRecoverLogicObject
{
    _Bool _m_isActive;
    _Bool _m_hasStartLogic;
    _Bool _isEmoticonMd5CheckFinished;
    _Bool _m_needUpdateTime;
    int _downloadedEmoticonCount;
    unsigned int _m_needNotifyCount;
    unsigned long long _m_type;
    EmoticonDownloadMd5ListCgi *_m_recoverCgi;
    EmoticonDownloadProxy *_m_downloadCgi;
    unsigned long long _maxOnceDownloadEmoticonCount;
    NSString *_logPrefix;
    id <EmoticonRecoverLogicObjectDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_needUpdateTime; // @synthesize m_needUpdateTime=_m_needUpdateTime;
@property(nonatomic) unsigned int m_needNotifyCount; // @synthesize m_needNotifyCount=_m_needNotifyCount;
@property(nonatomic) __weak id <EmoticonRecoverLogicObjectDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool isEmoticonMd5CheckFinished; // @synthesize isEmoticonMd5CheckFinished=_isEmoticonMd5CheckFinished;
@property(nonatomic) _Bool m_hasStartLogic; // @synthesize m_hasStartLogic=_m_hasStartLogic;
@property(nonatomic) _Bool m_isActive; // @synthesize m_isActive=_m_isActive;
@property(retain, nonatomic) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
@property(nonatomic) unsigned long long maxOnceDownloadEmoticonCount; // @synthesize maxOnceDownloadEmoticonCount=_maxOnceDownloadEmoticonCount;
@property(nonatomic) int downloadedEmoticonCount; // @synthesize downloadedEmoticonCount=_downloadedEmoticonCount;
@property(retain, nonatomic) EmoticonDownloadProxy *m_downloadCgi; // @synthesize m_downloadCgi=_m_downloadCgi;
@property(retain, nonatomic) EmoticonDownloadMd5ListCgi *m_recoverCgi; // @synthesize m_recoverCgi=_m_recoverCgi;
@property(nonatomic) unsigned long long m_type; // @synthesize m_type=_m_type;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (void)onEmoticonDownloadMd5ListFailed;
- (void)onEmoticonDownloadMd5ListOk:(id)arg1 reqBuff:(id)arg2 versionKey:(id)arg3;
- (void)continueDownloadFromDownloadFinished:(_Bool)arg1;
- (void)asyncAddEmoticonWithData:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)completeAndAddEmoticonWithMd5:(id)arg1 imageData:(id)arg2;
- (void)startDownloadWithMd5List:(id)arg1;
- (_Bool)clearLocalContentByMd5List:(id)arg1;
- (void)callFailedDelegate;
- (void)callOkDelegate;
- (void)downloadEmoticon;
- (_Bool)canStartCgiNow;
- (_Bool)isAllEmoticonRecoverd;
- (_Bool)isActive;
- (void)stopLogic;
- (void)syncAnotherPart;
- (void)tryStartLogicForSyncAnotherPart;
- (void)internalStartRecoverCgiWithMd5ListObj:(id)arg1;
- (void)startLogicWithCheckMd5Exist;
- (void)startLogicWithIncrementMd5List:(id)arg1;
- (void)startLogic;
- (_Bool)preCheckStartLogic;
- (void)initPartDownloadStatus;
- (id)initWithType:(unsigned long long)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

