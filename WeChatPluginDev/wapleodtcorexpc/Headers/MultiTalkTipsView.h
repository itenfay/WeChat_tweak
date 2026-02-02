//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, MMBorderView, MMUIView, MultiTalkBannerItem, NSArray, NSString, UIButton, UIImageView, UILabel;

@interface MultiTalkTipsView : UIView
{
    CContact *_contact;
    _Bool _isUnfold;
    _Bool _isAnimating;
    UIImageView *_bgView;
    UIImageView *_iconView;
    UIImageView *_iconHLView;
    UILabel *_foldTipsLabel;
    UIImageView *_arrowView;
    UILabel *_unfoldTitleLabel;
    UIButton *_enterButton;
    UIButton *_cancelButton;
    NSString *_wxGroupId;
    MultiTalkBannerItem *_bannerInfo;
    unsigned int _startTalkTimestamp;
    _Bool _isTimerStart;
    NSArray *_userList;
    MMUIView *_headImgContainerView;
    MMBorderView *_bannerBottomLine;
    MMBorderView *_buttonTopLine;
    MMBorderView *_buttonBottomLine;
    MMBorderView *_buttonMiddleLine;
}

- (void).cxx_destruct;
- (void)joinCurrentBannerMultiTalk;
- (void)onEnterButtonPress;
- (void)onCancelButtonPress;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)checkTouchPoint:(struct CGPoint)arg1 IfInView:(id)arg2;
- (void)stopIconChangeAnimation;
- (void)doIconDarkAnimation;
- (void)doIconHighlightAnimation;
- (void)startIconChangeAnimation;
- (void)resetTipsView;
- (void)doFoldAnimation;
- (void)unfold;
- (void)doUnfoldAnimation;
- (void)unfoldAnimationFinish;
- (void)setTipsTitle:(id)arg1;
- (void)updateHeadViews;
- (void)initView;
- (void)layoutSubviews;
- (id)initWithContact:(id)arg1;

@end

