//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderUniCommentMediaView, NSIndexPath, NSString, UIButton, UIColor, UIImageView, UIView, WCFinderComment, WCFinderFeedContentTextView;
@protocol TextStateSubCommentTableViewCellActionDelegate;

@interface TextStateSubCommentTableViewCell
{
    _Bool _isLastSectionCell;
    _Bool _wechatAccountProfileSwitch;
    _Bool _isFriendIdentity;
    _Bool _isFinderIdentity;
    _Bool _isSelfPost;
    id <TextStateSubCommentTableViewCellActionDelegate> _delegate;
    NSIndexPath *_currentIndexPath;
    UIColor *_themeColor;
    WCFinderFeedContentTextView *_textView;
    WCFinderComment *_comment;
    UIView *_backView;
    UIImageView *_finderIconImageView;
    UIButton *_failCommentTips;
    FinderUniCommentMediaView *_mediaView;
}

+ (struct CGSize)mediaViewSize;
+ (double)cellHeightWith:(id)arg1 width:(double)arg2 forceExpand:(_Bool)arg3;
+ (id)getContentWithComment:(id)arg1;
+ (_Bool)showMediaWithComment:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderUniCommentMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) _Bool isSelfPost; // @synthesize isSelfPost=_isSelfPost;
@property(nonatomic) _Bool isFinderIdentity; // @synthesize isFinderIdentity=_isFinderIdentity;
@property(nonatomic) _Bool isFriendIdentity; // @synthesize isFriendIdentity=_isFriendIdentity;
@property(nonatomic) _Bool wechatAccountProfileSwitch; // @synthesize wechatAccountProfileSwitch=_wechatAccountProfileSwitch;
@property(retain, nonatomic) UIButton *failCommentTips; // @synthesize failCommentTips=_failCommentTips;
@property(retain, nonatomic) UIImageView *finderIconImageView; // @synthesize finderIconImageView=_finderIconImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) WCFinderFeedContentTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool isLastSectionCell; // @synthesize isLastSectionCell=_isLastSectionCell;
@property(retain, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(nonatomic) __weak id <TextStateSubCommentTableViewCellActionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (void)onFeedContentTextView:(id)arg1 clickReplyUsername:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubCommentWeChat:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubComment:(id)arg2 withRect:(struct CGRect)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)onClickDislikeComment;
- (void)onClickLikeComment;
- (void)updateTopTitleLayout;
- (void)onFinderContactUpdate:(id)arg1;
- (_Bool)isContentTruncated;
- (void)updateAvatarCornerWithAuthorFlag:(_Bool)arg1;
- (void)showViewHighLightByRefComment;
- (void)clickAvatar;
- (id)backgroundColorInNormalMode;
- (void)showCommentMenuView;
- (void)longPress:(id)arg1;
- (void)updateWithComment:(id)arg1 enableShowFinder:(_Bool)arg2 isAuthor:(_Bool)arg3;
- (void)updateBottomViewLayout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)currentLinkColor;
- (void)setupUI;
- (struct CGSize)avatarSize;
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

