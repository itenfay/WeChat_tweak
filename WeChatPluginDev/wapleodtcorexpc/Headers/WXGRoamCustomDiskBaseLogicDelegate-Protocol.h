//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;

@protocol WXGRoamCustomDiskBaseLogicDelegate <NSObject>

@optional
- (void)onFileStreamReadComplete:(unsigned long long)arg1 err:(int)arg2 buf:(NSData *)arg3;
- (void)onFileStreamReadBeginComplete:(unsigned long long)arg1 err:(int)arg2 context:(NSString *)arg3 buf:(NSData *)arg4;
- (void)onFileStreamWriteEndComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onFileStreamWriteComplete:(unsigned long long)arg1;
- (void)onFileStreamWriteBeginComplete:(unsigned long long)arg1 err:(int)arg2 context:(NSString *)arg3;
- (void)onFileStreamWriteOnceComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDownloadFileProgressEvent:(long long)arg1 unitSize:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onDownloadFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onUploadFileProgressEvent:(long long)arg1 unitSize:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onUploadFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDeleteDirComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onCreateDirComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDeleteFileListComplete:(unsigned long long)arg1 overallErr:(int)arg2 errList:(NSArray *)arg3;
- (void)onDeleteFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onGetDirsSizeComplete:(unsigned long long)arg1 error:(int)arg2 dirSize:(NSArray *)arg3;
- (void)onGetFileInfoComplete:(unsigned long long)arg1 err:(int)arg2 fileInfo:(NSData *)arg3;
- (void)onGetFileInfoListComplete:(unsigned long long)arg1 err:(int)arg2 fileInfoList:(NSData *)arg3;
- (void)onGetRoamDiskInfoComplete:(unsigned long long)arg1 err:(int)arg2 info:(NSData *)arg3;
@end

