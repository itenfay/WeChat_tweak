//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TingFinderMentionUtility
{
}

+ (void)showForbidJumpTips:(id)arg1;
+ (_Bool)shouldJumpToTingCommentWithMention:(id)arg1;
+ (unsigned long long)commentCgiTypeWithMention:(id)arg1;
+ (void)replyCommentWithComment:(id)arg1 withMention:(id)arg2;
+ (_Bool)isTingFinderMentionSupportInteractionActionCommentReply:(id)arg1;
+ (void)modCommentLikeStatus:(_Bool)arg1 withMention:(id)arg2 commentScene:(int)arg3;
+ (_Bool)isTingFinderMentionSupportInteractionActionCommentLike:(id)arg1;
+ (void)modMentionThankStatus:(_Bool)arg1 withMention:(id)arg2 finderUsername:(id)arg3;
+ (_Bool)isTingFinderMentionSupportInteractionActionThanks:(id)arg1;
+ (_Bool)isSupportTingInteractionAction;
+ (void)openCatgeoryWithCategoryId:(id)arg1 refCommentId:(unsigned long long)arg2 fromViewController:(id)arg3 mention:(id)arg4;
+ (void)playWithListenId:(id)arg1 refCommentId:(unsigned long long)arg2 fromViewController:(id)arg3 mention:(id)arg4;
+ (void)openTingPageWithMention:(id)arg1 refCommentId:(unsigned long long)arg2 fromViewController:(id)arg3;
+ (id)uniCommentBypassMessageFromMention:(id)arg1;
+ (id)gen20763KVReportDictFromMention:(id)arg1;
+ (unsigned long long)tingFinderMentionSourceType:(id)arg1;
+ (_Bool)isTingFinderMention:(id)arg1;
+ (_Bool)isSupportJumpTing;

@end

