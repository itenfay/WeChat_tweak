//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, SnsEmojiInfoObj, WCMomentsDragonCommentInfo, WCTimelineExtBean, WCUserComment;

@interface WCCommentItem : NSObject
{
    NSString *toUserName;
    NSString *itemID;
    NSString *content;
    int type;
    int source;
    unsigned int createTime;
    WCUserComment *refComment;
    unsigned int inQueueTime;
    NSString *clientID;
    unsigned long long startTime;
    unsigned long long endTime;
    unsigned int commentFlag;
    unsigned int _scene;
    NSData *remindFriendsInfoData;
    NSString *_commmentID;
    WCTimelineExtBean *_extBean;
    unsigned long long _failedType;
    SnsEmojiInfoObj *_snsEmojiInfoObj;
    NSString *_sessionId;
    NSString *_wwFileID;
    NSString *_wwMediaUrl;
    NSString *_wwMediaMD5;
    long long _commentCGIType;
    NSString *_commentFailedBtnUrl;
    NSString *_commentFailedBtnTitle;
    WCMomentsDragonCommentInfo *_dragonCommentInfo;
}

+ (id)genCommentObject:(id)arg1 content:(id)arg2 ref:(id)arg3 source:(long long)arg4 SnsEmojiInfoObj:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsDragonCommentInfo *dragonCommentInfo; // @synthesize dragonCommentInfo=_dragonCommentInfo;
@property(retain, nonatomic) NSString *commentFailedBtnTitle; // @synthesize commentFailedBtnTitle=_commentFailedBtnTitle;
@property(retain, nonatomic) NSString *commentFailedBtnUrl; // @synthesize commentFailedBtnUrl=_commentFailedBtnUrl;
@property(nonatomic) long long commentCGIType; // @synthesize commentCGIType=_commentCGIType;
@property(retain, nonatomic) NSString *wwMediaMD5; // @synthesize wwMediaMD5=_wwMediaMD5;
@property(retain, nonatomic) NSString *wwMediaUrl; // @synthesize wwMediaUrl=_wwMediaUrl;
@property(retain, nonatomic) NSString *wwFileID; // @synthesize wwFileID=_wwFileID;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) SnsEmojiInfoObj *snsEmojiInfoObj; // @synthesize snsEmojiInfoObj=_snsEmojiInfoObj;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long failedType; // @synthesize failedType=_failedType;
@property(retain, nonatomic) WCTimelineExtBean *extBean; // @synthesize extBean=_extBean;
@property(retain, nonatomic) NSString *commmentID; // @synthesize commmentID=_commmentID;
@property(retain, nonatomic) NSData *remindFriendsInfoData; // @synthesize remindFriendsInfoData;
@property(nonatomic) unsigned int commentFlag; // @synthesize commentFlag;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(nonatomic) unsigned int inQueueTime; // @synthesize inQueueTime;
@property(retain, nonatomic) WCUserComment *refComment; // @synthesize refComment;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) int source; // @synthesize source;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID;
@property(retain, nonatomic) NSString *toUserName; // @synthesize toUserName;
- (void)setAtFriendContact:(id)arg1;
- (id)toServerObject;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

