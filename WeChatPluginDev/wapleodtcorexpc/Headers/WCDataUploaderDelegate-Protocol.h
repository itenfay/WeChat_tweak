//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDataUploaderResult, WCUploadTask;

@protocol WCDataUploaderDelegate <NSObject>
- (void)onDataUploadFinished:(WCUploadTask *)arg1 uploadResult:(WCDataUploaderResult *)arg2;
- (void)onDataUploadStarted:(WCUploadTask *)arg1;
@end

