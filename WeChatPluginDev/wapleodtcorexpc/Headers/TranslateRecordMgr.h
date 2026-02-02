//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface TranslateRecordMgr
{
    NSMutableDictionary *_dicSessionTransInfos;
    NSMutableDictionary *_dicSequenceWaitTask;
    NSMutableDictionary *_dicSequenceRunningTask;
    unsigned int _sequence;
    _Bool _isWorking;
}

- (void).cxx_destruct;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)responseForTransTextResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)asyncNotifyTranslateRecordItemDataMsgChanged:(id)arg1;
- (void)notifyTranslateRecordItemDataMsgChanged:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (void)resetTranslatingStatus:(id)arg1;
- (void)saveSessionTransInfos:(id)arg1;
- (void)loadSessionTransInfos:(id)arg1;
- (id)pathForSessionTransInfos:(id)arg1;
- (_Bool)taskInQueue:(id)arg1;
- (_Bool)showTranslatedTextNow:(id)arg1;
- (id)getTranslateInfo:(id)arg1;
- (void)tryTranslateRecordItems;
- (void)reportTranslationError:(id)arg1;
- (void)retranslateRecordItem:(id)arg1;
- (void)translateRecordItem:(id)arg1;
- (void)stopAllScrollUp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

