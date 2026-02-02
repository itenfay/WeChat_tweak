//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnUploadTaskInfo, MultiMediaUploadProcessController, NSString;

@protocol MultiMediaUploadProcessControllerDelegate <NSObject>
- (void)onMultiMediaUploadProcessFlowFinish:(MultiMediaUploadProcessController *)arg1;
- (void)onHistoryRecordDataUploadFinish:(MultiMediaUploadProcessController *)arg1 cdnInfo:(CdnUploadTaskInfo *)arg2 errorMsg:(NSString *)arg3;
- (void)onUploadRecordMsgDataSuccess:(MultiMediaUploadProcessController *)arg1;
- (void)OnUploadProgressChanged:(MultiMediaUploadProcessController *)arg1 total:(unsigned long long)arg2 remain:(unsigned long long)arg3;
- (void)onNeedUpdateMediaWrap:(MultiMediaUploadProcessController *)arg1 bitSet:(int)arg2;
@end

