//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, CdnUploadTaskInfo, ChatRoomHistoryShareStat, MMTimer, NSArray, NSString, RecordUploadCDNMgr;

@interface ChatRoomHistoryUploadLogic
{
    RecordUploadCDNMgr *_recordUploadCDNMgr;
    CMessageWrap *_uploadingRecordMsg;
    NSString *_chatroomId;
    MMTimer *_uploadTimer;
    NSArray *_arrSelectedMsgs;
    NSString *_uploadingTaskId;
    CdnUploadTaskInfo *_uploadInfo;
    ChatRoomHistoryShareStat *_oRoomHistoryStat;
    NSString *_lastUploadErrMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastUploadErrMsg; // @synthesize lastUploadErrMsg=_lastUploadErrMsg;
@property(retain, nonatomic) ChatRoomHistoryShareStat *oRoomHistoryStat; // @synthesize oRoomHistoryStat=_oRoomHistoryStat;
@property(retain, nonatomic) CdnUploadTaskInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(retain, nonatomic) NSString *uploadingTaskId; // @synthesize uploadingTaskId=_uploadingTaskId;
- (void)OnUploadRecordForHistory:(id)arg1 uploadInfo:(id)arg2 errMsg:(id)arg3;
- (void)OnUploadProgressChanged:(id)arg1 total:(unsigned long long)arg2 remain:(unsigned long long)arg3;
- (void)invalidate;
- (_Bool)uploadHistory:(id)arg1 arrMsg:(id)arg2 chatroom:(id)arg3;
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

