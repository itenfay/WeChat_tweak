//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MPCommentEditView, MPCommentMsg, MPCommentReply;

@protocol MPCommentEditViewDelegate <NSObject>

@optional
- (void)onReplyLikeClick:(unsigned int)arg1 replyId:(unsigned int)arg2 targetLikeStatus:(unsigned int)arg3;
- (void)onCommentLikeClick:(unsigned int)arg1 targetLikeStatus:(unsigned int)arg2;
- (void)onCommentViewDissmiss:(MPCommentEditView *)arg1;
- (void)onDeleteEditViewCommentReply:(MPCommentMsg *)arg1 commentReply:(MPCommentReply *)arg2;
- (void)onDeleteEditViewCommentMsg:(MPCommentMsg *)arg1;
@end

