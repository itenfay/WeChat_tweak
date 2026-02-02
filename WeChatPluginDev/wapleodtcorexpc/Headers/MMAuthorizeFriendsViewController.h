//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSString, OauthScopeInfo, UIButton, UIScrollView;
@protocol MMAuthorizeViewControllerDelegate;

@interface MMAuthorizeFriendsViewController
{
    unsigned int _fromScene;
    NSString *_appName;
    NSString *_iconUrl;
    OauthScopeInfo *_scopeInfo;
    id <MMAuthorizeViewControllerDelegate> _delegate;
    UIScrollView *_scrollView;
    MMWebImageView *_appIconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_scopeLabel;
    UIButton *_comfirmBtn;
    UIButton *_denyBtn;
    MMUILabel *_cloudGameScopeLabel;
    NSString *_cloudGameScopeWording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cloudGameScopeWording; // @synthesize cloudGameScopeWording=_cloudGameScopeWording;
@property(retain, nonatomic) MMUILabel *cloudGameScopeLabel; // @synthesize cloudGameScopeLabel=_cloudGameScopeLabel;
@property(retain, nonatomic) UIButton *denyBtn; // @synthesize denyBtn=_denyBtn;
@property(retain, nonatomic) UIButton *comfirmBtn; // @synthesize comfirmBtn=_comfirmBtn;
@property(retain, nonatomic) MMUILabel *scopeLabel; // @synthesize scopeLabel=_scopeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) __weak id <MMAuthorizeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OauthScopeInfo *scopeInfo; // @synthesize scopeInfo=_scopeInfo;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void)onDenyBtnClick;
- (void)onComfirmBtnClick;
- (void)viewDidLayoutSubviews;
- (void)layoutSubviews;
- (void)initSubViews;
- (_Bool)shouldInteractivePop;
- (void)onReturn;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (id)initWithAppName:(id)arg1 iconUrl:(id)arg2 scopeInfo:(id)arg3 cloudGameScopeWording:(id)arg4;

@end

