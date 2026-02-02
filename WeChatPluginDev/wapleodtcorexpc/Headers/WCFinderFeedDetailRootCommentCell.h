//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableArray, NSString, UIAccessibilityElement, UIButton, UIColor, UIImageView, UILabel, UITapGestureRecognizer, UIView, WCFinderCommentLikeView, WCFinderCommentTranslateView, WCFinderDataItem, WCFinderFeedContentTextView, WCFinderHeadImageView, WCFinderInteractionLabelGroupView, WCFinderJumpInfoPanelView, WCFinderTemplateVideoCommentView;
@protocol WCFinderFeedDetailRootCommentCellDelegate;

@interface WCFinderFeedDetailRootCommentCell
{
    multimap_b3919d51 _keywordsMap;
    _Bool _profileSwitch;
    _Bool _isFriendIdentity;
    _Bool _isFinderIdentity;
    _Bool _enableShowFinder;
    _Bool _isCommentClose;
    id <WCFinderFeedDetailRootCommentCellDelegate> _delegate;
    double _avatarLeftMargin;
    UIColor *_customBackgroundColor;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_timeAndIpRegionLabel;
    UILabel *_nickNameLabel;
    WCFinderFeedContentTextView *_textView;
    WCFinderCommentLikeView *_commentLikeView;
    UITapGestureRecognizer *_replayTapGestureRecognizer;
    UILabel *_setTopLabel;
    UILabel *_authorLikeLabel;
    UIImageView *_finderIconImageView;
    UILabel *_additionalInfoLabel;
    WCFinderInteractionLabelGroupView *_nicknameTailLabel;
    WCFinderInteractionLabelGroupView *_bottomInteractLabel;
    UIButton *_failCommentTips;
    UIView *_refContentBackgroundView;
    UIView *_highLightView;
    WCFinderFeedContentTextView *_refContentTextView;
    UIView *_refContentLineView;
    MMUIButton *_moreActionButton;
    double _timeLabelMinWidth;
    WCFinderTemplateVideoCommentView *_templateCommentView;
    NSMutableArray *_accessibilityElements;
    WCFinderDataItem *_bindDataItem;
    WCFinderJumpInfoPanelView *_bottomRefJumpinfoPanel;
    UIAccessibilityElement *_likeAccessibility;
    WCFinderCommentTranslateView *_translateView;
}

