//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMHeadImageView, MMImageView, MMUIButton, NSString, RichTextView, UILabel, UIView, UIVisualEffectView, WCStoryComment;
@protocol WCStoryBubbleHeadViewDelegate;

@interface WCStoryBubbleHeadView
{
    _Bool _isUnread;
    _Bool _shouldShowUnreadVideoMark;
    _Bool _userForBubbleAnimation;
    _Bool _hasUnreadVideoMark;
    _Bool _functionBtnHidden;
    MMHeadImageView *_headImageView;
    RichTextView *_commentLabel;
    MMCPLabel *_usernameLabel;
    MMUIButton *_backGroundView;
    UIView *_unreadColorView;
    id <WCStoryBubbleHeadViewDelegate> _delegate;
    WCStoryComment *_comment;
    MMImageView *_unreadVideoMarkView;
    MMUIButton *_deleteBtn;
    MMUIButton *_replyBtn;
    UIVisualEffectView *_blurEffectView;
    UILabel *_colonLabel;
}

+ (id)displayContentOfComment:(id)arg1;
+ (double)heightForComment:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *colonLabel; // @synthesize colonLabel=_colonLabel;
@property(nonatomic) __weak UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(nonatomic) __weak MMUIButton *replyBtn; // @synthesize replyBtn=_replyBtn;
@property(nonatomic) __weak MMUIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(nonatomic) _Bool functionBtnHidden; // @synthesize functionBtnHidden=_functionBtnHidden;
@property(nonatomic) _Bool hasUnreadVideoMark; // @synthesize hasUnreadVideoMark=_hasUnreadVideoMark;
@property(retain, nonatomic) MMImageView *unreadVideoMarkView; // @synthesize unreadVideoMarkView=_unreadVideoMarkView;
@property(nonatomic) _Bool userForBubbleAnimation; // @synthesize userForBubbleAnimation=_userForBubbleAnimation;
@property(nonatomic) _Bool shouldShowUnreadVideoMark; // @synthesize shouldShowUnreadVideoMark=_shouldShowUnreadVideoMark;
@property(nonatomic) _Bool isUnread; // @synthesize isUnread=_isUnread;
@property(retain, nonatomic) WCStoryComment *comment; // @synthesize comment=_comment;
@property(nonatomic) __weak id <WCStoryBubbleHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *unreadColorView; // @synthesize unreadColorView=_unreadColorView;
@property(retain, nonatomic) MMUIButton *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(retain, nonatomic) MMCPLabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) RichTextView *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)onSetUnreadStoryMarkWithUserName:(id)arg1;
- (id)getBlurEffectViewMaskLayer;
- (id)getHeadImageViewMaskLayer;
- (void)onReplyBtnDidClick:(id)arg1;
- (void)onDeleteBtnDidClick:(id)arg1;
- (void)onBlurEffectViewDidClick;
- (void)onHeadImageViewClick:(id)arg1;
- (void)onHeadImageViewDoubleClick:(id)arg1;
- (void)updateFunctionalBtnState;
- (void)setRightFunctionalBtnHidden:(_Bool)arg1;
- (double)getHeaderBlurEffectViewCornerRadius;
- (void)clickToShowCommentList;
- (void)reloadView;
- (void)updateVoiceOverState;
- (void)updateUnreadVideoMark;
- (id)getUserLabelText;
- (void)configReplyBtn;
- (void)configDeleteBtn;
- (void)configCommentLabelWithMaxWidth:(double)arg1;
- (void)configUsernameLabelWithMaxWidth:(double)arg1;
- (void)configUnreadVideoMarkView;
- (void)configHeadView;
- (void)configUnreadColorView;
- (void)configblurEffectView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

