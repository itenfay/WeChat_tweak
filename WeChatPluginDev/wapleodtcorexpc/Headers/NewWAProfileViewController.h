//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSDictionary, NSMutableArray, NSString, WAContact, WAProfileFooterView, WAProfileHeaderView, WAProfileLogicController;
@protocol WAProfileViewControllerDelegate;

@interface NewWAProfileViewController
{
    ForwardMessageLogicController *_forwardLogic;
    WAProfileHeaderView *_headerView;
    NSMutableArray *_sectionHeaderList;
    WAProfileFooterView *_footerView;
    _Bool _needShowBottomFeedBack;
    _Bool _isEnterStatReported;
    unsigned int _fromAppVersion;
    unsigned long long _enterScene;
    NSString *_sceneNote;
    unsigned long long _exposeFrom;
    NSString *_pagePath;
    unsigned long long _fromDebugMode;
    NSDictionary *_exposeExtraInfo;
    unsigned long long _preScene;
    NSString *_preSceneNote;
    id <WAProfileViewControllerDelegate> _delegate;
    NSString *_hostAppid;
    NSString *_snapshotLocalId;
    WAProfileLogicController *_logicController;
    NSString *_userName;
    WAContact *_contact;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEnterStatReported; // @synthesize isEnterStatReported=_isEnterStatReported;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) WAProfileLogicController *logicController; // @synthesize logicController=_logicController;
@property(copy, nonatomic) NSString *snapshotLocalId; // @synthesize snapshotLocalId=_snapshotLocalId;
@property(copy, nonatomic) NSString *hostAppid; // @synthesize hostAppid=_hostAppid;
@property(nonatomic) _Bool needShowBottomFeedBack; // @synthesize needShowBottomFeedBack=_needShowBottomFeedBack;
@property(nonatomic) __weak id <WAProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *preSceneNote; // @synthesize preSceneNote=_preSceneNote;
@property(nonatomic) unsigned long long preScene; // @synthesize preScene=_preScene;
@property(retain, nonatomic) NSDictionary *exposeExtraInfo; // @synthesize exposeExtraInfo=_exposeExtraInfo;
@property(nonatomic) unsigned int fromAppVersion; // @synthesize fromAppVersion=_fromAppVersion;
@property(nonatomic) unsigned long long fromDebugMode; // @synthesize fromDebugMode=_fromDebugMode;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) unsigned long long exposeFrom; // @synthesize exposeFrom=_exposeFrom;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (_Bool)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(_Bool)arg3 scene:(unsigned long long)arg4;
- (void)profileCommonReport:(unsigned long long)arg1;
- (void)profileCommonReport:(unsigned long long)arg1 Result:(unsigned long long)arg2;
- (void)profileCommonReport:(unsigned long long)arg1 Result:(unsigned long long)arg2 configAction:(CDUnknownBlockType)arg3;
- (void)shareStatReport:(id)arg1 Result:(unsigned long long)arg2;
- (void)leaveProfileStatReport;
- (void)enterProfileStatReport:(unsigned int)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onUnStarButtonClick;
- (void)onStarButtonClick;
- (void)onShareButtonClicked:(id)arg1;
- (void)onServiceButtonClicked:(id)arg1;
- (void)onEnterButtonClicked:(id)arg1;
- (void)onTeenagerProtectLinkClicked:(unsigned long long)arg1;
- (void)onTagViewClicked:(id)arg1 tagType:(long long)arg2;
- (void)originalJump:(unsigned long long)arg1 JumpURL:(id)arg2;
- (void)showTipsViewController:(id)arg1;
- (id)getItemData;
- (void)onClickNavRightButton;
- (void)onBackButtonClicked;
- (void)showEasyBuyPageSheet;
- (void)onSelectedMoreInfoCell;
- (void)openBrandContact:(id)arg1;
- (void)onSelectRelatedWeAppCell;
- (void)onSelectRelatedBrandCell;
- (void)onSelectFeedBackButtonWithReportAction:(unsigned long long)arg1;
- (void)initCustomNavItems;
- (void)updateHeaderViewWithEvaluateInfo;
- (void)reloadFooterView:(id)arg1;
- (void)initHeaderViewIfNeed:(id)arg1;
- (void)initTableView;
- (void)reloadData;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

