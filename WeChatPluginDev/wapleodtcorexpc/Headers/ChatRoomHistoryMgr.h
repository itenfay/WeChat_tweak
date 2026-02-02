//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, ChatRoomHistoryDB, NSMutableArray, NSRecursiveLock, NSString;

@interface ChatRoomHistoryMgr
{
    NSRecursiveLock *_lock;
    CMessageWrap *_currMsgWrap;
    ChatRoomHistoryDB *_historyDB;
    NSMutableArray *_arrProcessingMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrProcessingMsg; // @synthesize arrProcessingMsg=_arrProcessingMsg;
@property(retain, nonatomic) ChatRoomHistoryDB *historyDB; // @synthesize historyDB=_historyDB;
@property(retain, nonatomic) CMessageWrap *currMsgWrap; // @synthesize currMsgWrap=_currMsgWrap;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onDownloadFail;
- (void)parseHistoryMsgList:(id)arg1 toArrMsg:(id)arg2 toArrHistoryMsg:(id)arg3 historyInfo:(id)arg4;
- (void)onDownloadSuccessWithFilePath:(id)arg1;
- (void)downloadAddMsgData;
- (void)checkQueue;
- (_Bool)tryProcessInviteMsg:(id)arg1;
- (unsigned int)getRealMsgCreateTime:(id)arg1;
- (void)revokeAllMsgWithHistoryID:(unsigned long long)arg1 chatName:(id)arg2;
- (_Bool)canAddTipsNodeWithMsg:(id)arg1;
- (_Bool)isHistoryMsgIsProcessing:(id)arg1;
- (_Bool)isHistoryHaveProcessTag:(id)arg1;
- (void)makeProcessTagForHistory:(id)arg1 chatName:(id)arg2;
- (unsigned long long)getHistoryIDWithMsgWrap:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

