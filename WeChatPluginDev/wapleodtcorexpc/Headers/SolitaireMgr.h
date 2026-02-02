//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet, NSObject, NSString, SolitaireAnalysiser;
@protocol OS_dispatch_queue;

@interface SolitaireMgr
{
    NSMutableDictionary *_dicSessionHandlers;
    NSMutableDictionary *_dicFoldInfo;
    NSMutableSet *_unFoldSet;
    SolitaireAnalysiser *_analysiser;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(retain, nonatomic) SolitaireAnalysiser *analysiser; // @synthesize analysiser=_analysiser;
@property(retain, nonatomic) NSMutableSet *unFoldSet; // @synthesize unFoldSet=_unFoldSet;
@property(retain, nonatomic) NSMutableDictionary *dicFoldInfo; // @synthesize dicFoldInfo=_dicFoldInfo;
@property(retain, nonatomic) NSMutableDictionary *dicSessionHandlers; // @synthesize dicSessionHandlers=_dicSessionHandlers;
- (void)updateSolitaireSvrIdWithMessage:(id)arg1;
- (void)OnSendMessageSuccess:(id)arg1;
- (void)onSendAppMsgSucc:(id)arg1;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (_Bool)onAnalysisSolitaireInfoObj:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)cleanAllUnFold;
- (void)setUnFoldWithMsg:(id)arg1;
- (id)getFoldInfoWithMsg:(id)arg1;
- (id)getXmlInfoWithSolitaireObj:(id)arg1;
- (id)getNewestSolitaireObj:(id)arg1;
- (void)reportWhenJoinSolitaire:(id)arg1;
- (id)getSolitaireWithMessageWrap:(id)arg1;
- (void)analysisSolitaireWithContent:(id)arg1 ChatName:(id)arg2 Block:(CDUnknownBlockType)arg3;
- (_Bool)isSolitaireWithMessage:(id)arg1;
- (id)getSolitaireListWithChatName:(id)arg1;
- (id)getSolitaireSessionHandlerWithUserName:(id)arg1;
- (void)insertNeedSolitaireAnalysisMsgRecordWithChatName:(id)arg1 LocalId:(unsigned int)arg2;
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

