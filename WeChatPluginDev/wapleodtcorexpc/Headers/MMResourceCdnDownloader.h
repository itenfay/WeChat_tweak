//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMResourceCdnDownloaderNotifier, NSArray, NSString;
@protocol MMResourceDownloadDelegate;

@interface MMResourceCdnDownloader : NSObject
{
    MMResourceCdnDownloaderNotifier *_notifier;
    _Bool _waitForCDNInit;
    id <MMResourceDownloadDelegate> downloadDelegate;
    NSString *downloadIdentifier;
    NSString *_resUrl;
    NSArray *_arrDnsIp;
}

+ (unsigned int)genIncreaseSequence;
- (void).cxx_destruct;
@property(nonatomic) _Bool waitForCDNInit; // @synthesize waitForCDNInit=_waitForCDNInit;
@property(retain, nonatomic) NSArray *arrDnsIp; // @synthesize arrDnsIp=_arrDnsIp;
@property(retain, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
@property(retain, nonatomic) NSString *downloadIdentifier; // @synthesize downloadIdentifier;
@property(nonatomic) __weak id <MMResourceDownloadDelegate> downloadDelegate; // @synthesize downloadDelegate;
- (void)OnCdnInit;
- (void)onCdnDownloadFinish:(id)arg1;
- (void)reportCdnErrorWithRet:(int)arg1;
- (id)getSaveFilePath;
- (id)getSaveFileDir;
- (void)createSaveFileDirIfNotExist;
- (void)doNewDns;
- (void)onEndDownloading:(long long)arg1 data:(id)arg2 cdnResultCode:(long long)arg3;
- (void)onEndDownloading:(long long)arg1 data:(id)arg2;
- (void)reportWithKey:(unsigned int)arg1;
- (void)mainThread_cancelDownload;
- (void)mainThread_startDownload;
- (void)clearData;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

