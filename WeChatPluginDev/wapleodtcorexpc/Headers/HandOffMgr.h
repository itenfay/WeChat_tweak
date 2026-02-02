//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HandOffMsgFileUploadMgr, HandOffRecordFileUploadMgr, MMHandOffItem, NSMutableArray, NSMutableDictionary, NSString, OrderedDictionary;

@interface HandOffMgr
{
    _Bool _isBackDeviceLogin;
    _Bool _manuallyForceSendAllList;
    OrderedDictionary *_curHandOffItemLists;
    NSMutableDictionary *_floatWindowItemDict;
    NSMutableArray *_cgiArray;
    NSMutableArray *_handOffListXMLArray;
    HandOffMsgFileUploadMgr *_handoffUploadMgr;
    HandOffRecordFileUploadMgr *_recordFileUploadMgr;
    NSMutableArray *_receiveCommandQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *receiveCommandQueue; // @synthesize receiveCommandQueue=_receiveCommandQueue;
@property(nonatomic) _Bool manuallyForceSendAllList; // @synthesize manuallyForceSendAllList=_manuallyForceSendAllList;
@property(nonatomic) _Bool isBackDeviceLogin; // @synthesize isBackDeviceLogin=_isBackDeviceLogin;
@property(retain, nonatomic) HandOffRecordFileUploadMgr *recordFileUploadMgr; // @synthesize recordFileUploadMgr=_recordFileUploadMgr;
@property(retain, nonatomic) HandOffMsgFileUploadMgr *handoffUploadMgr; // @synthesize handoffUploadMgr=_handoffUploadMgr;
@property(retain, nonatomic) NSMutableArray *handOffListXMLArray; // @synthesize handOffListXMLArray=_handOffListXMLArray;
@property(retain, nonatomic) NSMutableArray *cgiArray; // @synthesize cgiArray=_cgiArray;
@property(retain, nonatomic) NSMutableDictionary *floatWindowItemDict; // @synthesize floatWindowItemDict=_floatWindowItemDict;
@property(retain, nonatomic) OrderedDictionary *curHandOffItemLists; // @synthesize curHandOffItemLists=_curHandOffItemLists;
@property(nonatomic) unsigned int sendSeqNum;
- (void)__removeMinimizedHandoffItemWithBizName:(id)arg1 bizTaskKey:(id)arg2;
- (void)__setMinimizedHandoffItemWithBizName:(id)arg1 handOffItem:(id)arg2;
- (id)__minimizedHandoffItemWithBizName:(id)arg1 bizTaskKey:(id)arg2;
@property(readonly, nonatomic) MMHandOffItem *curHandOffItem;
- (id)getFileHandoffItem:(id)arg1;
- (void)onLogoutWeb;
- (void)onLoginWeb;
- (void)sendUploadProgressForFileItem:(id)arg1;
- (void)renewCDNInfoForFileItemFailed:(id)arg1;
- (void)renewCDNInfoForFileItemSucceed:(id)arg1;
- (void)stopUploadAttach:(id)arg1;
- (void)uploadAttach:(id)arg1;
- (void)handleMiniProgramMsgWith:(id)arg1 opCode:(long long)arg2;
- (void)handleFilePageMsgWith:(id)arg1 opCode:(long long)arg2;
- (void)handleWebPageUrlHandOffMsgWith:(id)arg1 opCode:(long long)arg2;
- (void)batchHandleCommand;
- (void)pushToHandOffHandleQueue:(id)arg1;
- (_Bool)isInfiniteFloatWindowEnabled;
- (_Bool)forceSendAllList;
- (_Bool)handOffEnabled;
- (void)loadFloatWindowDataByMinimizeTasks;
- (id)generateHandOffListXMLBy:(id)arg1 WithOpCode:(long long)arg2;
- (void)checkCgiQueue;
- (void)sendCGIToBackDeviceWith:(id)arg1;
- (void)sendHandOffItemToBackDeviceWith:(id)arg1 WithOpCode:(long long)arg2;
- (void)modCurrentItem:(id)arg1;
- (void)handoff:(id)arg1 withOp:(long long)arg2;
- (void)recoverCurrentHandoff;
- (void)clearCurrentHandoff;
- (void)safeRemoveHandoffItemFromList:(id)arg1;
- (void)safeAddHandoffItemToLast:(id)arg1;
- (_Bool)canSendOpenCommandForFinderLive;
- (_Bool)canSendOpenCommandForFinder;
- (_Bool)canSendOpenCommandForOnlineInfo:(id)arg1;
- (_Bool)canSendOpenCommand;
- (void)sendOpenCommand:(id)arg1;
- (void)receiveMessage:(id)arg1;
- (void)sendAllList;
- (void)handleFloatWindow:(id)arg1 withOpCode:(long long)arg2;
- (void)removeHandOffItem:(id)arg1;
- (void)removeCurrentHandOffItem;
- (void)modCurrentMiniProgramHandoffItem:(CDUnknownBlockType)arg1;
- (void)modCurrentWebViewHandoffItem:(CDUnknownBlockType)arg1;
- (void)setCurrentHandOffItem:(id)arg1;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
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

