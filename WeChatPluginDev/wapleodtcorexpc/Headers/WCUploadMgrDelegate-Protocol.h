//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDataItem, WCUploadMedia, WCUploadMgr, WCUploadTask;

@protocol WCUploadMgrDelegate <NSObject>

@optional
- (void)uploadMgr:(WCUploadMgr *)arg1 uploadTaskDidFail:(WCUploadTask *)arg2;
- (void)onPendingTaskStartUpload:(WCUploadTask *)arg1;
- (void)deleteDataItem:(WCDataItem *)arg1;
- (void)onUploadRestarted:(WCUploadTask *)arg1;
- (void)uploadMgr:(WCUploadMgr *)arg1 didRemoveFailedTask:(WCUploadTask *)arg2;
- (void)onUploadFinished:(WCUploadTask *)arg1;
- (void)onMediaUploadFinished:(WCUploadMedia *)arg1;
@end

