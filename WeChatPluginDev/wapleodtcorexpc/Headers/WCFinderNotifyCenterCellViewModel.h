//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderFollowReasonInfo, NSArray, NSString, WCFinderAuthInfo, WCFinderContact, WCFinderMention;
@protocol WCFinderNotifyCenterCellViewModelDelegate;

@interface WCFinderNotifyCenterCellViewModel : NSObject
{
    _Bool _isAuthor;
    _Bool _isFinder;
    _Bool _isCommentRelated;
    _Bool _canLink;
    _Bool _isPureText;
    _Bool _isAggregated;
    _Bool _shouldShowThanks;
    unsigned int _followFlag;
    unsigned int _thanked;
    id <WCFinderNotifyCenterCellViewModelDelegate> _delegate;
    double _cellHeight;
    unsigned long long _selectType;
    unsigned long long _memberSelectType;
    NSString *_headURL;
    NSString *_thumbURL;
    NSString *_title;
    NSString *_suffixTitle;
    NSString *_content;
    NSString *_timeString;
    unsigned long long _type;
    NSString *_objectTid;
    NSString *_refContent;
    NSString *_descriptionText;
    unsigned long long _mentionID;
    unsigned long long _refCommentID;
    unsigned long long _linkType;
    NSString *_linkURL;
    NSString *_miniAppName;
    NSString *_feedText;
    NSString *_nonceID;
    NSString *_username;
    WCFinderContact *_contact;
    NSString *_navigationTitle;
    NSArray *_aggregatedHeadURLArray;
    WCFinderMention *_mention;
    NSString *_reuseIdentifier;
    WCFinderAuthInfo *_authInfo;
    long long _uniType;
    NSString *_currentFinderUsername;
    unsigned long long _supportInteractionAction;
    struct CGSize _cellSize;
}

+ (id)notifyCenterCellRegisterInfo;
+ (id)placeholderViewModel;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long supportInteractionAction; // @synthesize supportInteractionAction=_supportInteractionAction;
@property(retain, nonatomic) NSString *currentFinderUsername; // @synthesize currentFinderUsername=_currentFinderUsername;
@property(nonatomic) unsigned int thanked; // @synthesize thanked=_thanked;
@property(nonatomic) _Bool shouldShowThanks; // @synthesize shouldShowThanks=_shouldShowThanks;
@property(nonatomic) unsigned int followFlag; // @synthesize followFlag=_followFlag;
@property(nonatomic) long long uniType; // @synthesize uniType=_uniType;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) WCFinderAuthInfo *authInfo; // @synthesize authInfo=_authInfo;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(readonly, nonatomic) WCFinderMention *mention; // @synthesize mention=_mention;
@property(readonly, copy, nonatomic) NSArray *aggregatedHeadURLArray; // @synthesize aggregatedHeadURLArray=_aggregatedHeadURLArray;
@property(readonly, nonatomic) _Bool isAggregated; // @synthesize isAggregated=_isAggregated;
@property(readonly, copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(readonly, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(readonly, copy, nonatomic) NSString *feedText; // @synthesize feedText=_feedText;
@property(readonly, nonatomic) _Bool isPureText; // @synthesize isPureText=_isPureText;
@property(readonly, copy, nonatomic) NSString *miniAppName; // @synthesize miniAppName=_miniAppName;
@property(readonly, copy, nonatomic) NSString *linkURL; // @synthesize linkURL=_linkURL;
@property(readonly, nonatomic) unsigned long long linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) _Bool canLink; // @synthesize canLink=_canLink;
@property(readonly, nonatomic) _Bool isCommentRelated; // @synthesize isCommentRelated=_isCommentRelated;
@property(readonly, nonatomic) unsigned long long refCommentID; // @synthesize refCommentID=_refCommentID;
@property(readonly, nonatomic) unsigned long long mentionID; // @synthesize mentionID=_mentionID;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *refContent; // @synthesize refContent=_refContent;
@property(readonly, nonatomic) _Bool isFinder; // @synthesize isFinder=_isFinder;
@property(readonly, nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(readonly, copy, nonatomic) NSString *objectTid; // @synthesize objectTid=_objectTid;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(readonly, copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *suffixTitle; // @synthesize suffixTitle=_suffixTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *thumbURL; // @synthesize thumbURL=_thumbURL;
@property(readonly, copy, nonatomic) NSString *headURL; // @synthesize headURL=_headURL;
@property(nonatomic) unsigned long long memberSelectType; // @synthesize memberSelectType=_memberSelectType;
@property(nonatomic) unsigned long long selectType; // @synthesize selectType=_selectType;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) __weak id <WCFinderNotifyCenterCellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemDeleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 tid:(id)arg3;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)arg1 commentID:(unsigned long long)arg2 rootCommentID:(unsigned long long)arg3 likeStatus:(_Bool)arg4;
- (void)onThankStateChanged:(_Bool)arg1 tid:(id)arg2 username:(id)arg3 interactionType:(long long)arg4;
- (void)onFinderMention:(id)arg1 silentStateChangedTo:(_Bool)arg2;
- (void)onFinderMention:(id)arg1 replyCommentFailWithErrorMsg:(id)arg2;
- (void)onFinderMentionReplyCommentSuccess:(id)arg1;
- (void)onFinderMention:(id)arg1 thankedStatusChanged:(_Bool)arg2;
- (void)onFinderMention:(id)arg1 commentLikeStatusChanged:(_Bool)arg2;
- (void)onPrivateAccountFollowApplyStateChanged:(_Bool)arg1;
- (id)titleModel;
- (_Bool)ignoreIconShouldShow;
- (_Bool)followButtonShouldShow;
- (unsigned long long)followApplyState;
- (unsigned long long)relationshipType;
- (_Bool)shouldShowCommentInteraction;
- (void)setCommentInvalid;
- (void)updateMentionCommentLikeStatus:(_Bool)arg1;
- (unsigned long long)commentLikeIconTypeForReport;
- (_Bool)isValidCommentMention;
- (unsigned long long)followReasonTypeForReport;
@property(readonly, nonatomic) FinderFollowReasonInfo *followReasonInfo;
- (_Bool)isFollowMembership;
- (unsigned long long)thankStatusForReport;
- (unsigned long long)thankStyleForReport;
- (unsigned long long)thankTypeForReport;
- (void)replyMentionCommentWithComment:(id)arg1;
- (void)modCommentLikeStatus:(_Bool)arg1;
- (void)modThanksState:(_Bool)arg1;
- (double)cellHeightWithWidth:(double)arg1;
- (int)finderObjectType;
- (void)acceptFollowApply;
- (id)getDisplayNameWithUsername:(id)arg1 nickName:(id)arg2;
- (id)ensureAuthInfo:(id)arg1;
- (id)getMentionTitleWithMention:(id)arg1 authInfo:(id *)arg2;
- (id)getSuffixTitleWithCount:(unsigned long long)arg1;
- (_Bool)isFollowMentionType;
- (void)recalucateCellCacheHeight:(double)arg1;
- (void)dealloc;
- (id)getDisplayContentWithMention:(id)arg1;
- (id)initWithMention:(id)arg1 finderUsername:(id)arg2 containerWidth:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

