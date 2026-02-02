//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBrandHeadImageView, NSArray, NSMutableArray, NSString, OauthScopeInfo, UIButton, UILabel, UITableView, UIView;
@protocol MMAuthorizeViewControllerDelegate;

@interface OpenSDKScopeConfirmViewController
{
    UILabel *_titleLabel;
    UIView *_titleSplitLine;
    MMBrandHeadImageView *_appIconImageView;
    UILabel *_scopeDescriptionLabel;
    UIView *_tableSplitLine;
    UITableView *_scopeTableView;
    UIView *_buttonSplitLine;
    UIView *_buttonVerticalSpliteLine;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    NSMutableArray *_arrSelect;
    NSString *_confirmRediretUrl;
    int _errCode;
    NSString *_errMsg;
    _Bool _isforcedRotationToPortrait;
    unsigned int _fromScene;
    NSString *_appId;
    NSString *_scope;
    NSString *_state;
    NSString *_bundleId;
    NSString *_appName;
    NSString *_iconUrl;
    OauthScopeInfo *_scopeInfo;
    id <MMAuthorizeViewControllerDelegate> _delegate;
    NSMutableArray *_scopeInfoList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSMutableArray *scopeInfoList; // @synthesize scopeInfoList=_scopeInfoList;
@property(nonatomic) __weak id <MMAuthorizeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OauthScopeInfo *scopeInfo; // @synthesize scopeInfo=_scopeInfo;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool isforcedRotationToPortrait; // @synthesize isforcedRotationToPortrait=_isforcedRotationToPortrait;
- (_Bool)shouldAutorotate;
- (void)onClickButtonConfirm:(id)arg1;
- (void)onOAuthCancel;
- (double)totalTableHeightWithWidth:(float)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)designTableHeightRatio;
- (double)designNoTableContentHeightToContentWidthRatio;
- (unsigned long long)designContentWidth;
- (void)viewDidLayoutSubviews;
- (id)titleText;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSArray *comfirmScopeInfoList;
- (id)initWithAppName:(id)arg1 iconUrl:(id)arg2 scopeInfoList:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

