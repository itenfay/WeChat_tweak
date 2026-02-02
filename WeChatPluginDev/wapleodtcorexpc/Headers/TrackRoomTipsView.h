//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, UIButton, UIImageView, UILabel;
@protocol TrackRoomTipsViewDelegate;

@interface TrackRoomTipsView : UIView
{
    id <TrackRoomTipsViewDelegate> _delegate;
    CContact *_contact;
    _Bool _isUnfold;
    _Bool _isAnimating;
    UIImageView *_bgView;
    UIImageView *_iconView;
    UIImageView *_iconHLView;
    UILabel *_foldTipsLabel;
    UIImageView *_arrowView;
    UILabel *_unfoldTipsLabel;
    UIButton *_enterButton;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <TrackRoomTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)getUnFoldTipHeight;
- (void)onEnterBackground;
- (void)onEnterForeground;
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
- (void)updateTipsView;
- (void)initView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

@end

