//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCTaskUploader, WCUploadMedia, WCUploadTask;

@protocol WCTaskUploaderDelegate <NSObject>
- (void)onUploader:(WCTaskUploader *)arg1 didUpdateUploadTask:(WCUploadTask *)arg2;
- (void)onUploadFinished:(WCUploadTask *)arg1;
- (void)onMediaUploadFinished:(WCUploadMedia *)arg1 task:(WCUploadTask *)arg2;
@end

