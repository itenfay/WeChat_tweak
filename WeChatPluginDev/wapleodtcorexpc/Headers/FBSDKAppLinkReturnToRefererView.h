//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FBSDKAppLink, UIButton, UIColor, UILabel, UITapGestureRecognizer;
@protocol FBSDKAppLinkReturnToRefererViewDelegate;

@interface FBSDKAppLinkReturnToRefererView : UIView
{
    _Bool _explicitlyHidden;
    _Bool _closed;
    id <FBSDKAppLinkReturnToRefererViewDelegate> _delegate;
    UIColor *_textColor;
    FBSDKAppLink *_refererAppLink;
    unsigned long long _includeStatusBarInSize;
    UILabel *_labelView;
    UIButton *_closeButton;
    UITapGestureRecognizer *_insideTapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *insideTapGestureRecognizer; // @synthesize insideTapGestureRecognizer=_insideTapGestureRecognizer;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
@property(nonatomic, getter=isClosed) _Bool closed; // @synthesize closed=_closed;
@property(nonatomic) unsigned long long includeStatusBarInSize; // @synthesize includeStatusBarInSize=_includeStatusBarInSize;
@property(retain, nonatomic) FBSDKAppLink *refererAppLink; // @synthesize refererAppLink=_refererAppLink;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) __weak id <FBSDKAppLinkReturnToRefererViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateHidden;
- (void)onTapInside:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (_Bool)hasRefererData;
- (id)localizedLabelForReferer:(id)arg1;
- (id)drawCloseButtonImageWithColor:(id)arg1;
- (void)updateColors;
- (void)updateLabelText;
- (void)setHidden:(_Bool)arg1;
- (double)statusBarHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)initViews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

