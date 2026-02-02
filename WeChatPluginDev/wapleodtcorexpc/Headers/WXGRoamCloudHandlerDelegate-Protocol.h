//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, CloudFileInfo, CloudFileInfoList;

@protocol WXGRoamCloudHandlerDelegate <NSObject>

@optional
- (void)onRoamCloudDeleteFileListResult:(unsigned long long)arg1 errorCode:(unsigned int)arg2;
- (void)onRoamCloudDeleteFileResult:(unsigned long long)arg1 errorCode:(unsigned int)arg2;
- (void)onRoamCloudGetFileListResult:(unsigned long long)arg1 errorCode:(unsigned int)arg2 fileList:(CloudFileInfoList *)arg3;
- (void)onRoamCloudGetFileInfoResult:(unsigned long long)arg1 errorCode:(unsigned int)arg2 fileInfo:(CloudFileInfo *)arg3;
- (void)onRoamCloudDownloadFileResult:(unsigned long long)arg1 errorCode:(unsigned int)arg2;
- (void)onRoamCloudUploadFileResult:(unsigned long long)arg1 errorCode:(unsigned int)arg2;
- (void)onRoamCloudLoadMediaResult:(CMessageWrap *)arg1 errorCode:(unsigned int)arg2;
@end

