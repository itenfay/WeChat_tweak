//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MPCommentReply
{
    _Bool _isLike;
    _Bool _isDelete;
    _Bool _isReplySelected;
    _Bool _isFromAuthor;
    unsigned int _createTime;
    unsigned int _replyId;
    unsigned int _likeCount;
    NSString *_content;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFromAuthor; // @synthesize isFromAuthor=_isFromAuthor;
@property(nonatomic) _Bool isReplySelected; // @synthesize isReplySelected=_isReplySelected;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) unsigned int replyId; // @synthesize replyId=_replyId;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)description;

@end

