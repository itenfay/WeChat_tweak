//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WCSiriMgr
{
    NSObject<OS_dispatch_queue> *m_updateContactQueue;
    _Bool _needRefreshSessionKey;
    _Bool _isRefreshingSessionKey;
    _Bool _isSirikitAvaiable;
    MemoryMappedKV *_mappedKV;
    NSMutableArray *_arrContactsToBeEncoded;
}

+ (id)getSiriDeviceId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrContactsToBeEncoded; // @synthesize arrContactsToBeEncoded=_arrContactsToBeEncoded;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(nonatomic) _Bool isSirikitAvaiable; // @synthesize isSirikitAvaiable=_isSirikitAvaiable;
@property(nonatomic) _Bool isRefreshingSessionKey; // @synthesize isRefreshingSessionKey=_isRefreshingSessionKey;
@property(nonatomic) _Bool needRefreshSessionKey; // @synthesize needRefreshSessionKey=_needRefreshSessionKey;
- (void)updateVocabulary:(id)arg1;
- (void)checkEncodeContacts:(_Bool)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onNewContact:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (id)vocabularyFromContactName:(id)arg1;
- (_Bool)IsEnChar:(unsigned short)arg1;
- (void)addVocabularyFor:(id)arg1 toVocabularys:(id)arg2;
- (id)convertContactToSiriIfNeed:(id)arg1;
- (_Bool)shouldHandleContact:(id)arg1;
- (void)portContactsDataToContainerFolderWithSession:(id)arg1;
- (void)updateApplicationContextIfCould;
- (void)checkAndRefreshSessionKeyIfNeed;
- (_Bool)isSessionKeyCached;
- (void)handleGetIosExtensionKeyResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getExtensionKeyForceRefresh;
- (void)onAuthOK;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (id)getQueue;
- (_Bool)isSiriKitAvailable;
- (void)onPreQuit;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

