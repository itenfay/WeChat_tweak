//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, MMWebImageView, NSString, RichTextView, UIImageView, UILabel, UIView, WCFinderHeadImageView, WCFinderMentionTitleView, WCFinderNotifyCenterCellViewModel, WCFinderThanksButton, WCFinderUserRelationshipTag;
@protocol WCFinderNotifyUnifiedCellDelegate;

@interface WCFinderNotifyUnifiedTableViewCell : UITableViewCell
{
    _Bool _hasBottomButton;
    _Bool _needUpdateCellSize;
    WCFinderNotifyCenterCellViewModel *_viewModel;
    id <WCFinderNotifyUnifiedCellDelegate> _delegate;
    WCFinderMentionTitleView *_titleView;
    MMWebImageView *_thumbImageView;
    RichTextView *_pureTextView;
    UIView *_refContentView;
    RichTextView *_refContentTextView;
    UIView *_highlightAnimBg;
    WCFinderHeadImageView *_headImageView;
    UIView *_mulityHeadImageView;
    WCFinderHeadImageView *_frontHeadImageView;
    WCFinderHeadImageView *_backHeadImageView;
    UIView *_lineView;
    UIView *_pureTextBackGroundView;
    UIView *_refContentLineView;
    WCFinderThanksButton *_thanksButton;
    UIView *_bottomBtnContainer;
    MMUIButton *_commentReplyBtn;
    MMUIButton *_commentLikeBtn;
    MMUIButton *_aggregatedExpandBtn;
    UIImageView *_ignoreIcon;
    WCFinderUserRelationshipTag *_userTag;
    UILabel *_feedTypeTag;
    double _cacheWidth;
}

+ (double)thumbRightMargin;
+ (double)thumbLeftMarginWithVM:(id)arg1;
+ (id)mentionInteractionBtnBgColor;
+ (struct UIEdgeInsets)mentionInteractionBtnInset;
+ (id)mentionInteractionBtnFont;
+ (double)mentionInteractionBtnTopMargin;
+ (struct CGSize)mentionInteractionIconSize;
+ (double)commentInteractionBtnHeight;
+ (double)cellBottomMarginWithVM:(id)arg1;
+ (double)aggregatedExpandHeight;
+ (double)thankBtnHeight;
+ (double)getRefContentHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (double)getTextMaxWidthWithVM:(id)arg1 fullWidth:(double)arg2;
+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (double)getPlaceholderHeightWithWidth:(double)arg1;
+ (_Bool)shouldShowMembership;
+ (_Bool)shouldShowFollowMeLabel;
+ (_Bool)shouldShowRefContentWithViewModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double cacheWidth; // @synthesize cacheWidth=_cacheWidth;
@property(retain, nonatomic) UILabel *feedTypeTag; // @synthesize feedTypeTag=_feedTypeTag;
@property(retain, nonatomic) WCFinderUserRelationshipTag *userTag; // @synthesize userTag=_userTag;
@property(nonatomic) _Bool needUpdateCellSize; // @synthesize needUpdateCellSize=_needUpdateCellSize;
@property(retain, nonatomic) UIImageView *ignoreIcon; // @synthesize ignoreIcon=_ignoreIcon;
@property(retain, nonatomic) MMUIButton *aggregatedExpandBtn; // @synthesize aggregatedExpandBtn=_aggregatedExpandBtn;
@property(retain, nonatomic) MMUIButton *commentLikeBtn; // @synthesize commentLikeBtn=_commentLikeBtn;
@property(retain, nonatomic) MMUIButton *commentReplyBtn; // @synthesize commentReplyBtn=_commentReplyBtn;
@property(retain, nonatomic) UIView *bottomBtnContainer; // @synthesize bottomBtnContainer=_bottomBtnContainer;
@property(nonatomic) __weak WCFinderThanksButton *thanksButton; // @synthesize thanksButton=_thanksButton;
@property(nonatomic) __weak UIView *refContentLineView; // @synthesize refContentLineView=_refContentLineView;
@property(nonatomic) __weak UIView *pureTextBackGroundView; // @synthesize pureTextBackGroundView=_pureTextBackGroundView;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak WCFinderHeadImageView *backHeadImageView; // @synthesize backHeadImageView=_backHeadImageView;
@property(nonatomic) __weak WCFinderHeadImageView *frontHeadImageView; // @synthesize frontHeadImageView=_frontHeadImageView;
@property(nonatomic) __weak UIView *mulityHeadImageView; // @synthesize mulityHeadImageView=_mulityHeadImageView;
@property(nonatomic) __weak WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *highlightAnimBg; // @synthesize highlightAnimBg=_highlightAnimBg;
@property(nonatomic) _Bool hasBottomButton; // @synthesize hasBottomButton=_hasBottomButton;
@property(nonatomic) __weak RichTextView *refContentTextView; // @synthesize refContentTextView=_refContentTextView;
@property(nonatomic) __weak UIView *refContentView; // @synthesize refContentView=_refContentView;
@property(nonatomic) __weak RichTextView *pureTextView; // @synthesize pureTextView=_pureTextView;
@property(nonatomic) __weak MMWebImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) WCFinderMentionTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <WCFinderNotifyUnifiedCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderNotifyCenterCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onMentionCommentReplyErrorWithMsg:(id)arg1;
- (void)onMentionCommentReplySuccess;
- (void)onMentionCommentInvalidStateChanged;
- (void)onMentionSilentStateChanged;
- (void)onMentionCommentLikeStateChanged;
- (void)onMentionThankStateChanged;
- (void)viewModelCellHeightChanged:(id)arg1;
- (int)viewModelCommentScene:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onMentionTitleViewClickFollowButton:(id)arg1;
- (void)onMentionTitleViewClickUserRelationshipTag:(id)arg1;
- (void)clickCommentLikeButton;
- (void)clickCommentReplyButton;
- (void)clickAggregatedExpandButton;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)arg1;
- (void)onThanksButtonClickedWithThanksState:(_Bool)arg1;
- (struct CGRect)thanksIconFrame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutBottomBtnContainer;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)setNeedsUpdateCellSize;
- (void)cancelHighlightAnimation;
- (void)showHighlightAnimation;
- (void)updateSeperatorFull:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUpViewLayout;
- (void)setUpPureTextView;
- (void)setupRefContentView;
- (void)setUpMulityImageView;
- (void)setupBottomBtnContainer;
- (void)setUpUI;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

