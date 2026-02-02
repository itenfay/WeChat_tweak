//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLiveFeedStreamCommentDataFetchEngine
{
}

+ (id)filterNotifyTypeCommentData:(id)arg1 taskId:(id)arg2;
+ (id)filterAdAppMsg:(id)arg1 type:(unsigned int)arg2;
+ (id)filterLikeMsg:(id)arg1;
+ (void)filterUnValidMsg:(id)arg1;
- (id)feedStreamTaskWithTaskId:(id)arg1;
- (id)filterOrdinaryCommentsFromOtherUsersForAppendingComments:(id)arg1;
- (void)appendLiveComment:(id)arg1 forTaskId:(id)arg2 isHistoryMsg:(_Bool)arg3;
- (id)commentDataMgr;
- (_Bool)applyGetLiveMessageWithTaskId:(id)arg1;
- (id)init;

@end

