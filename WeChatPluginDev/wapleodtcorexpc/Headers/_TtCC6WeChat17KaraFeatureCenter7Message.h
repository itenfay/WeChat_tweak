//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtCC6WeChat17KaraFeatureCenter7Message
{
    MISSING_TYPE *_messageThatTriggerEnteringForeground;
    MISSING_TYPE *_leaveTimesOfSessions;
    MISSING_TYPE *privateImageHistoryTable;
    MISSING_TYPE *privateVideoHistoryTable;
    MISSING_TYPE *privateFileHistoryTable;
    MISSING_TYPE *privateHDImageHistoryTable;
    MISSING_TYPE *groupImageHistoryTable;
    MISSING_TYPE *groupVideoHistoryTable;
    MISSING_TYPE *groupFileHistoryTable;
    MISSING_TYPE *groupHDImageHistoryTable;
}

- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnBeginDownloadVideo:(id)arg1 mode:(unsigned long long)arg2;
- (void)OnBeginDownloadImage:(id)arg1 HD:(_Bool)arg2 autoDownload:(_Bool)arg3 behavior:(long long)arg4;
- (void)userDidLeaveSession:(id)arg1;
- (void)userDidEnterSession:(id)arg1;
- (void)applicationDidEnterForegroundThroughMessageWithSvrID:(long long)arg1;
- (void)onUserClickRequestHDImage:(id)arg1;
- (void)onUserClickRequestFile:(id)arg1;
- (void)onUserClickImage:(id)arg1 byChangePage:(_Bool)arg2;
- (void)onUserClickVideo:(id)arg1 inFullScreenView:(_Bool)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;

@end

