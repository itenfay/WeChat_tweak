//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnComVideoProcessInfo, CdnDownloadTaskInfo, CdnInchoateUploadInfo, CdnProgressInfo, CdnUploadTaskInfo, MMContext, NSString;

@protocol CallbackProtocol <NSObject>
- (void)OnRequestGetCdnDistance:(unsigned int)arg1 province:(unsigned int)arg2 city:(unsigned int)arg3;
- (void)OnRequestGetCdnDns:(int)arg1;
- (void)OnPreloadCompleted:(CdnProgressInfo *)arg1;
- (void)onDownloadToEnd:(CdnComVideoProcessInfo *)arg1;
- (void)OnMoovNotFound:(CdnComVideoProcessInfo *)arg1;
- (void)OnMoovReady:(CdnComVideoProcessInfo *)arg1;
- (void)OnM3u8Ready:(CdnComVideoProcessInfo *)arg1;
- (void)OnDownloadPartialVideoData:(CdnComVideoProcessInfo *)arg1;
- (void)OnCallDownloadNotifyPeerUploadFinish:(NSString *)arg1 uploadFinish:(_Bool)arg2 fileSize:(unsigned long long)arg3;
- (void)OnDownloadEnd:(CdnDownloadTaskInfo *)arg1;
- (void)OnDownloadProgress:(CdnProgressInfo *)arg1;
- (void)OnUploadGetCdnFileID:(CdnInchoateUploadInfo *)arg1;
- (void)OnUploadEnd:(CdnUploadTaskInfo *)arg1;
- (void)OnUploadProgress:(CdnProgressInfo *)arg1;
- (MMContext *)context;
@end

