//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat16C2CPredownloader
{
    MISSING_TYPE *schemes;
    MISSING_TYPE *queue;
}

- (void)applicationWillResignActive;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)onUserDidSeeImage:(id)arg1;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDownloadImageExpired:(id)arg1 isHD:(_Bool)arg2;
- (void)OnDownloadImageStop:(id)arg1 isHD:(_Bool)arg2;
- (void)OnDownloadImageFail:(id)arg1 isHD:(_Bool)arg2;
- (void)OnDownloadImageOk:(id)arg1 isHD:(_Bool)arg2;
- (void)onUserClickRequestFile:(id)arg1;
- (void)OnBeginDownloadVideo:(id)arg1 mode:(unsigned long long)arg2;
- (void)OnBeginDownloadImage:(id)arg1 HD:(_Bool)arg2 autoDownload:(_Bool)arg3 behavior:(long long)arg4;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;

@end

