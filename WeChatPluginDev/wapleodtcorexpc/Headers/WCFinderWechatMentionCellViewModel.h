//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderAuthInfo, WCFinderContact, WCFinderMention;
@protocol WCFinderWechatMentionCellViewModelDelegate;

@interface WCFinderWechatMentionCellViewModel : NSObject
{
    _Bool _isAuthor;
    _Bool _isFinder;
    _Bool _isCommentRelated;
    _Bool _isPureText;
    _Bool _isAggregated;
    _Bool _magicPlayed;
    _Bool _showFollowButton;
    unsigned int _followMyFirstLikeFlag;
    NSString *_headURL;
    NSString *_thumbURL;
    NSString *_title;
    NSString *_content;
    NSString *_timeString;
    unsigned long long _type;
    NSString *_objectTid;
    NSString *_refContent;
    NSString *_descriptionText;
    unsigned long long _mentionID;
    unsigned long long _refCommentID;
    NSString *_feedText;
    NSString *_nonceID;
    NSString *_username;
    WCFinderContact *_contact;
    NSArray *_aggregatedHeadURLArray;
    NSString *_suffixTitle;
    WCFinderMention *_mention;
    NSString *_accessibilityString;
    WCFinderAuthInfo *_authInfo;
    long long _uniType;
    id <WCFinderWechatMentionCellViewModelDelegate> _delegate;
    NSString *_showTitleString;
    NSString *_replyNickname;
    struct CGSize _cellSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showFollowButton; // @synthesize showFollowButton=_showFollowButton;
@property(copy, nonatomic) NSString *replyNickname; // @synthesize replyNickname=_replyNickname;
@property(copy, nonatomic) NSString *showTitleString; // @synthesize showTitleString=_showTitleString;
@property(nonatomic) __weak id <WCFinderWechatMentionCellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool magicPlayed; // @synthesize magicPlayed=_magicPlayed;
@property(nonatomic) unsigned int followMyFirstLikeFlag; // @synthesize followMyFirstLikeFlag=_followMyFirstLikeFlag;
@property(nonatomic) long long uniType; // @synthesize uniType=_uniType;
@property(retain, nonatomic) WCFinderAuthInfo *authInfo; // @synthesize authInfo=_authInfo;
@property(copy, nonatomic) NSString *accessibilityString; // @synthesize accessibilityString=_accessibilityString;
@property(retain, nonatomic) WCFinderMention *mention; // @synthesize mention=_mention;
@property(readonly, copy, nonatomic) NSString *suffixTitle; // @synthesize suffixTitle=_suffixTitle;
@property(readonly, copy, nonatomic) NSArray *aggregatedHeadURLArray; // @synthesize aggregatedHeadURLArray=_aggregatedHeadURLArray;
@property(readonly, nonatomic) _Bool isAggregated; // @synthesize isAggregated=_isAggregated;
@property(readonly, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(readonly, copy, nonatomic) NSString *feedText; // @synthesize feedText=_feedText;
@property(readonly, nonatomic) _Bool isPureText; // @synthesize isPureText=_isPureText;
@property(readonly, nonatomic) _Bool isCommentRelated; // @synthesize isCommentRelated=_isCommentRelated;
@property(readonly, nonatomic) unsigned long long refCommentID; // @synthesize refCommentID=_refCommentID;
@property(readonly, nonatomic) unsigned long long mentionID; // @synthesize mentionID=_mentionID;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *refContent; // @synthesize refContent=_refContent;
@property(readonly, nonatomic) _Bool isFinder; // @synthesize isFinder=_isFinder;
@property(readonly, nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(readonly, copy, nonatomic) NSString *objectTid; // @synthesize objectTid=_objectTid;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(readonly, copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *thumbURL; // @synthesize thumbURL=_thumbURL;
@property(readonly, copy, nonatomic) NSString *headURL; // @synthesize headURL=_headURL;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
- (void)onFinderDataItemDeleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 tid:(id)arg3;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)arg1 commentID:(unsigned long long)arg2 rootCommentID:(unsigned long long)arg3 likeStatus:(_Bool)arg4;
- (void)onFinderMention:(id)arg1 silentStateChangedTo:(_Bool)arg2;
- (void)onFinderMention:(id)arg1 replyCommentFailWithErrorMsg:(id)arg2;
- (void)onFinderMentionReplyCommentSuccess:(id)arg1;
- (void)onFinderMention:(id)arg1 commentLikeStatusChanged:(_Bool)arg2;
- (void)setCommentInvalid;
- (void)updateMentionCommentLikeStatus:(_Bool)arg1;
- (_Bool)shouldShowCommentInteraction;
- (unsigned long long)commentLikeIconTypeForReport;
- (_Bool)isValidCommentMention;
- (_Bool)isInvalidCommentMention;
- (unsigned long long)userTagType;
- (_Bool)ignoreIconShouldShow;
- (_Bool)followButtonShouldShow;
- (void)replyMentionCommentWithComment:(id)arg1;
- (void)modCommentLikeStatus:(_Bool)arg1;
- (unsigned long long)thankStyleForReport;
- (unsigned long long)thankTypeForReport;
- (id)mentionAccessibilityLabel;
- (id)calDisplayNameWithCommentDidsplayName:(id)arg1;
- (id)displayContentString;
- (id)getDisplayNameWithContact:(id)arg1;
- (id)getDisplayNameWithUsername:(id)arg1 nickName:(id)arg2;
- (id)ensureAuthInfo:(id)arg1;
- (id)getMentionTitleWithMention:(id)arg1 authInfo:(out id *)arg2;
- (id)getMentionedContentWithMention:(id)arg1;
- (id)titleModel;
- (id)magicAnimationIconPath;
- (unsigned long long)magicAnimationStyle;
- (_Bool)canShowMagicAnimation;
- (id)displayContentForMention:(id)arg1 originContent:(id)arg2 isCommentRelated:(_Bool)arg3;
- (double)cellHeightWithWidth:(double)arg1;
- (void)dealloc;
- (id)initWithMention:(id)arg1 cacheContainerWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

