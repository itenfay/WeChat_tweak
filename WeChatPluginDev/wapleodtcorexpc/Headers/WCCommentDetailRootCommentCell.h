//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderUniCommentMediaView, MMUIButton, NSString, UIButton, UIColor, UIImageView, UITapGestureRecognizer, UIView, WCCommentLikeView, WCFinderComment, WCFinderFeedContentTextView;
@protocol WCCommentDetailRootCommentCellDelegate;

@interface WCCommentDetailRootCommentCell
{
    _Bool _profileSwitch;
    _Bool _isFriendIdentity;
    _Bool _isFinderIdentity;
    _Bool _isSelfPost;
    id <WCCommentDetailRootCommentCellDelegate> _delegate;
    UIColor *_themeColor;
    WCFinderFeedContentTextView *_textView;
    WCFinderComment *_comment;
    WCCommentLikeView *_dislikeView;
    UITapGestureRecognizer *_replayTapGestureRecognizer;
    UIImageView *_finderIconImageView;
    UIButton *_failCommentTips;
    UIView *_refContentBackgroundView;
    WCFinderFeedContentTextView *_refContentTextView;
    UIView *_refContentLineView;
    MMUIButton *_moreActionButton;
    FinderUniCommentMediaView *_mediaView;
}

+ (struct CGSize)mediaViewSize;
+ (double)sectionHeightWith:(id)arg1 width:(double)arg2 forceExpand:(_Bool)arg3 isAuthorView:(_Bool)arg4;
+ (_Bool)showMediaWithComment:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderUniCommentMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) _Bool isSelfPost; // @synthesize isSelfPost=_isSelfPost;
@property(retain, nonatomic) MMUIButton *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(nonatomic) _Bool isFinderIdentity; // @synthesize isFinderIdentity=_isFinderIdentity;
@property(nonatomic) _Bool isFriendIdentity; // @synthesize isFriendIdentity=_isFriendIdentity;
@property(nonatomic) _Bool profileSwitch; // @synthesize profileSwitch=_profileSwitch;
@property(nonatomic) __weak UIView *refContentLineView; // @synthesize refContentLineView=_refContentLineView;
@property(retain, nonatomic) WCFinderFeedContentTextView *refContentTextView; // @synthesize refContentTextView=_refContentTextView;
@property(retain, nonatomic) UIView *refContentBackgroundView; // @synthesize refContentBackgroundView=_refContentBackgroundView;
@property(retain, nonatomic) UIButton *failCommentTips; // @synthesize failCommentTips=_failCommentTips;
@property(retain, nonatomic) UIImageView *finderIconImageView; // @synthesize finderIconImageView=_finderIconImageView;
@property(retain, nonatomic) UITapGestureRecognizer *replayTapGestureRecognizer; // @synthesize replayTapGestureRecognizer=_replayTapGestureRecognizer;
@property(retain, nonatomic) WCCommentLikeView *dislikeView; // @synthesize dislikeView=_dislikeView;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) WCFinderFeedContentTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
@property(nonatomic) __weak id <WCCommentDetailRootCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (void)onFeedContentTextView:(id)arg1 clickReplyUsername:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubCommentWeChat:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubComment:(id)arg2 withRect:(struct CGRect)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFeedContentTextClick:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)showCommentMenuView;
- (void)longPress:(id)arg1;
- (void)clickRetryCommentAction;
- (void)clickAvatar;
- (void)onClickMoreAction;
- (void)onClickDislikeComment;
- (void)onClickLikeComment;
- (void)onFinderContactUpdate:(id)arg1;
- (void)showViewHighLightByRefComment;
- (void)prepareForReuse;
- (id)backgroundColorInNormalMode;
- (void)updateAvatarCornerWithAuthorFlag:(_Bool)arg1;
- (void)adjustUILayout;
- (void)adjustNickNameLabelWidth;
- (void)updateWithModel:(id)arg1 width:(double)arg2 isAuthorView:(_Bool)arg3 isCommentClose:(_Bool)arg4 enableShowFinder:(_Bool)arg5 isSelfPost:(_Bool)arg6;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUpRefContentView;
- (void)setupUI;
- (_Bool)isContentTruncated;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)authorColor;
- (id)defaultThemeColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

