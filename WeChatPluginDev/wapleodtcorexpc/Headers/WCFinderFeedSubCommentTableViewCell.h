//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSIndexPath, NSMutableArray, NSString, UIAccessibilityElement, UIButton, UIImageView, UILabel, UIView, WCFinderCommentLikeView, WCFinderCommentTranslateView, WCFinderFeedContentTextView, WCFinderFeedSubCommentCellStyleConfig, WCFinderHeadImageView, WCFinderInteractionLabelGroupView;
@protocol WCFinderFeedDetailCommentCellActionDelegate;

@interface WCFinderFeedSubCommentTableViewCell
{
    multimap_b3919d51 _keywordsMap;
    _Bool _wechatAccountProfileSwitch;
    _Bool _isFriendIdentity;
    _Bool _isFinderIdentity;
    _Bool _enableShowFinder;
    _Bool _isCommentClose;
    id <WCFinderFeedDetailCommentCellActionDelegate> _delegate;
    NSIndexPath *_currentIndexPath;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_timeAndIpRegionLabel;
    UILabel *_nickNameLabel;
    WCFinderFeedContentTextView *_textView;
    UIView *_backView;
    UIImageView *_finderIconImageView;
    UILabel *_additionalInfoLabel;
    WCFinderInteractionLabelGroupView *_nicknameTailLabel;
    WCFinderInteractionLabelGroupView *_bottomInteractLabel;
    UIView *_hightLightView;
    UIButton *_failCommentTips;
    double _timeLabelMinWidth;
    WCFinderCommentLikeView *_commentLikeView;
    UILabel *_authorLikeLabel;
    MMUIButton *_moreActionButton;
    WCFinderFeedSubCommentCellStyleConfig *_config;
    NSMutableArray *_accessibilityElements;
    UIAccessibilityElement *_likeAccessibility;
    WCFinderCommentTranslateView *_translateView;
}

+ (double)textViewMaxWidthWithFullWidth:(double)arg1 config:(id)arg2;
+ (double)cellHeightWith:(id)arg1 width:(double)arg2 forceExpand:(_Bool)arg3 config:(id)arg4;
+ (double)cellHeightWith:(id)arg1 width:(double)arg2 forceExpand:(_Bool)arg3;
+ (id)getContentWithComment:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCommentTranslateView *translateView; // @synthesize translateView=_translateView;
@property(retain, nonatomic) UIAccessibilityElement *likeAccessibility; // @synthesize likeAccessibility=_likeAccessibility;
@property(retain, nonatomic) NSMutableArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(retain, nonatomic) WCFinderFeedSubCommentCellStyleConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) MMUIButton *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(retain, nonatomic) UILabel *authorLikeLabel; // @synthesize authorLikeLabel=_authorLikeLabel;
@property(retain, nonatomic) WCFinderCommentLikeView *commentLikeView; // @synthesize commentLikeView=_commentLikeView;
@property(nonatomic) double timeLabelMinWidth; // @synthesize timeLabelMinWidth=_timeLabelMinWidth;
@property(nonatomic) _Bool isCommentClose; // @synthesize isCommentClose=_isCommentClose;
@property(nonatomic) _Bool enableShowFinder; // @synthesize enableShowFinder=_enableShowFinder;
@property(nonatomic) _Bool isFinderIdentity; // @synthesize isFinderIdentity=_isFinderIdentity;
@property(nonatomic) _Bool isFriendIdentity; // @synthesize isFriendIdentity=_isFriendIdentity;
@property(nonatomic) _Bool wechatAccountProfileSwitch; // @synthesize wechatAccountProfileSwitch=_wechatAccountProfileSwitch;
@property(retain, nonatomic) UIButton *failCommentTips; // @synthesize failCommentTips=_failCommentTips;
@property(retain, nonatomic) UIView *hightLightView; // @synthesize hightLightView=_hightLightView;
@property(retain, nonatomic) WCFinderInteractionLabelGroupView *bottomInteractLabel; // @synthesize bottomInteractLabel=_bottomInteractLabel;
@property(retain, nonatomic) WCFinderInteractionLabelGroupView *nicknameTailLabel; // @synthesize nicknameTailLabel=_nicknameTailLabel;
@property(retain, nonatomic) UILabel *additionalInfoLabel; // @synthesize additionalInfoLabel=_additionalInfoLabel;
@property(retain, nonatomic) UIImageView *finderIconImageView; // @synthesize finderIconImageView=_finderIconImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) WCFinderFeedContentTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *timeAndIpRegionLabel; // @synthesize timeAndIpRegionLabel=_timeAndIpRegionLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(nonatomic) __weak id <WCFinderFeedDetailCommentCellActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateCommentLikeState;
- (id)getGeneralMonitorCellBizId;
- (id)findAllExposedKeywordUrls;
- (id)_totalAccessibilityLabel;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)onFeedContentTextView:(id)arg1 clickReplyUsername:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubCommentWeChat:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubComment:(id)arg2 withRect:(struct CGRect)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)onFeedContentTextView:(id)arg1 clickKeywordUrl:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)onClickMoreAction;
- (void)onClickLikeComment;
- (void)updateLayout;
- (void)updateInteractionButtonLayout;
- (void)updateTopTitleLayout;
- (void)onFinderContactUpdate:(id)arg1;
- (void)showRecommendButtonAnimation;
- (_Bool)isContentTruncated;
- (void)updateAvatarCornerWithAuthorFlag:(_Bool)arg1;
- (void)showViewHighLightByRefComment;
- (void)clickFriendLikeAction;
- (void)clickRecommendFriendUsername:(id)arg1;
- (void)recommendViewDataChange;
- (void)updateRecommendView;
- (void)clickRecommendAction;
- (void)clickNickname;
- (void)clickAvatar;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showCommentMenuView;
- (void)longPress:(id)arg1;
- (void)updateVoiceOver;
- (void)updateWithComment:(id)arg1 enableShowFinder:(_Bool)arg2 isCommentClose:(_Bool)arg3 isAuthor:(_Bool)arg4 config:(id)arg5;
- (void)updateWithComment:(id)arg1 enableShowFinder:(_Bool)arg2 isCommentClose:(_Bool)arg3 isAuthor:(_Bool)arg4;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void *)keywordsMap;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

