//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@protocol MMResourceDownloadDelegate

@optional
- (void)onDownloadFinish:(long long)arg1 downloadData:(NSData *)arg2 resUrl:(NSString *)arg3 cdnResultCode:(long long)arg4;
- (void)onDownloadReportWithKey:(unsigned int)arg1;
@end

