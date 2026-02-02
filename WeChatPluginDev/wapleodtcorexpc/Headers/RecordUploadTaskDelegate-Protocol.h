//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnUploadTaskInfo, RecordUploadTask;

@protocol RecordUploadTaskDelegate <NSObject>
- (void)OnRecordUploadTask:(RecordUploadTask *)arg1 progressChange:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnRecordUploadTaskFail:(RecordUploadTask *)arg1;
- (void)OnRecordUploadTaskFinish:(CdnUploadTaskInfo *)arg1 uploadTask:(RecordUploadTask *)arg2;
@end

