//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, SnsEmojiInfoObj, WCAdSnsCommentExtInfo, WCMomentsDragonCommentInfo;

@interface WCUserComment : NSObject
{
    NSString *m_cpKeyForComment;
    _Bool m_isCommentUnsafe;
    _Bool isHBComment;
    _Bool _bDeleted;
    _Bool _deletedByFeedOwner;
    _Bool _isCommentUnsafe;
    _Bool _isAdvertiserComment;
    _Bool _isRefAdvertiserComment;
    _Bool _isAdPreferInfo;
    int _source;
    int _type;
    unsigned int _createTime;
    int _isLocalAdded;
    int _isRichText;
    unsigned int _deletedByFeedOwnerTimeStamp;
    int _commentFlag;
    unsigned int _adAdvertiserFirstCommentDisplayTime;
    NSString *contentPattern;
    NSString *_commentID;
    NSString *_comment64ID;
    NSString *_username;
    NSString *_nickname;
    NSString *_content;
    NSString *_refCommentID;
    NSString *_refComment64ID;
    NSString *_refUserName;
    NSData *_remindFriendsInfoData;
    SnsEmojiInfoObj *_snsEmojiInfoObj;
    WCAdSnsCommentExtInfo *_adExtInfo;
    NSString *_cpKeyForComment;
    NSString *_dataItemUsrName;
    NSString *_dataItemNickName;
    NSString *_adPreferNickName;
    NSString *_adPreferHeadUrl;
    NSString *_discoveryContent;
    WCMomentsDragonCommentInfo *_dragonCommentInfo;
}

+ (unsigned int)dynamicDeleteOthersCommentTipsExpiredTime;
+ (_Bool)dynamicCanDeleteOthersComment;
+ (id)fromServerCommentObj:(id)arg1;
+ (id)fromServerObj:(id)arg1;
+ (id)fromCommentUploadItem:(id)arg1;
+ (id)deleteByFeedOwnerTips;
+ (void)initialize;
+ (void)PBArrayAdd_dragonCommentInfo;
+ (void)PBArrayAdd_adExtInfo;
+ (void)PBArrayAdd_isRichText;
+ (void)PBArrayAdd_deletedByFeedOwnerTimeStamp;
+ (void)PBArrayAdd_deletedByFeedOwner;
+ (void)PBArrayAdd_snsEmojiInfoObj;
+ (void)PBArrayAdd_adAdvertiserFirstCommentDisplayTime;
+ (void)PBArrayAdd_isAdPreferInfo;
+ (void)PBArrayAdd_adPreferHeadUrl;
+ (void)PBArrayAdd_adPreferNickName;
+ (void)PBArrayAdd_dataItemNickName;
+ (void)PBArrayAdd_dataItemUsrName;
+ (void)PBArrayAdd_isRefAdvertiserComment;
+ (void)PBArrayAdd_isAdvertiserComment;
+ (void)PBArrayAdd_remindFriendsInfoData;
+ (void)PBArrayAdd_commentFlag;
+ (void)PBArrayAdd_bDeleted;
+ (void)PBArrayAdd_refUserName;
+ (void)PBArrayAdd_refComment64ID;
+ (void)PBArrayAdd_refCommentID;
+ (void)PBArrayAdd_isLocalAdded;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_comment64ID;
+ (void)PBArrayAdd_commentID;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsDragonCommentInfo *dragonCommentInfo; // @synthesize dragonCommentInfo=_dragonCommentInfo;
@property(retain, nonatomic) NSString *discoveryContent; // @synthesize discoveryContent=_discoveryContent;
@property(nonatomic) unsigned int adAdvertiserFirstCommentDisplayTime; // @synthesize adAdvertiserFirstCommentDisplayTime=_adAdvertiserFirstCommentDisplayTime;
@property(retain, nonatomic) NSString *adPreferHeadUrl; // @synthesize adPreferHeadUrl=_adPreferHeadUrl;
@property(retain, nonatomic) NSString *adPreferNickName; // @synthesize adPreferNickName=_adPreferNickName;
@property(nonatomic) _Bool isAdPreferInfo; // @synthesize isAdPreferInfo=_isAdPreferInfo;
@property(nonatomic) int commentFlag; // @synthesize commentFlag=_commentFlag;
@property(retain, nonatomic) NSString *dataItemNickName; // @synthesize dataItemNickName=_dataItemNickName;
@property(retain, nonatomic) NSString *dataItemUsrName; // @synthesize dataItemUsrName=_dataItemUsrName;
@property(nonatomic) _Bool isRefAdvertiserComment; // @synthesize isRefAdvertiserComment=_isRefAdvertiserComment;
@property(nonatomic) _Bool isAdvertiserComment; // @synthesize isAdvertiserComment=_isAdvertiserComment;
@property(nonatomic) _Bool isCommentUnsafe; // @synthesize isCommentUnsafe=_isCommentUnsafe;
@property(retain, nonatomic) NSString *cpKeyForComment; // @synthesize cpKeyForComment=_cpKeyForComment;
@property(nonatomic) unsigned int deletedByFeedOwnerTimeStamp; // @synthesize deletedByFeedOwnerTimeStamp=_deletedByFeedOwnerTimeStamp;
@property(nonatomic) _Bool deletedByFeedOwner; // @synthesize deletedByFeedOwner=_deletedByFeedOwner;
@property(retain, nonatomic) WCAdSnsCommentExtInfo *adExtInfo; // @synthesize adExtInfo=_adExtInfo;
@property(retain, nonatomic) SnsEmojiInfoObj *snsEmojiInfoObj; // @synthesize snsEmojiInfoObj=_snsEmojiInfoObj;
@property(retain, nonatomic) NSData *remindFriendsInfoData; // @synthesize remindFriendsInfoData=_remindFriendsInfoData;
@property(nonatomic) _Bool bDeleted; // @synthesize bDeleted=_bDeleted;
@property(nonatomic) int isRichText; // @synthesize isRichText=_isRichText;
@property(retain, nonatomic) NSString *refUserName; // @synthesize refUserName=_refUserName;
@property(retain, nonatomic) NSString *refComment64ID; // @synthesize refComment64ID=_refComment64ID;
@property(retain, nonatomic) NSString *refCommentID; // @synthesize refCommentID=_refCommentID;
@property(nonatomic) int isLocalAdded; // @synthesize isLocalAdded=_isLocalAdded;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *comment64ID; // @synthesize comment64ID=_comment64ID;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(nonatomic) _Bool isHBComment; // @synthesize isHBComment;
@property(retain, nonatomic) NSString *contentPattern; // @synthesize contentPattern;
@property(readonly, nonatomic) _Bool showsDragonBackground;
@property(readonly, nonatomic) _Bool isDragonGreeting;
@property(readonly, nonatomic) _Bool isDragonComment;
- (_Bool)isCommentOfMine;
- (long long)compareTime:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)descriptionForKeyPaths;
- (id)keyPaths;
- (id)fetchAdFirstCommentQueryForName:(id)arg1;
- (_Bool)canDeleteWithDataItem:(id)arg1;
- (_Bool)isEmotionComment;
- (_Bool)isAdBossFirstLike;
- (_Bool)isAdBossFirstComment;
- (_Bool)isCommentCanFold;
- (_Bool)isAtedFriendComment;
- (_Bool)isAtedAdvertiserComment;
@property(readonly, nonatomic) _Bool isCopyingEnabled;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

