//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CAppBrandInfo;

@interface WAConfigContactAttribute : NSObject
{
    CAppBrandInfo *_appBrandInfo;
}

- (void).cxx_destruct;
- (id)tcpDomainList;
- (id)udpDomainList;
- (id)downloadFileDomainList;
- (id)uploadFileDomainList;
- (id)webSocketDomainList;
- (id)requestDomainList;
- (unsigned int)videoTaskTimeout;
- (_Bool)TLSSkipHostnameCheck;
- (_Bool)webSocketSkipPortCheck;
- (unsigned int)lifeSpanAfterSuspend;
- (unsigned int)lifeSpanBeforeSuspend;
- (unsigned int)backgroundNetworkInterruptedTimeout;
- (unsigned int)maxWorkerConcurrent;
- (unsigned int)webSocketMaxConcurrentCount;
- (unsigned int)downloadFileMaxConcurrentCount;
- (unsigned int)uploadFileMaxConcurrentCount;
- (unsigned int)requestMaxConcurrentCount;
- (unsigned int)backgroundMaxRunningTimeInterval;
- (unsigned int)actualWebViewDepth;
- (unsigned int)webViewMaxDepth;
- (unsigned long long)disasterTolerantBytesWithMB:(unsigned long long)arg1 minSizeMB:(unsigned long long)arg2;
- (unsigned long long)fileStorageMaxWxPrivateSizeBytes;
- (unsigned long long)fileStorageMinTempAvailableSpaceBytes;
- (unsigned long long)fileStorageMaxTempSizeBytes;
- (unsigned long long)fileStorageMaxOpendataSizeBytes;
- (unsigned long long)fileStorageMaxSizeBytes;
- (unsigned long long)localStorageMaxOpendataSizeBytes;
- (unsigned long long)localStorageMaxSizeBytes;
- (id)initWithAppBrandInfo:(id)arg1;

@end

