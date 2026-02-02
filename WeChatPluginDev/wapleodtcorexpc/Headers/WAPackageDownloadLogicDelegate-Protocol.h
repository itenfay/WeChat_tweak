//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WAPackageDownloadProtocolInfo;

@protocol WAPackageDownloadLogicDelegate <NSObject>
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(NSString *)arg2 filePath:(NSString *)arg3 protocolInfo:(WAPackageDownloadProtocolInfo *)arg4 totalLength:(unsigned long long)arg5;

@optional
- (void)onDownloadTaskRecordTime:(double)arg1 appId:(NSString *)arg2;
- (void)onDownloadTaskProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 taskUrl:(NSString *)arg4;
@end

