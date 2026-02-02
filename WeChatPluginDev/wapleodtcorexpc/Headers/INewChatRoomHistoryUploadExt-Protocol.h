//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnUploadTaskInfo, NSString;

@protocol INewChatRoomHistoryUploadExt <NSObject>

@optional
- (void)onNewHistoryUploadProgressChanged:(NSString *)arg1 total:(unsigned int)arg2 remain:(unsigned int)arg3;
- (void)onNewHistoryUploadFinish:(NSString *)arg1 uploadInfo:(CdnUploadTaskInfo *)arg2;
@end

