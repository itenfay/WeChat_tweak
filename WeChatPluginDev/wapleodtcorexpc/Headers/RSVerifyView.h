//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContactVerifyPreCheckBusinessLogic, MMHeadImageView, NSString, RSHeadImageView, RSVerifyAnimationView, UIButton, UIImageView, UILabel, WCUIAlertView;
@protocol RSVerifyViewDelegate;

@interface RSVerifyView
{
    MMHeadImageView *_imageView;
    UIImageView *_headBGView;
    UILabel *_displayName;
    RSVerifyAnimationView *_animationView;
    UIButton *_statusFrame;
    UILabel *_helloLabel;
    UIButton *_remarkBtn;
    UIButton *_addFriendBtn;
    UIButton *_exposeBtn;
    RSHeadImageView *_headImage;
    id <RSVerifyViewDelegate> _delegate;
    CContactVerifyPreCheckBusinessLogic *m_verifyPreCheckBusinessLogic;
    WCUIAlertView *_alertView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCUIAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak id <RSVerifyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getViewController;
- (id)getVerifyPreCheckBusinessLogic;
- (void)onContactVerifyPreCheckBusinessSuccess:(id)arg1 opcode:(unsigned int)arg2;
- (void)onAnimationFinish:(_Bool)arg1;
- (void)onExpose;
- (void)onDoAddFriend;
- (void)onAddFriend;
- (void)onSetRemark;
- (void)doSetRemark;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)hideSelf;
- (void)startAnimationWithUsername:(id)arg1 OriginPoint:(struct CGPoint)arg2;
- (void)layoutSubviews;
- (void)doShowAddFriendButtonAnimation;
- (void)doShowStatusFrameAnimation;
- (void)initView;
- (void)initAnimationView;
- (void)initBackgroundView;
- (void)initExposeButton;
- (void)initAddFriendButton;
- (void)initRemarkBtn;
- (void)initHelloLabel;
- (void)initStatusFrame;
- (void)initDisplayNameLabel;
- (void)initHeadView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

