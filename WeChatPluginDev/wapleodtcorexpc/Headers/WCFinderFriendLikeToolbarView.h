//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIView, WCFinderCustomImageRichTextView, WCFinderDynamicRichTextView, WCFinderFeedContentVM;
@protocol WCFinderFriendLikeToolbarViewDelegate;

@interface WCFinderFriendLikeToolbarView
{
    _Bool _onlyShowRecommendReason;
    _Bool _isLikeAnimating;
    _Bool _isRuningCompletionBlock;
    id <WCFinderFriendLikeToolbarViewDelegate> _delegate;
    WCFinderDynamicRichTextView *_likeInfoTextView;
    WCFinderDynamicRichTextView *_appendTisTextView;
    WCFinderCustomImageRichTextView *_suffixTipsTextView;
    UIView *_avatorContainerView;
    WCFinderFeedContentVM *_contentVM;
    UIView *_gestureView;
    NSMutableArray *_roundHeaderViews;
    long long _likeCount;
    long long _likeCountHash;
    long long _incFriendLikeCount;
    struct CGSize _lastLayoutSize;
}

+ (id)getDisplayCommentInfo:(id)arg1;
+ (id)calDisplayNameWithCommentDidsplayName:(id)arg1;
+ (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2 headerViewSize:(struct CGSize)arg3;
+ (double)cellHeightWithContentVM:(id)arg1 isDisplayRecommend:(_Bool)arg2 hideFriendLikeInfo:(_Bool)arg3 onlyShowRecommendReason:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) long long incFriendLikeCount; // @synthesize incFriendLikeCount=_incFriendLikeCount;
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(nonatomic) _Bool isRuningCompletionBlock; // @synthesize isRuningCompletionBlock=_isRuningCompletionBlock;
@property(nonatomic) long long likeCountHash; // @synthesize likeCountHash=_likeCountHash;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool isLikeAnimating; // @synthesize isLikeAnimating=_isLikeAnimating;
@property(retain, nonatomic) NSMutableArray *roundHeaderViews; // @synthesize roundHeaderViews=_roundHeaderViews;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIView *avatorContainerView; // @synthesize avatorContainerView=_avatorContainerView;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *suffixTipsTextView; // @synthesize suffixTipsTextView=_suffixTipsTextView;
@property(retain, nonatomic) WCFinderDynamicRichTextView *appendTisTextView; // @synthesize appendTisTextView=_appendTisTextView;
@property(retain, nonatomic) WCFinderDynamicRichTextView *likeInfoTextView; // @synthesize likeInfoTextView=_likeInfoTextView;
@property(nonatomic) _Bool onlyShowRecommendReason; // @synthesize onlyShowRecommendReason=_onlyShowRecommendReason;
@property(nonatomic) __weak id <WCFinderFriendLikeToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (_Bool)isInsertSelfAvatarAtRight;
- (id)createOneSelfAvatarView;
- (struct CGRect)getSelfAvatarViewFrameOnFullView;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onTextViewClickText:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)insetSelfHeaderView:(id)arg1 toRoundHeaderViews:(id)arg2;
- (void)onFeedContent:(id)arg1 likedDataUpdateByUserAction:(id)arg2 likeFlag:(int)arg3;
- (double)headerViewSize;
- (double)headerViewMargin;
- (void)goToFriendLikeListDetail;
- (void)openWeChatProfileByUsername:(id)arg1;
- (void)onClickToolBarAction;
- (void)didClickFriendGesture:(id)arg1;
- (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2;
- (void)onClickFollowLikeButton:(id)arg1;
- (double)likeTextFieldOriginX:(long long)arg1;
- (void)updateLikeInfoTextViewWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2 leftAndRightPadding:(double)arg3 topAndBottomPadding:(double)arg4;
- (_Bool)showShadowTextRecommend;
- (void)layoutTextViewsWithLikeInfoLeft:(double)arg1;
- (void)updateTextViewStateWithLeftNicknameTips:(id)arg1 appendTips:(id)arg2 suffixTips:(id)arg3 incFriendLikeCount:(long long)arg4;
- (_Bool)updateWithContentVM:(id)arg1 isDisplayRecommend:(_Bool)arg2 hideFriendLikeInfo:(_Bool)arg3 disPlayFollowLikeBtn:(_Bool)arg4;
- (id)getSuffixRecommendTipsWithContentVM:(id)arg1;
- (id)createLikeTextString;
- (void)unRegisterAllKeyExtension;
- (void)updateSubviewsStyle;
- (id)createAccessibilityContentNicknameTips:(id)arg1 appendTips:(id)arg2 incFriendLikeCount:(long long)arg3;
- (void)updateUIMargin;
- (void)initSubView;
- (void)resetHeaderViewsAndLikeCount;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

