//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderExposeNotificationInfo, NSData, NSString;

@interface WCFinderUserMentionModel : NSObject
{
    NSData *_lastLikeBuffer;
    NSData *_lastCommentBuffer;
    NSData *_lastFansBuffer;
    NSData *_lastMergeMentionBuffer;
    NSData *_lastWeChatLikeBuffer;
    NSData *_lastWeChatCommentBuffer;
    NSData *_lastMergeSystemMSGBuffer;
    NSData *_lastMemberLikeBuffer;
    NSData *_lastMemberCommentBuffer;
    NSData *_lastMemberJoinBuffer;
    unsigned long long _unreadLikeCount;
    unsigned long long _unreadCommentCount;
    unsigned long long _unreadNotifyCount;
    unsigned long long _unreadFriendLikeFeedCount;
    unsigned long long _unreadFriendAgreeLikeCount;
    unsigned long long _unreadFollowAcceptMsgCount;
    unsigned long long _unreadFollowCount;
    unsigned long long _memberUnreadLikeCount;
    unsigned long long _memberUnreadCommentCount;
    unsigned long long _memberUnreadJoinCount;
    unsigned long long _memberUnreadQACount;
    unsigned long long _unreadOriginalEntrance;
    unsigned long long _lastReadLikeMaxId;
    unsigned long long _lastReadCommentMaxId;
    unsigned long long _lastReadFansMaxId;
    unsigned long long _lastWechatReadMaxId;
    unsigned long long _lastReadMergeNormalMSGId;
    unsigned long long _lastReadMergeSystemMSGId;
    NSString *_lastHeadImageURL;
    unsigned long long _unreadNormalMSGCount;
    unsigned long long _unreadSystemMSGCount;
    NSString *_latestNotificationBriefing;
    unsigned long long _latestNotificationTime;
    NSString *_helperNotificationRedDotTips;
    FinderExposeNotificationInfo *_exposeNotificationInfo;
    unsigned long long _exposeNotificationInfoLastSequence;
}

