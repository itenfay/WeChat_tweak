//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnUploadTaskInfo, NSString;

@protocol IChatRoomHistoryUploadExt <NSObject>

@optional
- (void)onHistoryUploadProgressChanged:(NSString *)arg1 total:(unsigned long long)arg2 remain:(unsigned long long)arg3;
- (void)onHistoryUploadFinish:(NSString *)arg1 uploadInfo:(CdnUploadTaskInfo *)arg2 errMsg:(NSString *)arg3;
@end

