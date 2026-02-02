//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCDownloadArgsWrap;

@protocol IWAFoundationService <NSObject>
+ (_Bool)preDownloadVideoWithArgs:(WCDownloadArgsWrap *)arg1 complete:(void (^)(int, long long, long long))arg2;
+ (_Bool)StopHttpsDownloadTask:(NSString *)arg1;
+ (_Bool)StartHttpsDownloadTask:(NSString *)arg1 withUrl:(NSString *)arg2 withSavePath:(NSString *)arg3 withIPList:(NSArray *)arg4 withIsGzip:(_Bool)arg5 withFileType:(int)arg6;
+ (void)setMatrixCustomInfoWithKey:(NSString *)arg1 value:(NSString *)arg2;
+ (void)removeMatrixUserType:(unsigned int)arg1;
+ (void)addMatrixUserType:(unsigned int)arg1;
+ (void)decreaseExistWeAppCount;
+ (void)setExistWeAppCount:(int)arg1;
+ (void)setWeAppScene:(NSString *)arg1;
+ (_Bool)getFreeSize:(unsigned long long *)arg1;
+ (_Bool)getDiskSize:(unsigned long long *)arg1;

@optional
+ (_Bool)shouldForbidCdnDownload;
@end

