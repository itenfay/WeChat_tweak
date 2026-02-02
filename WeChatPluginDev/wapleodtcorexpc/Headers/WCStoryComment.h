//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCStoryComment : NSObject
{
    _Bool _isUnRead;
    _Bool _isDoubleClickBubble;
    _Bool _isPosting;
    unsigned int _createTime;
    unsigned int _isNotRichText;
    unsigned int _deleteFlag;
    unsigned int _commentFlag;
    unsigned int _inQueueTime;
    unsigned int _retryCount;
    unsigned int _objCreateTime;
    unsigned int _type;
    unsigned int _previewEnterScene;
    unsigned int _profileSource;
    NSString *_realNickName;
    NSString *_replyNickName;
    NSString *_uniqueID;
    NSString *_tid;
    NSString *_userName;
    NSString *_nickName;
    NSString *_content;
    NSString *_commentId;
    NSString *_replyCommentId;
    NSString *_replyUserName;
    NSString *_thumbUrl;
    long long _errorType;
    WCStoryComment *_replyComment;
    NSString *_disPlayNickName;
    NSString *_disPlayReplyNickName;
    unsigned long long _commentHash;
}

+ (id)displayNameOfNickName:(id)arg1 maxLength:(unsigned long long)arg2;
+ (id)nickNameOfUserName:(id)arg1;
+ (id)storyCommentFromSyncMsgDetail:(id)arg1;
+ (id)storyCommentFromServerObj:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_isPosting;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_replyComment;
+ (void)PBArrayAdd_objCreateTime;
+ (void)PBArrayAdd_isDoubleClickBubble;
+ (void)PBArrayAdd_errorType;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_inQueueTime;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_commentFlag;
+ (void)PBArrayAdd_deleteFlag;
+ (void)PBArrayAdd_replyUserName;
+ (void)PBArrayAdd_replyCommentId;
+ (void)PBArrayAdd_isNotRichText;
+ (void)PBArrayAdd_commentId;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long commentHash; // @synthesize commentHash=_commentHash;
@property(nonatomic) _Bool isPosting; // @synthesize isPosting=_isPosting;
@property(nonatomic) unsigned int profileSource; // @synthesize profileSource=_profileSource;
@property(nonatomic) unsigned int previewEnterScene; // @synthesize previewEnterScene=_previewEnterScene;
@property(readonly, copy, nonatomic) NSString *disPlayReplyNickName; // @synthesize disPlayReplyNickName=_disPlayReplyNickName;
@property(readonly, copy, nonatomic) NSString *disPlayNickName; // @synthesize disPlayNickName=_disPlayNickName;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) WCStoryComment *replyComment; // @synthesize replyComment=_replyComment;
@property(nonatomic) unsigned int objCreateTime; // @synthesize objCreateTime=_objCreateTime;
@property(nonatomic) _Bool isDoubleClickBubble; // @synthesize isDoubleClickBubble=_isDoubleClickBubble;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned int inQueueTime; // @synthesize inQueueTime=_inQueueTime;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) unsigned int commentFlag; // @synthesize commentFlag=_commentFlag;
@property(nonatomic) unsigned int deleteFlag; // @synthesize deleteFlag=_deleteFlag;
@property(retain, nonatomic) NSString *replyUserName; // @synthesize replyUserName=_replyUserName;
@property(retain, nonatomic) NSString *replyCommentId; // @synthesize replyCommentId=_replyCommentId;
@property(nonatomic) unsigned int isNotRichText; // @synthesize isNotRichText=_isNotRichText;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool isUnRead; // @synthesize isUnRead=_isUnRead;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (_Bool)isEqualToComment:(id)arg1;
- (_Bool)isPostBySelf;
- (unsigned int)getCommentType;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isVisitRecord;
- (_Bool)isBubble;
- (_Bool)isValid;
@property(readonly, copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, copy, nonatomic) NSString *realNickName; // @synthesize realNickName=_realNickName;
@property(readonly, copy, nonatomic) NSString *replyNickName; // @synthesize replyNickName=_replyNickName;
- (id)toServerObject;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

