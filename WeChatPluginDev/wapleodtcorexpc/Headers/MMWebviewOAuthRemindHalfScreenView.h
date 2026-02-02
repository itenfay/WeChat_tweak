//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface MMWebviewOAuthRemindHalfScreenView : UIView
{
    CDUnknownBlockType _authblock;
    UIImageView *_warningIcon;
    UILabel *_remindLabel;
    UIButton *_authButton;
    UIImageView *_arrowIcon;
    UIView *_highlightView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UIButton *authButton; // @synthesize authButton=_authButton;
@property(retain, nonatomic) UILabel *remindLabel; // @synthesize remindLabel=_remindLabel;
@property(retain, nonatomic) UIImageView *warningIcon; // @synthesize warningIcon=_warningIcon;
@property(copy, nonatomic) CDUnknownBlockType authblock; // @synthesize authblock=_authblock;
- (void)showHighlightAnimation;
- (void)onAuthButtonClicked;
- (void)setWidth:(double)arg1;
- (void)updateMaskLayer;
- (double)calcButtonPaddingWithWidth:(double)arg1;
- (double)calceRemindLabelWidthWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithAuthBlock:(CDUnknownBlockType)arg1;

@end

