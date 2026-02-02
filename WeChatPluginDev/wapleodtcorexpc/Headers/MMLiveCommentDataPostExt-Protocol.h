//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveTaskId, NSDictionary, NSError, NSString;

@protocol MMLiveCommentDataPostExt <NSObject>

@optional
- (void)onPostFailError:(NSError *)arg1 localSeq:(double)arg2 taskId:(MMLiveTaskId *)arg3 extraInfo:(NSDictionary *)arg4 clientMsgId:(NSString *)arg5;
- (void)onPostSuccessWithLocalSeq:(double)arg1 taskId:(MMLiveTaskId *)arg2 extraInfo:(NSDictionary *)arg3 clientMsgId:(NSString *)arg4 content:(NSString *)arg5;
@end

