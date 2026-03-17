//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderCommentHelper : NSObject
{
}

+ (_Bool)canUseCacheCommentVC:(id)arg1 contentVM:(id)arg2 refCommentID:(unsigned long long)arg3 appendCommentModel:(id)arg4;
+ (id)createCommentAdPlayerViewWithFrame:(struct CGRect)arg1 argsWrap:(id)arg2;
+ (void)reportCommentReplyEventWithDataItem:(id)arg1 replyComment:(id)arg2 commentScene:(int)arg3 vc:(id)arg4;
+ (void)reportCommentPostClickWithRootCommentID:(unsigned long long)arg1;
+ (void)reportCommentAvatarClick:(id)arg1 clickType:(unsigned long long)arg2 commentViewScene:(int)arg3 feedID:(id)arg4;
+ (void)reportCommentLikeClick:(id)arg1;
+ (void)reportFeedCommentDeleteClickWithComment:(id)arg1 fromVC:(id)arg2;
+ (void)pushProfileWithClickCommentUsername:(id)arg1 contact:(id)arg2 isWeChatFriend:(_Bool)arg3 dataItem:(id)arg4 fromVC:(id)arg5;
+ (_Bool)commentFunctionIsSpam;
+ (id)parseExtLink:(id)arg1 commentScene:(int)arg2;
+ (void)reportUserComment:(id)arg1 feedID:(id)arg2 commentScene:(int)arg3 uiScene:(id)arg4 nav:(id)arg5;
+ (id)getWechatProfileVCWithFeedTid:(id)arg1 comment:(id)arg2 isSelfPost:(_Bool)arg3 authorScene:(_Bool)arg4 delegate:(id)arg5 halfScreenDelegate:(id)arg6;
+ (id)getCommentCountValueStrWithCommentCount:(long long)arg1 authorScene:(_Bool)arg2;
+ (id)getSuffixCommentCountDescriptionWithDataItem:(id)arg1 commentCount:(long long)arg2 authorScene:(_Bool)arg3;
+ (id)getCommentCountDescriptionWithDataItem:(id)arg1 commentCount:(long long)arg2 authorScene:(_Bool)arg3;
+ (id)getDetailPageCommentCountDescriptionWithCommentCount:(long long)arg1 authorScene:(_Bool)arg2;

@end

