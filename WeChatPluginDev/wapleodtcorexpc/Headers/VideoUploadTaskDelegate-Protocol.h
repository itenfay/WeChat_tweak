//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class VideoUploadTask;

@protocol VideoUploadTaskDelegate <NSObject>
- (void)onUploadProgressUpdate;
- (void)onUploadTaskFail:(VideoUploadTask *)arg1 errorType:(int)arg2;
- (void)onUploadTaskSuccess:(VideoUploadTask *)arg1;
- (void)onExportAssetSuccess:(VideoUploadTask *)arg1;
@end

