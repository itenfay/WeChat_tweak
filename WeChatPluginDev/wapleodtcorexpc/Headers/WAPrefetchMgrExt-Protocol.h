//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WAInfoData, WASyncGetCodeCmd;

@protocol WAPrefetchMgrExt <NSObject>

@optional
- (void)prefetchGetCodeWithResult:(unsigned long long)arg1 preDownloadRequestkey:(NSString *)arg2;
- (void)prefetchGetCodeCmd:(WASyncGetCodeCmd *)arg1 didFinishDownloadWithRet:(_Bool)arg2 infoData:(WAInfoData *)arg3 remainRetryCount:(unsigned long long)arg4;
@end

