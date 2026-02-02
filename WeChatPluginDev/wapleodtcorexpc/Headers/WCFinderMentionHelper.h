//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderMentionHelper : NSObject
{
}

+ (void)tryShowMentionSilentEduWithMentionList:(id)arg1 showBlock:(CDUnknownBlockType)arg2;
+ (id)genFansProfileVCWithMention:(id)arg1 getMentionListScene:(unsigned long long)arg2 profileRefScene:(unsigned long long)arg3 updateBlock:(CDUnknownBlockType)arg4;
+ (void)followMentionContact:(id)arg1 enterType:(unsigned int)arg2 commentScene:(int)arg3;
+ (id)feedTypeTagTextWithMention:(id)arg1;
+ (id)genMentionCommentActionUdfKVWithMention:(id)arg1;
+ (id)genLikeCommentWithMention:(id)arg1 likeFlag:(_Bool)arg2 commentScene:(int)arg3;
+ (id)genReplyCommentWithMention:(id)arg1 commentScene:(int)arg2 replyContent:(id)arg3;
+ (void)modifyReplyComment:(id)arg1 withMention:(id)arg2 commentScene:(int)arg3;
+ (id)mockCommentForReplyWithMention:(id)arg1 withDisplayName:(id)arg2;

@end

