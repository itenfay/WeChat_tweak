//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, MMWebImageView, NSLayoutConstraint, NSString, RichTextView, UIImageView, UILabel, UIView, WCFinderCustomImageRichTextView, WCFinderHeadImageView, WCFinderMentionTitleView, WCFinderWechatMentionCellViewModel;
@protocol WCFinderWechatMentionCellDelegate;

@interface WCFinderWechatMentionCell : UITableViewCell
{
    _Bool _needUpdateCellSize;
    id <WCFinderWechatMentionCellDelegate> _delegate;
    UIView *_highlightAnimBg;
    WCFinderHeadImageView *_headImageView;
    MMWebImageView *_thumbImageView;
    UIImageView *_ignoreIcon;
    WCFinderMentionTitleView *_titleView;
    WCFinderCustomImageRichTextView *_contentTextView;
    RichTextView *_refContentTextView;
    UIImageView *_interactImageView;
    UIView *_lineView;
    UIView *_refContentView;
    NSLayoutConstraint *_titleWidthConstraint;
    UIView *_refContentLineView;
    WCFinderWechatMentionCellViewModel *_viewModel;
    UIView *_mulityHeadImageView;
    WCFinderHeadImageView *_frontHeadImageView;
    WCFinderHeadImageView *_backHeadImageView;
    UILabel *_firstLikeLabel;
    MMUIButton *_commentDeleteLabel;
    UIView *_operateBtnContainer;
    MMUIButton *_commentReplyBtn;
    MMUIButton *_commentLikeBtn;
    MMUIButton *_aggregatedExpandBtn;
}

+ (double)titleMarginWithVM:(id)arg1;
+ (double)aggregatedExpandHeight;
+ (id)mentionInteractionBtnBgColor;
+ (double)mentionInteractionBtnTopMarginWithVM:(id)arg1;
+ (id)mentionInteractionBtnFont;
+ (struct CGSize)mentionInteractionIconSize;
+ (double)mentionInteractionBtnHeight;
+ (double)cellBottomMargin;
+ (_Bool)hasOverLineNumLimitWithContent:(id)arg1 vm:(id)arg2 width:(double)arg3;
+ (double)getRefContentHeightWithVM:(id)arg1 width:(double)arg2;
+ (double)calucateCellHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool needUpdateCellSize; // @synthesize needUpdateCellSize=_needUpdateCellSize;
@property(retain, nonatomic) MMUIButton *aggregatedExpandBtn; // @synthesize aggregatedExpandBtn=_aggregatedExpandBtn;
@property(retain, nonatomic) MMUIButton *commentLikeBtn; // @synthesize commentLikeBtn=_commentLikeBtn;
@property(retain, nonatomic) MMUIButton *commentReplyBtn; // @synthesize commentReplyBtn=_commentReplyBtn;
@property(retain, nonatomic) UIView *operateBtnContainer; // @synthesize operateBtnContainer=_operateBtnContainer;
@property(retain, nonatomic) MMUIButton *commentDeleteLabel; // @synthesize commentDeleteLabel=_commentDeleteLabel;
@property(nonatomic) __weak UILabel *firstLikeLabel; // @synthesize firstLikeLabel=_firstLikeLabel;
@property(nonatomic) __weak WCFinderHeadImageView *backHeadImageView; // @synthesize backHeadImageView=_backHeadImageView;
@property(nonatomic) __weak WCFinderHeadImageView *frontHeadImageView; // @synthesize frontHeadImageView=_frontHeadImageView;
@property(nonatomic) __weak UIView *mulityHeadImageView; // @synthesize mulityHeadImageView=_mulityHeadImageView;
@property(retain, nonatomic) WCFinderWechatMentionCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UIView *refContentLineView; // @synthesize refContentLineView=_refContentLineView;
@property(retain, nonatomic) NSLayoutConstraint *titleWidthConstraint; // @synthesize titleWidthConstraint=_titleWidthConstraint;
@property(nonatomic) __weak UIView *refContentView; // @synthesize refContentView=_refContentView;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIImageView *interactImageView; // @synthesize interactImageView=_interactImageView;
@property(nonatomic) __weak RichTextView *refContentTextView; // @synthesize refContentTextView=_refContentTextView;
@property(nonatomic) __weak WCFinderCustomImageRichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) WCFinderMentionTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *ignoreIcon; // @synthesize ignoreIcon=_ignoreIcon;
@property(nonatomic) __weak MMWebImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) __weak WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *highlightAnimBg; // @synthesize highlightAnimBg=_highlightAnimBg;
@property(nonatomic) __weak id <WCFinderWechatMentionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didClickMulityHeadImageView;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onWechatMentionSilentStateChanged;
- (void)onWechatMentionCellViewModelCellHeightChanged:(id)arg1;
- (void)onWechatMentionCellViewModelCommentInvalidStateChanged;
- (void)onWechatMentionCellViewModelCommentLikeStateChanged;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onMentionTitleViewClickUserRelationshipTag:(id)arg1;
- (void)onMentionTitleViewClickFollowButton:(id)arg1;
- (void)clickAggregatedExpandButton;
- (void)clickCommentLikeButton;
- (void)clickCommentReplyButton;
- (struct CGRect)getThankMagicAnimIconFrame;
- (id)accessibilityLabel;
- (void)cancelHighlightAnimation;
- (void)showHighlightAnimation;
- (void)updateSeperatorFull:(_Bool)arg1;
- (void)setUpViewLayout;
- (void)setupRefContentView;
- (void)setUpMulityImageView;
- (void)setupOperateBtnContainer;
- (void)setUpUI;
- (void)layoutOperateBtnContainer;
- (void)layoutUIWithViewModel:(id)arg1 width:(double)arg2;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)setNeedsUpdateCellSize;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

