//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSURLSession;
@protocol WAPackageDownloadLogicDelegate;

@interface WAPackageDownloadLogic : NSObject
{
    NSMutableDictionary *_dicDownloadStatus;
    NSMutableArray *_arrWaittingTaskQueue;
    NSMutableArray *_arrDownloadingTaskQueue;
    _Bool _bUseSerialMode;
    id <WAPackageDownloadLogicDelegate> m_delegate;
    unsigned long long _pkgType;
    NSURLSession *_session;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) unsigned long long pkgType; // @synthesize pkgType=_pkgType;
@property(nonatomic) _Bool bUseSerialMode; // @synthesize bUseSerialMode=_bUseSerialMode;
@property(nonatomic) __weak id <WAPackageDownloadLogicDelegate> m_delegate; // @synthesize m_delegate;
- (id)getTaskUrlList;
- (id)getDescriptionForDownloadProtocol:(unsigned long long)arg1;
- (id)getProtocolInfoFromCdnDownloadInfo:(id)arg1;
- (unsigned long long)getProtocolFromCdnDownloadInfo:(id)arg1;
- (void)onDownloadFail:(id)arg1 statusCode:(int)arg2 retCode:(int)arg3 transferInfo:(id)arg4 protocolInfo:(id)arg5 downloadType:(unsigned long long)arg6;
- (void)onDownloadSuccess:(id)arg1 protocolInfo:(id)arg2 sourceFilePath:(id)arg3 downloadType:(unsigned long long)arg4;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCronetDownloadProgress:(id)arg1;
- (void)onCronetDownloadResponse:(id)arg1 filePath:(id)arg2 protocolInfo:(id)arg3;
- (float)remainingTimeForDownload:(id)arg1 bytesTransferred:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)reportDownloadSpendTime:(double)arg1 isDownloadError:(_Bool)arg2 fileIdentifier:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)cleanTmpDirectory;
- (void)cancelDownloadTaskWithUrlStr:(id)arg1;
- (void)cancelAllDownloads;
- (void)raiseDownloadPriorityWithAppid:(id)arg1;
- (void)checkQueue;
- (void)addDownloadTaskWithParams:(id)arg1;
- (id)getDownloadDirectoryPath:(id)arg1;
- (_Bool)isDownloadingTaskWithUrlStr:(id)arg1;
- (id)getDownloadFileIdentifier:(id)arg1;
- (void)invalidate;
- (void)realStartDownloadWithTask:(id)arg1;
- (_Bool)dominCanUseSimpleDNS:(id)arg1;
- (unsigned int)getDownloadDNSTypeWithUrl:(id)arg1;
- (_Bool)shouldUseCronetDierctlyDownLoad;
- (_Bool)shouldUseCdnDownLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

