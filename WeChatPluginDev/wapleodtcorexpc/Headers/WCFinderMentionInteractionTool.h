//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderMentionInteractionTool : NSObject
{
}

+ (void)modSilentStateWithMention:(id)arg1 finderUsername:(id)arg2 vc:(id)arg3;
+ (void)modMentionThankStatus:(_Bool)arg1 withMention:(id)arg2 finderUsername:(id)arg3;
+ (void)postReplyComment:(id)arg1 withMention:(id)arg2;
+ (void)modCommentLikeStatus:(_Bool)arg1 withMention:(id)arg2 commentScene:(int)arg3;
+ (unsigned long long)supportInteractionActionWithMention:(id)arg1;
+ (unsigned long long)interactionBusinessTypeWithMention:(id)arg1;

@end

