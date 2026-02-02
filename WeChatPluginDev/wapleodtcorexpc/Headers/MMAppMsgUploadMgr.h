//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAppMsgUploadDataBase, NSMutableDictionary, NSString;

@interface MMAppMsgUploadMgr
{
    _Bool _shouldStopClean;
    NSMutableDictionary *_msgWrapDict;
    MMAppMsgUploadDataBase *_database;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldStopClean; // @synthesize shouldStopClean=_shouldStopClean;
@property(retain, nonatomic) MMAppMsgUploadDataBase *database; // @synthesize database=_database;
@property(retain, nonatomic) NSMutableDictionary *msgWrapDict; // @synthesize msgWrapDict=_msgWrapDict;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onDeleteAllMsgs:(id)arg1;
- (void)OnQuitGroup:(id)arg1;
- (void)calcMd5ForMessage:(id)arg1;
- (_Bool)checkAppMsgUploadExceedTime:(id)arg1;
- (_Bool)checkAppMsgShowRevokeMenu:(id)arg1;
- (unsigned int)getAppMsgUploadUiPercent:(id)arg1;
- (void)appMsgUploadStop:(id)arg1;
- (void)appMsgUploadComplete:(id)arg1;
- (void)appMsgUploadPause:(id)arg1;
- (void)handleSendAppMsgResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)appMsgUploadStartInternal:(id)arg1;
- (_Bool)appMsgUploadStart:(id)arg1;
- (void)cleanData;
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

