//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAuthorizeScopeTopView, MMTableView, MMTipsViewController, NSMutableArray, NSString, OauthScopeInfo, UIButton, UIView;
@protocol MMAuthorizeViewControllerDelegate;

@interface MMAuthorizeUserInfoViewController
{
    _Bool _isBanModifyAvatar;
    _Bool _canAddNewAvatar;
    unsigned int _avatarLimit;
    unsigned int _selectedAvatarId;
    unsigned int _fromScene;
    unsigned int _sessionId;
    unsigned int _defaultAvatarId;
    OauthScopeInfo *_scopeInfo;
    NSString *_appName;
    NSString *_iconUrl;
    id <MMAuthorizeViewControllerDelegate> _delegate;
    NSString *_appId;
    NSMutableArray *_avatarList;
    NSString *_defaultAvatarImgUrl;
    NSString *_defaultAvatarImgFileId;
    NSString *_createAvatarWording;
    NSString *_editAvatarWording;
    NSString *_selectAvatarWording;
    MMTableView *_tableView;
    MMAuthorizeScopeTopView *_tableHeaderView;
    UIView *_tableFooterView;
    UIButton *_comfirmBtn;
    UIButton *_denyBtn;
    MMTipsViewController *_tipsVC;
    NSString *_cloudGameScopeWording;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cloudGameScopeWording; // @synthesize cloudGameScopeWording=_cloudGameScopeWording;
@property(nonatomic) _Bool canAddNewAvatar; // @synthesize canAddNewAvatar=_canAddNewAvatar;
@property(nonatomic) unsigned int defaultAvatarId; // @synthesize defaultAvatarId=_defaultAvatarId;
@property(retain, nonatomic) MMTipsViewController *tipsVC; // @synthesize tipsVC=_tipsVC;
@property(retain, nonatomic) UIButton *denyBtn; // @synthesize denyBtn=_denyBtn;
@property(retain, nonatomic) UIButton *comfirmBtn; // @synthesize comfirmBtn=_comfirmBtn;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) MMAuthorizeScopeTopView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *selectAvatarWording; // @synthesize selectAvatarWording=_selectAvatarWording;
@property(retain, nonatomic) NSString *editAvatarWording; // @synthesize editAvatarWording=_editAvatarWording;
@property(retain, nonatomic) NSString *createAvatarWording; // @synthesize createAvatarWording=_createAvatarWording;
@property(retain, nonatomic) NSString *defaultAvatarImgFileId; // @synthesize defaultAvatarImgFileId=_defaultAvatarImgFileId;
@property(retain, nonatomic) NSString *defaultAvatarImgUrl; // @synthesize defaultAvatarImgUrl=_defaultAvatarImgUrl;
@property(nonatomic) unsigned int selectedAvatarId; // @synthesize selectedAvatarId=_selectedAvatarId;
@property(nonatomic) _Bool isBanModifyAvatar; // @synthesize isBanModifyAvatar=_isBanModifyAvatar;
@property(nonatomic) unsigned int avatarLimit; // @synthesize avatarLimit=_avatarLimit;
@property(retain, nonatomic) NSMutableArray *avatarList; // @synthesize avatarList=_avatarList;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) __weak id <MMAuthorizeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) OauthScopeInfo *scopeInfo; // @synthesize scopeInfo=_scopeInfo;
- (void)reloadTableViewAndFooterView;
- (void)onModAvatarSuccess:(id)arg1;
- (void)onAddAvatarSuccess:(id)arg1;
- (void)onDenyBtnClick;
- (void)onComfirmBtnClick;
- (void)handleDelAvatarResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)modifyAvatar:(id)arg1;
- (void)deleteAvatar:(id)arg1;
- (void)editAvatar:(id)arg1;
- (unsigned int)checkDefaultAvatarId;
- (id)genNoMoreQuotaCell;
- (id)genAddAvatarCell;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableViewHeight;
- (void)layoutTableFooterView;
- (void)initTableFooterView;
- (void)layoutTableHeaderView;
- (void)initTableHeaderView;
- (void)initSubViews;
- (_Bool)shouldInteractivePop;
- (void)onReturn;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)initWithAppName:(id)arg1 appId:(id)arg2 iconUrl:(id)arg3 scopeInfo:(id)arg4 avatarList:(id)arg5 avatarLimit:(unsigned int)arg6 isBanModifyAvatar:(_Bool)arg7 defaultAvatarId:(unsigned int)arg8 cloudGameScopeWording:(id)arg9;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

