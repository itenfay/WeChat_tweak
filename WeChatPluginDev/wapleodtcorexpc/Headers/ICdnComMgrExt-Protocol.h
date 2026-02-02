//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CDNDnsInfo, CdnComVideoProcessInfo, CdnDownloadTaskInfo, CdnInchoateUploadInfo, CdnProgressInfo, CdnUploadTaskInfo, NSString;

@protocol ICdnComMgrExt

@optional
- (void)OnCdnVideoPreloadCompleted:(CdnProgressInfo *)arg1;
- (void)OnCdnVideoDownloadToEnd:(CdnComVideoProcessInfo *)arg1;
- (void)OnCdnVideoMoovReady:(CdnComVideoProcessInfo *)arg1;
- (void)OnCdnM3u8Ready:(CdnComVideoProcessInfo *)arg1;
- (void)OnCdnDownloadPartialData:(CdnComVideoProcessInfo *)arg1;
- (void)OnCdnInit;
- (void)OnCdnDownloadNotifyPeerUploadFinish:(NSString *)arg1 uploadFinish:(_Bool)arg2 fileSize:(unsigned long long)arg3;
- (void)OnCdnDownload:(CdnDownloadTaskInfo *)arg1;
- (void)OnUploadGetCdnFileID:(CdnInchoateUploadInfo *)arg1;
- (void)OnCdnUpload:(CdnUploadTaskInfo *)arg1;
- (void)OnCdnDownloadProgress:(CdnProgressInfo *)arg1;
- (void)OnCdnUploadProgress:(CdnProgressInfo *)arg1;
- (void)OnUpdatedCdnDnsInfo:(CDNDnsInfo *)arg1 snsCdnInfo:(CDNDnsInfo *)arg2 appCdnInfo:(CDNDnsInfo *)arg3;
- (void)OnSetCdnDnsInfo;
@end

