//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, CdnUploadTaskInfo, CheckBigFileUploadResponse, NSArray, NSString;

@protocol MMAppAttachFileMgrExt <NSObject>

@optional
- (void)onBatchCheckBigFileUploadResult:(_Bool)arg1 respList:(NSArray *)arg2 wrapMsg:(CMessageWrap *)arg3 errMsg:(NSString *)arg4;
- (void)onCheckBigFileUploadResult:(_Bool)arg1 resp:(CheckBigFileUploadResponse *)arg2 wrapMsg:(CMessageWrap *)arg3 errMsg:(NSString *)arg4;
- (void)onCheckAppAttachRet:(CMessageWrap *)arg1 isExistInSvr:(_Bool)arg2 taskInfo:(CdnUploadTaskInfo *)arg3;
@end

