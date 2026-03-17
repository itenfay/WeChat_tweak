//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnProgressInfo, CdnUploadTaskInfo;

@protocol NewLifeCdnUploadExt <NSObject>

@optional
- (void)onCdnUploadEndCallback:(CdnUploadTaskInfo *)arg1;
- (void)onCdnUploadProgressCallback:(CdnProgressInfo *)arg1;
@end

