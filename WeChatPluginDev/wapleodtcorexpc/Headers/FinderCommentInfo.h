//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AuthorReactionToCommentInfo, CommentContentInfo, CommentRecommendFriendList, CommentRefFeedJumpInfo, CommentRefProductJumpInfo, FinderCommentAdvertisementInfo, FinderCommentPromotionInfo, FinderCommentRelatedFeedInfo, FinderContact, FinderContactMsgInfo, FinderIpRegionInfo, NSData, NSMutableArray, NSString;

@interface FinderCommentInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) FinderCommentAdvertisementInfo *advertisementInfo; // @dynamic advertisementInfo;
@property(retain, nonatomic) FinderContact *authorContact; // @dynamic authorContact;
@property(retain, nonatomic) AuthorReactionToCommentInfo *authorReactionInfo; // @dynamic authorReactionInfo;
@property(nonatomic) unsigned int blacklistFlag; // @dynamic blacklistFlag;
@property(retain, nonatomic) NSString *chatroomMemberNickname; // @dynamic chatroomMemberNickname;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(nonatomic) unsigned long long commentId; // @dynamic commentId;
@property(nonatomic) unsigned int commentType; // @dynamic commentType;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) CommentContentInfo *contentInfo; // @dynamic contentInfo;
@property(nonatomic) unsigned int contentType; // @dynamic contentType;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned long long createtime; // @dynamic createtime;
@property(nonatomic) unsigned int deleteFlag; // @dynamic deleteFlag;
@property(nonatomic) unsigned int dislikeCount; // @dynamic dislikeCount;
@property(nonatomic) unsigned int dislikeFlag; // @dynamic dislikeFlag;
@property(nonatomic) unsigned int displayFlag; // @dynamic displayFlag;
@property(nonatomic) unsigned long long displayid; // @dynamic displayid;
@property(retain, nonatomic) NSString *displayidDiscarded; // @dynamic displayidDiscarded;
@property(nonatomic) unsigned int expandCommentCount; // @dynamic expandCommentCount;
@property(nonatomic) unsigned int extFlag; // @dynamic extFlag;
@property(retain, nonatomic) CommentRecommendFriendList *friendRecommendList; // @dynamic friendRecommendList;
@property(retain, nonatomic) NSString *headUrl; // @dynamic headUrl;
@property(retain, nonatomic) NSMutableArray *interactionLabelList; // @dynamic interactionLabelList;
@property(retain, nonatomic) FinderIpRegionInfo *ipRegionInfo; // @dynamic ipRegionInfo;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSMutableArray *levelTwoComment; // @dynamic levelTwoComment;
@property(nonatomic) unsigned int likeCount; // @dynamic likeCount;
@property(nonatomic) unsigned int likeFlag; // @dynamic likeFlag;
@property(retain, nonatomic) NSMutableArray *mentionedUserInfo; // @dynamic mentionedUserInfo;
@property(retain, nonatomic) FinderContactMsgInfo *msgInfo; // @dynamic msgInfo;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) FinderCommentPromotionInfo *promotionInfo; // @dynamic promotionInfo;
@property(nonatomic) unsigned int recommendCount; // @dynamic recommendCount;
@property(nonatomic) unsigned int recommendFlag; // @dynamic recommendFlag;
@property(retain, nonatomic) CommentRefFeedJumpInfo *refFeedJumpInfo; // @dynamic refFeedJumpInfo;
@property(retain, nonatomic) CommentRefProductJumpInfo *refProductJumpInfo; // @dynamic refProductJumpInfo;
@property(retain, nonatomic) FinderCommentRelatedFeedInfo *relatedFeedInfo; // @dynamic relatedFeedInfo;
@property(retain, nonatomic) NSString *replacedContent; // @dynamic replacedContent;
@property(nonatomic) unsigned int replyBlacklistFlag; // @dynamic replyBlacklistFlag;
@property(nonatomic) unsigned long long replyCommentId; // @dynamic replyCommentId;
@property(retain, nonatomic) FinderContact *replyContact; // @dynamic replyContact;
@property(retain, nonatomic) NSString *replyContent; // @dynamic replyContent;
@property(retain, nonatomic) NSString *replyNickname; // @dynamic replyNickname;
@property(retain, nonatomic) NSString *replyUsername; // @dynamic replyUsername;
@property(retain, nonatomic) NSString *reportJson; // @dynamic reportJson;
@property(retain, nonatomic) NSMutableArray *searchKeywordInfo; // @dynamic searchKeywordInfo;
@property(nonatomic) unsigned int unreadFlag; // @dynamic unreadFlag;
@property(nonatomic) unsigned int upContinueFlag; // @dynamic upContinueFlag;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

