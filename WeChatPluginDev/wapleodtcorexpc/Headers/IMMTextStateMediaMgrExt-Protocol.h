//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMTextStateMediaUploadTaskInfo;

@protocol IMMTextStateMediaMgrExt <NSObject>

@optional
- (void)onTextStateMediaUploadFail:(MMTextStateMediaUploadTaskInfo *)arg1;
- (void)onTextStateMediaUploadSuccess:(MMTextStateMediaUploadTaskInfo *)arg1;
@end

