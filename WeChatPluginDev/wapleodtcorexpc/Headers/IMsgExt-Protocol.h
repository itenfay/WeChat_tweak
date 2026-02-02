//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;

@protocol IMsgExt

@optional
- (void)onUserDidSeeImage:(CMessageWrap *)arg1;
- (void)onUserClickAudio:(CMessageWrap *)arg1;
- (void)onUserClickRequestHDImage:(CMessageWrap *)arg1;
- (void)onUserClickWebView:(CMessageWrap *)arg1;
- (void)onUserClickRequestFile:(CMessageWrap *)arg1;
- (void)onUserClickFile:(CMessageWrap *)arg1;
- (void)onUserClickVideo:(CMessageWrap *)arg1 inFullScreenView:(_Bool)arg2;
- (void)onUserClickImage:(CMessageWrap *)arg1 byChangePage:(_Bool)arg2;
- (void)onMsgDBInitFinish;
- (void)onRevChatSyncRequest:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)onChatNewMsgSent:(CMessageWrap *)arg1;
- (void)OnSendSight:(NSString *)arg1;
- (void)OnBeginDownloadAppData:(CMessageWrap *)arg1;
- (void)OnBeginDownloadVideo:(CMessageWrap *)arg1 mode:(unsigned long long)arg2;
- (void)OnBeginDownloadImage:(CMessageWrap *)arg1 HD:(_Bool)arg2 autoDownload:(_Bool)arg3 behavior:(long long)arg4;
- (void)OnMsgDownloadAppAttachCancel:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadAppAttachCommonFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadAppAttachSuccess:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadVideoCancel:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadVideoCommonFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadVideoSuccess:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnUpdateVideoStatus:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnGetNewXmlMsg:(NSString *)arg1 Type:(NSString *)arg2 MsgWrap:(CMessageWrap *)arg3 IsPull:(_Bool)arg4;
- (void)OnGetNewXmlMsg:(NSString *)arg1 Type:(NSString *)arg2 MsgWrap:(CMessageWrap *)arg3;
- (void)OnMsgDownloadThumbFail:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgDownloadThumbOK:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnMsgNotAddDBSession:(NSString *)arg1 MsgList:(NSArray *)arg2;
- (void)OnShowPush:(CMessageWrap *)arg1 isAlwaysShow:(_Bool)arg2;
- (void)OnAddMsgForSpecialSession:(NSString *)arg1 MsgList:(NSArray *)arg2;
- (void)OnMsgNotAddDBNotify:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnAddMsgListForSession:(NSDictionary *)arg1 NotifyUsrName:(NSSet *)arg2;
- (void)OnUnReadCountChange:(NSString *)arg1;
- (void)OnDelMsg:(NSString *)arg1 DelAll:(_Bool)arg2;
- (void)OnMsgSendFail:(CMessageWrap *)arg1;
- (void)OnMsgSendSuccess:(CMessageWrap *)arg1;
- (void)onGetSvrIdWithUploadMsg:(CMessageWrap *)arg1 SvrId:(unsigned long long)arg2;
- (void)OnRevokeMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(NSString *)arg4 EducationMsg:(NSString *)arg5;
- (void)OnWillRevokeMsg:(CMessageWrap *)arg1 revokeContext:(NSMutableDictionary *)arg2;
- (void)OnDelMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnDelMsg:(NSString *)arg1;
- (void)OnModMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnAddMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnPreAddMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)OnChangeMsg:(NSString *)arg1 OpCode:(unsigned int)arg2;
@end

