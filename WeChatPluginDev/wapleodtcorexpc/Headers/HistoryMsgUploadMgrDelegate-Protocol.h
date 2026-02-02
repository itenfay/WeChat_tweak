//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnUploadTaskInfo, NSArray, NSString;

@protocol HistoryMsgUploadMgrDelegate <NSObject>

@optional
- (void)onUploadDataFail:(NSString *)arg1;
- (void)onUploadDataFinish:(NSString *)arg1 taskInfo:(CdnUploadTaskInfo *)arg2;
- (void)onUploadMsgMediaFinished:(NSArray *)arg1;
@end

