//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderMention;

@protocol WCFinderMentionInteractionExt <NSObject>

@optional
- (void)onFinderMention:(WCFinderMention *)arg1 silentStateChangedTo:(_Bool)arg2;
- (void)onFinderMention:(WCFinderMention *)arg1 replyCommentFailWithErrorMsg:(NSString *)arg2;
- (void)onFinderMentionReplyCommentSuccess:(WCFinderMention *)arg1;
- (void)onFinderMention:(WCFinderMention *)arg1 thankedStatusChanged:(_Bool)arg2;
- (void)onFinderMention:(WCFinderMention *)arg1 commentLikeStatusChanged:(_Bool)arg2;
@end

