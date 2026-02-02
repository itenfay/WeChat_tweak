//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MPCommentReply, NSMutableArray, NSString;

@interface MPCommentMsg
{
    _Bool _isLike;
    _Bool _isFromFriend;
    _Bool _isFromMe;
    _Bool _isTop;
    _Bool _isSelected;
    unsigned int _userCommentId;
    unsigned int _personalCommentId;
    unsigned int _createTime;
    unsigned int _likeCount;
    unsigned int _likeId;
    NSString *_url;
    unsigned long long _commentTopicId;
    NSString *_openId;
    NSString *_nickName;
    NSString *_headImageUrl;
    NSString *_content;
    MPCommentReply *_reply;
    NSMutableArray *_replyList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSMutableArray *replyList; // @synthesize replyList=_replyList;
@property(retain, nonatomic) MPCommentReply *reply; // @synthesize reply=_reply;
@property(nonatomic) unsigned int likeId; // @synthesize likeId=_likeId;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(nonatomic) _Bool isFromMe; // @synthesize isFromMe=_isFromMe;
@property(nonatomic) _Bool isFromFriend; // @synthesize isFromFriend=_isFromFriend;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(nonatomic) unsigned int personalCommentId; // @synthesize personalCommentId=_personalCommentId;
@property(nonatomic) unsigned int userCommentId; // @synthesize userCommentId=_userCommentId;
@property(nonatomic) unsigned long long commentTopicId; // @synthesize commentTopicId=_commentTopicId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)description;

@end

