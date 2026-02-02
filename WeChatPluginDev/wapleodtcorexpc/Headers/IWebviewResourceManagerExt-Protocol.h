//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WebviewLocalResItem;

@protocol IWebviewResourceManagerExt <NSObject>

@optional
- (void)onResourceDownloadFinished:(NSString *)arg1 SvrId:(NSString *)arg2 ErrCode:(int)arg3;
- (void)onResourceDownloadProgress:(int)arg1 SvrId:(NSString *)arg2;
- (void)onLocalResourceUploadFinishedWithoutMediaId:(WebviewLocalResItem *)arg1 LocalId:(NSString *)arg2 FileUrl:(NSString *)arg3 ErrCode:(int)arg4;
- (void)onLocalResourceUploadProgressWithouMediaId:(int)arg1 LocalId:(NSString *)arg2;
- (void)onLocalResourceUploadFinished:(NSString *)arg1 SvrId:(NSString *)arg2 ErrCode:(int)arg3;
- (void)onLocalResourceUploadProgress:(int)arg1 LocalId:(NSString *)arg2;
- (void)onLocalImageSaveFinish:(NSArray *)arg1;
@end