+ (id)getReplyContentWithComment:(id)arg1 isAuthorView:(_Bool)arg2;
+ (double)sectionHeightWith:(id)arg1 width:(double)arg2 forceExpand:(_Bool)arg3 isAuthorView:(_Bool)arg4 avatarLeftMargin:(double)arg5;
+ (double)sectionHeightWith:(id)arg1 width:(double)arg2 forceExpand:(_Bool)arg3 isAuthorView:(_Bool)arg4;
+ (double)textViewMaxWidthWith:(double)arg1 avatarLeftMargin:(double)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCommentTranslateView *translateView; // @synthesize translateView=_translateView;
@property(retain, nonatomic) UIAccessibilityElement *likeAccessibility; // @synthesize likeAccessibility=_likeAccessibility;
@property(retain, nonatomic) WCFinderJumpInfoPanelView *bottomRefJumpinfoPanel; // @synthesize bottomRefJumpinfoPanel=_bottomRefJumpinfoPanel;
@property(retain, nonatomic) WCFinderDataItem *bindDataItem; // @synthesize bindDataItem=_bindDataItem;
@property(retain, nonatomic) NSMutableArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(retain, nonatomic) WCFinderTemplateVideoCommentView *templateCommentView; // @synthesize templateCommentView=_templateCommentView;
@property(nonatomic) double timeLabelMinWidth; // @synthesize timeLabelMinWidth=_timeLabelMinWidth;
@property(nonatomic) _Bool isCommentClose; // @synthesize isCommentClose=_isCommentClose;
@property(retain, nonatomic) MMUIButton *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(nonatomic) _Bool enableShowFinder; // @synthesize enableShowFinder=_enableShowFinder;
@property(nonatomic) _Bool isFinderIdentity; // @synthesize isFinderIdentity=_isFinderIdentity;
@property(nonatomic) _Bool isFriendIdentity; // @synthesize isFriendIdentity=_isFriendIdentity;
@property(nonatomic) _Bool profileSwitch; // @synthesize profileSwitch=_profileSwitch;
@property(nonatomic) __weak UIView *refContentLineView; // @synthesize refContentLineView=_refContentLineView;
@property(retain, nonatomic) WCFinderFeedContentTextView *refContentTextView; // @synthesize refContentTextView=_refContentTextView;
@property(retain, nonatomic) UIView *highLightView; // @synthesize highLightView=_highLightView;
@property(retain, nonatomic) UIView *refContentBackgroundView; // @synthesize refContentBackgroundView=_refContentBackgroundView;
@property(retain, nonatomic) UIButton *failCommentTips; // @synthesize failCommentTips=_failCommentTips;
@property(retain, nonatomic) WCFinderInteractionLabelGroupView *bottomInteractLabel; // @synthesize bottomInteractLabel=_bottomInteractLabel;
@property(retain, nonatomic) WCFinderInteractionLabelGroupView *nicknameTailLabel; // @synthesize nicknameTailLabel=_nicknameTailLabel;
@property(retain, nonatomic) UILabel *additionalInfoLabel; // @synthesize additionalInfoLabel=_additionalInfoLabel;
@property(retain, nonatomic) UIImageView *finderIconImageView; // @synthesize finderIconImageView=_finderIconImageView;
@property(retain, nonatomic) UILabel *authorLikeLabel; // @synthesize authorLikeLabel=_authorLikeLabel;
@property(retain, nonatomic) UILabel *setTopLabel; // @synthesize setTopLabel=_setTopLabel;
@property(retain, nonatomic) UITapGestureRecognizer *replayTapGestureRecognizer; // @synthesize replayTapGestureRecognizer=_replayTapGestureRecognizer;
@property(retain, nonatomic) WCFinderCommentLikeView *commentLikeView; // @synthesize commentLikeView=_commentLikeView;
@property(retain, nonatomic) WCFinderFeedContentTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *timeAndIpRegionLabel; // @synthesize timeAndIpRegionLabel=_timeAndIpRegionLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) double avatarLeftMargin; // @synthesize avatarLeftMargin=_avatarLeftMargin;
@property(nonatomic) __weak id <WCFinderFeedDetailRootCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateCommentLikeState;
- (id)bottomRefJumpInfoArray;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (id)getGeneralMonitorCellBizId;
- (id)findAllExposedKeywordUrls;
- (id)_totalAccessibilityLabel;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)templateVideoCommentViewDidJoinMusicBtn:(id)arg1;
- (void)templateVideoCommentView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)templateVideoCommentViewDidJoinTopicBtn:(id)arg1;
- (void)templateVideoCommentViewDidCutSameBtn:(id)arg1;
- (void)templateVideoCommentViewDidClickPreview:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickReplyUsername:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubCommentWeChat:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubComment:(id)arg2 withRect:(struct CGRect)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)onFeedContentTextView:(id)arg1 clickKeywordUrl:(id)arg2;
- (void)onFeedContentTextClick:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)showCommentMenuView;
- (void)longPress:(id)arg1;
- (void)clickRetryCommentAction;
- (void)clickNickname;
- (void)clickAvatar;
- (void)clickFriendLikeAction;
- (void)clickRecommendFriendUsername:(id)arg1;
- (void)recommendViewDataChange;
- (void)updateRecommendView;
- (void)clickRecommendAction;
- (void)onClickMoreAction;
- (void)onClickLikeComment;
- (void)onFinderContactUpdate:(id)arg1;
- (unsigned long long)section;
- (int)commentScene;
- (void)showViewHighLightByRefComment;
- (void)prepareForReuse;
- (void)updateAvatarCornerWithAuthorFlag:(_Bool)arg1;
- (void)updateInteractionButtonLayout;
- (void)adjustUILayout;
- (void)adjustNickNameLabelWidth;
- (void)updateVoiceOver;
- (void)showRecommendButtonAnimation;
- (void)updateWithModel:(id)arg1 width:(double)arg2 isAuthorView:(_Bool)arg3 isCommentClose:(_Bool)arg4 enableShowFinder:(_Bool)arg5 isSelfPost:(_Bool)arg6 bindDataItem:(id)arg7;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUpRefContentView;
- (id)gen25496ReportDict;
- (void)setUpUI;
- (void *)keywordsMap;
- (_Bool)isContentTruncated;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

