//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAuthorizeScopeTopView, MMTableView, NSArray, NSMutableArray, NSString, OauthScopeInfo, UIButton, UIView;
@protocol MMAuthorizeViewControllerDelegate;

@interface MMAuthorizeScopeViewController
{
    unsigned int _fromScene;
    NSString *_appName;
    NSString *_iconUrl;
    OauthScopeInfo *_scopeInfo;
    id <MMAuthorizeViewControllerDelegate> _delegate;
    NSMutableArray *_scopeInfoList;
    MMTableView *_tableView;
    MMAuthorizeScopeTopView *_tableHeaderView;
    UIView *_tableFooterView;
    UIButton *_comfirmBtn;
    UIButton *_denyBtn;
    NSMutableArray *_arrSelect;
    NSString *_cloudGameScopeWording;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cloudGameScopeWording; // @synthesize cloudGameScopeWording=_cloudGameScopeWording;
@property(retain, nonatomic) NSMutableArray *arrSelect; // @synthesize arrSelect=_arrSelect;
@property(retain, nonatomic) UIButton *denyBtn; // @synthesize denyBtn=_denyBtn;
@property(retain, nonatomic) UIButton *comfirmBtn; // @synthesize comfirmBtn=_comfirmBtn;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) MMAuthorizeScopeTopView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSMutableArray *scopeInfoList; // @synthesize scopeInfoList=_scopeInfoList;
@property(nonatomic) __weak id <MMAuthorizeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OauthScopeInfo *scopeInfo; // @synthesize scopeInfo=_scopeInfo;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void)onDenyBtnClick;
- (void)onComfirmBtnClick;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)layoutTableFooterView;
- (void)initTableFooterView;
- (void)layoutTableHeaderView;
- (void)initTableHeaderView;
- (void)initSubViews;
@property(readonly, nonatomic) NSArray *comfirmScopeInfoList;
- (void)initData;
- (_Bool)shouldInteractivePop;
- (void)onReturn;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)initWithAppName:(id)arg1 iconUrl:(id)arg2 scopeInfoList:(id)arg3 cloudGameScopeWording:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

