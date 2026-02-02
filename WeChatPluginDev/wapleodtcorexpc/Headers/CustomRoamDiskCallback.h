//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CustomRoamDiskCallback : NSObject
{
    struct CustomRoamDiskDispatcherBridgeObjcImpl *dispatcher_bridge;
}

- (void)onFileStreamReadComplete:(unsigned long long)arg1 err:(int)arg2 buf:(id)arg3;
- (void)onFileStreamReadBeginComplete:(unsigned long long)arg1 err:(int)arg2 context:(id)arg3 buf:(id)arg4;
- (void)onFileStreamWriteEndComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onFileStreamWriteComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onFileStreamWriteBeginComplete:(unsigned long long)arg1 err:(int)arg2 context:(id)arg3;
- (void)onFileStreamWriteOnceComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDownloadFileProgressEvent:(unsigned long long)arg1 unitSize:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onDownloadFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onUploadFileProgressEvent:(unsigned long long)arg1 unitSize:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onUploadFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDeleteDirComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onCreateDirComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDeleteFileListComplete:(unsigned long long)arg1 overallErr:(int)arg2 errList:(id)arg3;
- (void)onDeleteFileComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onGetDirsSizeComplete:(unsigned long long)arg1 error:(int)arg2 dirSize:(id)arg3;
- (void)onGetFileInfoComplete:(unsigned long long)arg1 err:(int)arg2 fileInfo:(id)arg3;
- (void)onGetFileInfoListComplete:(unsigned long long)arg1 err:(int)arg2 fileInfoList:(id)arg3;
- (void)onGetRoamDiskInfoComplete:(unsigned long long)arg1 err:(int)arg2 info:(id)arg3;
- (void)onUninitComplete:(unsigned long long)arg1 err:(int)arg2;
- (void)onDeviceErrorEvent:(int)arg1 msg:(id)arg2;
- (void)onInitializeComplete:(unsigned long long)arg1 err:(int)arg2;
- (id)initWithCpp:(struct CustomRoamDiskDispatcherBridgeObjcImpl *)arg1;

@end

