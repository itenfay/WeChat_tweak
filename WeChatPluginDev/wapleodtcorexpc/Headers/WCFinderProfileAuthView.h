//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class RichTextView, UIImageView, WCFinderAuthInfoIconView, WCFinderVerifiedByFriendsView;

@interface WCFinderProfileAuthView : UIView
{
    _Bool _hideArrowTips;
    _Bool _displayInCoverd;
    double _horizontalPadding;
    double _textPaddingLeft;
    double _iconCenterX;
    RichTextView *_authInfoLabel;
    WCFinderVerifiedByFriendsView *_verifiedByFriendsView;
    WCFinderAuthInfoIconView *_authIconView;
    UIImageView *_arrowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) WCFinderVerifiedByFriendsView *verifiedByFriendsView; // @synthesize verifiedByFriendsView=_verifiedByFriendsView;
@property(retain, nonatomic) RichTextView *authInfoLabel; // @synthesize authInfoLabel=_authInfoLabel;
@property(nonatomic) _Bool displayInCoverd; // @synthesize displayInCoverd=_displayInCoverd;
@property(nonatomic) _Bool hideArrowTips; // @synthesize hideArrowTips=_hideArrowTips;
@property(nonatomic) double iconCenterX; // @synthesize iconCenterX=_iconCenterX;
@property(nonatomic) double textPaddingLeft; // @synthesize textPaddingLeft=_textPaddingLeft;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)isAccessibilityElement;
- (void)onTapFriendsVerified;
- (void)onTapAuthLabel;
- (id)accessibilityLabelForInfoText:(id)arg1;
- (id)displayAuthInfoTextWithoutAuthStr:(id)arg1;
- (id)displayAuthInfoText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)updateWithAuthInfo:(id)arg1 width:(double)arg2;
- (void)updateWithAuthInfo:(id)arg1 width:(double)arg2 withAuthStr:(_Bool)arg3;
- (id)createAuthInfoView;
@property(nonatomic) long long lineNumber;
- (id)initWithFrame:(struct CGRect)arg1;

@end

