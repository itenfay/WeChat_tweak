//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MPCommentReply;

@interface MPCommentReplyCellViewModel
{
    _Bool _isPreReplyFromSameAuthor;
    MPCommentReply *_commentReply;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPreReplyFromSameAuthor; // @synthesize isPreReplyFromSameAuthor=_isPreReplyFromSameAuthor;
@property(retain, nonatomic) MPCommentReply *commentReply; // @synthesize commentReply=_commentReply;
@property(readonly, nonatomic) _Bool isFromAuthor;
@property(readonly, nonatomic) _Bool isDelete;
- (void)switchThumbsUpStatus;
- (unsigned int)likeCount;
- (_Bool)isSelected;
- (_Bool)isLike;
- (void)markReplyDeleted;
- (id)content;
- (double)headerMargin;
- (id)creatCommentCellView;
- (id)cellViewClassName;
- (id)initWithMPCommentMsgAndReply:(id)arg1 commentReply:(id)arg2;

@end