+ (void)initialize;
+ (void)PBArrayAdd_helperNotificationRedDotTips;
+ (void)PBArrayAdd_exposeNotificationInfoLastSequence;
+ (void)PBArrayAdd_exposeNotificationInfo;
+ (void)PBArrayAdd_memberUnreadQACount;
+ (void)PBArrayAdd_memberUnreadJoinCount;
+ (void)PBArrayAdd_memberUnreadCommentCount;
+ (void)PBArrayAdd_memberUnreadLikeCount;
+ (void)PBArrayAdd_lastMemberJoinBuffer;
+ (void)PBArrayAdd_lastMemberCommentBuffer;
+ (void)PBArrayAdd_lastMemberLikeBuffer;
+ (void)PBArrayAdd_lastWeChatCommentBuffer;
+ (void)PBArrayAdd_lastWeChatLikeBuffer;
+ (void)PBArrayAdd_latestNotificationTime;
+ (void)PBArrayAdd_latestNotificationBriefing;
+ (void)PBArrayAdd_unreadCommentCount;
+ (void)PBArrayAdd_unreadLikeCount;
+ (void)PBArrayAdd_unreadFollowCount;
+ (void)PBArrayAdd_lastReadFansMaxId;
+ (void)PBArrayAdd_lastReadCommentMaxId;
+ (void)PBArrayAdd_lastReadLikeMaxId;
+ (void)PBArrayAdd_lastFansBuffer;
+ (void)PBArrayAdd_lastCommentBuffer;
+ (void)PBArrayAdd_lastLikeBuffer;
+ (void)PBArrayAdd_unreadFollowAcceptMsgCount;
+ (void)PBArrayAdd_unreadFriendAgreeLikeCount;
+ (void)PBArrayAdd_unreadFriendLikeFeedCount;
+ (void)PBArrayAdd_unreadSystemMSGCount;
+ (void)PBArrayAdd_unreadNormalMSGCount;
+ (void)PBArrayAdd_lastReadMergeSystemMSGId;
+ (void)PBArrayAdd_lastReadMergeNormalMSGId;
+ (void)PBArrayAdd_lastMergeMentionBuffer;
+ (void)PBArrayAdd_unreadOriginalEntrance;
+ (void)PBArrayAdd_lastWechatReadMaxId;
+ (void)PBArrayAdd_lastHeadImageURL;
+ (void)PBArrayAdd_unreadNotifyCount;
+ (void)PBArrayAdd_lastMergeSystemMSGBuffer;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long exposeNotificationInfoLastSequence; // @synthesize exposeNotificationInfoLastSequence=_exposeNotificationInfoLastSequence;
@property(retain, nonatomic) FinderExposeNotificationInfo *exposeNotificationInfo; // @synthesize exposeNotificationInfo=_exposeNotificationInfo;
@property(copy, nonatomic) NSString *helperNotificationRedDotTips; // @synthesize helperNotificationRedDotTips=_helperNotificationRedDotTips;
@property(nonatomic) unsigned long long latestNotificationTime; // @synthesize latestNotificationTime=_latestNotificationTime;
@property(copy, nonatomic) NSString *latestNotificationBriefing; // @synthesize latestNotificationBriefing=_latestNotificationBriefing;
@property(nonatomic) unsigned long long unreadSystemMSGCount; // @synthesize unreadSystemMSGCount=_unreadSystemMSGCount;
@property(nonatomic) unsigned long long unreadNormalMSGCount; // @synthesize unreadNormalMSGCount=_unreadNormalMSGCount;
@property(copy, nonatomic) NSString *lastHeadImageURL; // @synthesize lastHeadImageURL=_lastHeadImageURL;
@property(nonatomic) unsigned long long lastReadMergeSystemMSGId; // @synthesize lastReadMergeSystemMSGId=_lastReadMergeSystemMSGId;
@property(nonatomic) unsigned long long lastReadMergeNormalMSGId; // @synthesize lastReadMergeNormalMSGId=_lastReadMergeNormalMSGId;
@property(nonatomic) unsigned long long lastWechatReadMaxId; // @synthesize lastWechatReadMaxId=_lastWechatReadMaxId;
@property(nonatomic) unsigned long long lastReadFansMaxId; // @synthesize lastReadFansMaxId=_lastReadFansMaxId;
@property(nonatomic) unsigned long long lastReadCommentMaxId; // @synthesize lastReadCommentMaxId=_lastReadCommentMaxId;
@property(nonatomic) unsigned long long lastReadLikeMaxId; // @synthesize lastReadLikeMaxId=_lastReadLikeMaxId;
@property(nonatomic) unsigned long long unreadOriginalEntrance; // @synthesize unreadOriginalEntrance=_unreadOriginalEntrance;
@property(nonatomic) unsigned long long memberUnreadQACount; // @synthesize memberUnreadQACount=_memberUnreadQACount;
@property(nonatomic) unsigned long long memberUnreadJoinCount; // @synthesize memberUnreadJoinCount=_memberUnreadJoinCount;
@property(nonatomic) unsigned long long memberUnreadCommentCount; // @synthesize memberUnreadCommentCount=_memberUnreadCommentCount;
@property(nonatomic) unsigned long long memberUnreadLikeCount; // @synthesize memberUnreadLikeCount=_memberUnreadLikeCount;
@property(nonatomic) unsigned long long unreadFollowCount; // @synthesize unreadFollowCount=_unreadFollowCount;
@property(nonatomic) unsigned long long unreadFollowAcceptMsgCount; // @synthesize unreadFollowAcceptMsgCount=_unreadFollowAcceptMsgCount;
@property(nonatomic) unsigned long long unreadFriendAgreeLikeCount; // @synthesize unreadFriendAgreeLikeCount=_unreadFriendAgreeLikeCount;
@property(nonatomic) unsigned long long unreadFriendLikeFeedCount; // @synthesize unreadFriendLikeFeedCount=_unreadFriendLikeFeedCount;
@property(nonatomic) unsigned long long unreadNotifyCount; // @synthesize unreadNotifyCount=_unreadNotifyCount;
@property(nonatomic) unsigned long long unreadCommentCount; // @synthesize unreadCommentCount=_unreadCommentCount;
@property(nonatomic) unsigned long long unreadLikeCount; // @synthesize unreadLikeCount=_unreadLikeCount;
@property(retain, nonatomic) NSData *lastMemberJoinBuffer; // @synthesize lastMemberJoinBuffer=_lastMemberJoinBuffer;
@property(retain, nonatomic) NSData *lastMemberCommentBuffer; // @synthesize lastMemberCommentBuffer=_lastMemberCommentBuffer;
@property(retain, nonatomic) NSData *lastMemberLikeBuffer; // @synthesize lastMemberLikeBuffer=_lastMemberLikeBuffer;
@property(retain, nonatomic) NSData *lastMergeSystemMSGBuffer; // @synthesize lastMergeSystemMSGBuffer=_lastMergeSystemMSGBuffer;
@property(retain, nonatomic) NSData *lastWeChatCommentBuffer; // @synthesize lastWeChatCommentBuffer=_lastWeChatCommentBuffer;
@property(retain, nonatomic) NSData *lastWeChatLikeBuffer; // @synthesize lastWeChatLikeBuffer=_lastWeChatLikeBuffer;
@property(retain, nonatomic) NSData *lastMergeMentionBuffer; // @synthesize lastMergeMentionBuffer=_lastMergeMentionBuffer;
@property(retain, nonatomic) NSData *lastFansBuffer; // @synthesize lastFansBuffer=_lastFansBuffer;
@property(retain, nonatomic) NSData *lastCommentBuffer; // @synthesize lastCommentBuffer=_lastCommentBuffer;
@property(retain, nonatomic) NSData *lastLikeBuffer; // @synthesize lastLikeBuffer=_lastLikeBuffer;
- (id)wechatMentionBubbleTitle;
- (unsigned long long)wechatMentionBubbleCount;
- (void)cleanMemberUnreadMentionCount;
- (void)cleanSystemMSGInfo;
- (void)cleanSystemUnreadMentionCount;
- (void)cleanNormalUnreadMentionCount;
- (unsigned long long)getAuthorUnreadNormalCount;
- (unsigned long long)getMemberUnreadMentionCountInnerNotifyScene;
- (unsigned long long)getMemberUnreadMentionCountByUsername:(id)arg1;
- (unsigned long long)getSystemUnreadMentionCount;
- (unsigned long long)getNormalUnreadMentionCountInnerNotifyScene;
- (unsigned long long)getNormalUnreadMentionCountByUsername:(id)arg1;
- (void)cleanMentionBuffer;
- (void)updateWechatReadMaxId:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)updateAuthorUnreadCount:(unsigned long long)arg1 type:(long long)arg2;
- (void)updateUnreadCount:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)updateLastReadMaxMentionID:(unsigned long long)arg1 type:(long long)arg2;
- (void)updateLastMergeBufferWithType:(long long)arg1 lastBuffer:(id)arg2;
- (unsigned long long)getAuthorLastReadMaxIdWithType:(long long)arg1;
- (id)getLastMergeBufferWithType:(long long)arg1;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

