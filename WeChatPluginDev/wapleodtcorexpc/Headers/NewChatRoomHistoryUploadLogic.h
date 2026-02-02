//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CdnUploadTaskInfo, ChatRoomHistoryShareStat, HistoryMsgUploadMgr, HistoryMsgUploadTask, NSString;

@interface NewChatRoomHistoryUploadLogic
{
    _Bool _isUploadFail;
    NSString *_uploadingTaskID;
    CdnUploadTaskInfo *_uploadInfo;
    ChatRoomHistoryShareStat *_oRoomHistoryStat;
    NSString *_lastUploadErrMsg;
    HistoryMsgUploadTask *_task;
    HistoryMsgUploadMgr *_uploadMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HistoryMsgUploadMgr *uploadMgr; // @synthesize uploadMgr=_uploadMgr;
@property(retain, nonatomic) HistoryMsgUploadTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSString *lastUploadErrMsg; // @synthesize lastUploadErrMsg=_lastUploadErrMsg;
@property(nonatomic) _Bool isUploadFail; // @synthesize isUploadFail=_isUploadFail;
@property(retain, nonatomic) ChatRoomHistoryShareStat *oRoomHistoryStat; // @synthesize oRoomHistoryStat=_oRoomHistoryStat;
@property(retain, nonatomic) CdnUploadTaskInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(retain, nonatomic) NSString *uploadingTaskID; // @synthesize uploadingTaskID=_uploadingTaskID;
- (void)onUploadDataFail:(id)arg1;
- (void)onUploadDataFinish:(id)arg1 taskInfo:(id)arg2;
- (void)stopUploadHistory;
- (void)invalidate;
- (_Bool)uploadHistory:(id)arg1 arrMsg:(id)arg2 chatroom:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

