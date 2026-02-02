//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CommentContentInfo, FinderCommentMentionedUser, FinderContact, FinderFollowReasonInfo, FinderHelpPromotionMentionInfo, FinderIdentityInfo, FinderMentionAggregated, FinderMentionContact, FinderMentionExtInfo, FinderMention_FinderMentionThankInfo, FinderMention_LikeContactInfo, FinderNotification, FinderPoiInteractionInfo, NSMutableArray, NSString, NewLifeMentionInfo;

@interface FinderMention : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *aggregateTitle; // @dynamic aggregateTitle;
@property(retain, nonatomic) FinderMentionAggregated *aggregated; // @dynamic aggregated;
@property(retain, nonatomic) NSMutableArray *aggregatedContactList; // @dynamic aggregatedContactList;
@property(nonatomic) unsigned int aggregatedCount; // @dynamic aggregatedCount;
@property(retain, nonatomic) FinderContact *authorContact; // @dynamic authorContact;
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) CommentContentInfo *commentContentInfo; // @dynamic commentContentInfo;
@property(nonatomic) unsigned int commentContentType; // @dynamic commentContentType;
@property(retain, nonatomic) FinderCommentMentionedUser *commentMentionedUser; // @dynamic commentMentionedUser;
@property(retain, nonatomic) FinderMentionContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int createtime; // @dynamic createtime;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) FinderMentionExtInfo *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int extflag; // @dynamic extflag;
@property(retain, nonatomic) FinderIdentityInfo *finderIdentity; // @dynamic finderIdentity;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(nonatomic) unsigned int followExpireTime; // @dynamic followExpireTime;
@property(nonatomic) unsigned int followFlag; // @dynamic followFlag;
@property(nonatomic) unsigned long long followId; // @dynamic followId;
@property(retain, nonatomic) FinderFollowReasonInfo *followReason; // @dynamic followReason;
@property(nonatomic) unsigned int forceUseContent; // @dynamic forceUseContent;
@property(nonatomic) unsigned int forceUseRefContent; // @dynamic forceUseRefContent;
@property(retain, nonatomic) NSString *headUrl; // @dynamic headUrl;
@property(retain, nonatomic) FinderHelpPromotionMentionInfo *helpPromotionInfo; // @dynamic helpPromotionInfo;
@property(nonatomic) unsigned int interactionCount; // @dynamic interactionCount;
@property(retain, nonatomic) NSMutableArray *interactionLabelList; // @dynamic interactionLabelList;
@property(nonatomic) unsigned int isSilentMention; // @dynamic isSilentMention;
@property(retain, nonatomic) FinderMention_LikeContactInfo *likeInfo; // @dynamic likeInfo;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *memberProviderFinderusername; // @dynamic memberProviderFinderusername;
@property(retain, nonatomic) NSString *mentionContent; // @dynamic mentionContent;
@property(nonatomic) unsigned long long mentionId; // @dynamic mentionId;
@property(nonatomic) unsigned int mentionSubtype; // @dynamic mentionSubtype;
@property(nonatomic) unsigned int mentionType; // @dynamic mentionType;
@property(retain, nonatomic) NewLifeMentionInfo *newlifeMentionInfo; // @dynamic newlifeMentionInfo;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) FinderNotification *notification; // @dynamic notification;
@property(nonatomic) unsigned int orderCount; // @dynamic orderCount;
@property(retain, nonatomic) FinderPoiInteractionInfo *poiInteractionInfo; // @dynamic poiInteractionInfo;
@property(nonatomic) unsigned long long refCommentId; // @dynamic refCommentId;
@property(retain, nonatomic) NSString *refContent; // @dynamic refContent;
@property(nonatomic) unsigned long long refFavId; // @dynamic refFavId;
@property(nonatomic) unsigned long long refObjectId; // @dynamic refObjectId;
@property(retain, nonatomic) NSString *refObjectNonceId; // @dynamic refObjectNonceId;
@property(nonatomic) unsigned int refObjectType; // @dynamic refObjectType;
@property(nonatomic) unsigned long long refThumbupId; // @dynamic refThumbupId;
@property(nonatomic) unsigned long long refVideoObjectId; // @dynamic refVideoObjectId;
@property(retain, nonatomic) NSString *refVideoObjectNonceId; // @dynamic refVideoObjectNonceId;
@property(retain, nonatomic) FinderMentionContact *replyContact; // @dynamic replyContact;
@property(retain, nonatomic) NSString *replyNickname; // @dynamic replyNickname;
@property(retain, nonatomic) NSString *replyUsername; // @dynamic replyUsername;
@property(nonatomic) unsigned long long rootCommentId; // @dynamic rootCommentId;
@property(retain, nonatomic) NSString *silentMentionEntityId; // @dynamic silentMentionEntityId;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(nonatomic) unsigned long long svrMentionId; // @dynamic svrMentionId;
@property(retain, nonatomic) NSString *svrReportInfo; // @dynamic svrReportInfo;
@property(nonatomic) unsigned int thankIconType; // @dynamic thankIconType;
@property(retain, nonatomic) FinderMention_FinderMentionThankInfo *thankInfo; // @dynamic thankInfo;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *thumbUrlToken; // @dynamic thumbUrlToken;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

