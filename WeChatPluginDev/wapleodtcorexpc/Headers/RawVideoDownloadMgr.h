//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface RawVideoDownloadMgr
{
}

- (void)onPlayerDownloadStop:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onComplete:(id)arg1 msgWrap:(id)arg2;
- (void)onProgressUpdate:(id)arg1 finishLen:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (id)generateDownloadArgsWrap:(id)arg1;
- (void)stopDownloadRawDataWithChatName:(id)arg1;
- (void)onDownloadStopWithWithMsg:(id)arg1 taskInfo:(id)arg2;
- (void)stopDownloadRawDataWithMsg:(id)arg1;
- (void)changeMsgWrap:(id)arg1 toDownloadStaus:(unsigned int)arg2;
- (_Bool)startDownloadRawDataWithMsg:(id)arg1;
- (_Bool)isRawDataDownloading:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

