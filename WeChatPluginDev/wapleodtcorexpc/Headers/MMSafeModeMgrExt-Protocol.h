//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMSafeModeMgrExt <NSObject>

@optional
- (void)onUploadFilesFail;
- (void)onUploadFilesFinished;
- (void)onUploadFilesProgress:(double)arg1;
- (void)onClearUnnecessaryFilesFinished;
- (void)onReportAndUpdateConfigFinished;
@end

