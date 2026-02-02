//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MPPageCommentParam
{
    _Bool _isSubReply;
    unsigned int _personalCommentId;
    NSString *_title;
    unsigned long long _commentTopicId;
    NSString *_replyContent;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *replyContent; // @synthesize replyContent=_replyContent;
@property(nonatomic) unsigned int personalCommentId; // @synthesize personalCommentId=_personalCommentId;
@property(nonatomic) _Bool isSubReply; // @synthesize isSubReply=_isSubReply;
@property(nonatomic) unsigned long long commentTopicId; // @synthesize commentTopicId=_commentTopicId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

