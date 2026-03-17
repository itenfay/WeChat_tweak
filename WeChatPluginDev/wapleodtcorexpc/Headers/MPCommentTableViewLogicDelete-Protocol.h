//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MPCommentMsg, MPCommentReply;

@protocol MPCommentTableViewLogicDelete <NSObject, UIScrollViewDelegate>
- (void)onRefreshCommentTableView;

@optional
- (void)onReplyLikeClick:(unsigned int)arg1 replyId:(unsigned int)arg2 targetLikeStatus:(unsigned int)arg3;
- (void)onCommentLikeClick:(unsigned int)arg1 targetLikeStatus:(unsigned int)arg2;
- (void)onCommentReplyClick:(MPCommentMsg *)arg1 commentReply:(MPCommentReply *)arg2;
- (void)onTopicReplyClick:(MPCommentMsg *)arg1;
- (void)onDeleteCommentMsgReply:(MPCommentMsg *)arg1 commentReply:(MPCommentReply *)arg2;
- (void)onDeleteCommentMsg:(MPCommentMsg *)arg1;
@end

