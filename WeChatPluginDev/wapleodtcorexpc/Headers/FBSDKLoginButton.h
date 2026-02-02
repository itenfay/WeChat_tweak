//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FBSDKLoginManager, NSArray, NSDictionary, NSString;
@protocol FBSDKLoginButtonDelegate;

@interface FBSDKLoginButton
{
    _Bool _hasShownTooltipBubble;
    FBSDKLoginManager *_loginManager;
    NSString *_userID;
    NSString *_userName;
    id <FBSDKLoginButtonDelegate> _delegate;
    NSArray *_permissions;
    NSArray *_publishPermissions;
    NSArray *_readPermissions;
    unsigned long long _tooltipBehavior;
    unsigned long long _tooltipColorStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long tooltipColorStyle; // @synthesize tooltipColorStyle=_tooltipColorStyle;
@property(nonatomic) unsigned long long tooltipBehavior; // @synthesize tooltipBehavior=_tooltipBehavior;
@property(copy, nonatomic) NSArray *readPermissions; // @synthesize readPermissions=_readPermissions;
@property(copy, nonatomic) NSArray *publishPermissions; // @synthesize publishPermissions=_publishPermissions;
@property(copy, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(nonatomic) __weak id <FBSDKLoginButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateContent;
- (void)_showTooltipIfNeeded;
- (id)_shortLogInTitle;
- (id)_longLogInTitle;
- (id)_logOutTitle;
- (void)_buttonPressed:(id)arg1;
- (void)_accessTokenDidChangeNotification:(id)arg1;
- (void)configureButton;
@property(readonly, copy, nonatomic) NSString *impressionTrackingIdentifier;
@property(readonly, copy, nonatomic) NSString *impressionTrackingEventName;
@property(readonly, copy, nonatomic) NSDictionary *analyticsParameters;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (id)backgroundColor;
- (id)defaultFont;
@property(nonatomic) unsigned long long loginBehavior;
@property(nonatomic) unsigned long long defaultAudience;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

