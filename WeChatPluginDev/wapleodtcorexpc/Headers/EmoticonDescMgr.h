//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonDescRecommandLogic, NSMutableDictionary, NSMutableSet, NSString;

@interface EmoticonDescMgr
{
    NSMutableSet *_m_requestPidSet;
    NSMutableDictionary *_m_emoticonDescCache;
    NSMutableDictionary *_m_emoticonPackageHasDesc;
    NSMutableDictionary *_m_emoticonPackageDescCount;
    EmoticonDescRecommandLogic *_descRecommandLogic;
    NSMutableSet *_requestingPids;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *requestingPids; // @synthesize requestingPids=_requestingPids;
@property(retain, nonatomic) EmoticonDescRecommandLogic *descRecommandLogic; // @synthesize descRecommandLogic=_descRecommandLogic;
@property(retain, nonatomic) NSMutableDictionary *m_emoticonPackageDescCount; // @synthesize m_emoticonPackageDescCount=_m_emoticonPackageDescCount;
@property(retain, nonatomic) NSMutableDictionary *m_emoticonPackageHasDesc; // @synthesize m_emoticonPackageHasDesc=_m_emoticonPackageHasDesc;
@property(retain, nonatomic) NSMutableDictionary *m_emoticonDescCache; // @synthesize m_emoticonDescCache=_m_emoticonDescCache;
@property(retain, nonatomic) NSMutableSet *m_requestPidSet; // @synthesize m_requestPidSet=_m_requestPidSet;
- (void)onEmoticonDescRecommandLogicFinishSearchWithKeyword:(id)arg1 result:(id)arg2;
- (id)getEmoticonPackageDescForPid:(id)arg1;
- (void)OnUpdateEmoticonPackageListFor:(unsigned long long)arg1 WithPid:(id)arg2;
- (void)onLanguageChange;
- (void)updateEmoticonDescCacheWithDescList:(id)arg1 pid:(id)arg2;
- (void)updateDescFromFile:(id)arg1 shouldUpdateFromServer:(_Bool)arg2;
- (id)updateEmoticonDescFromServer:(id)arg1 shouldGetFromServer:(_Bool)arg2;
- (id)getWordingFromDic:(id)arg1 withCode:(id)arg2;
- (void)updateDescToMd5CacheFromServerPackageDesc:(id)arg1;
- (void)handleRespForGetEmotionDesc:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)getEmoticonDescByPid:(id)arg1 LastRequestTime:(unsigned int)arg2;
- (_Bool)getEmoticonButtonDescByPid:(id)arg1;
- (id)dicFromSvrDescStr:(id)arg1;
- (id)getEmoticonMsgDescForCurlangWithMsgWrap:(id)arg1;
- (id)getEmoticonDescByPackageId:(id)arg1 Md5:(id)arg2 withLanguageCode:(id)arg3;
- (id)getEmoticonDescByPackageId:(id)arg1 Md5:(id)arg2 withLanguageCode:(id)arg3 needGetRemoteDesc:(_Bool)arg4;
- (id)getEmoticonCurLangDescByPackageId:(id)arg1 Md5:(id)arg2;
- (id)getEmoticonCurLangDescByPackageId:(id)arg1 Md5:(id)arg2 needGetRemoteDesc:(_Bool)arg3;
- (unsigned long long)getEmoticonDescCountByPid:(id)arg1;
- (_Bool)hasDescPid:(id)arg1;
- (_Bool)isInWordList:(id)arg1;
- (void)requestEmoticonWrapByDesc:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

