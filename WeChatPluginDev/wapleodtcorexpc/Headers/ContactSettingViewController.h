//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ContactRelatedGroupLogic, DelaySwitchSettingLogic, ForwardMessageLogicController, MMTableViewInfo, NSString, WCOpLog;
@protocol ContactInfoAssistDelegate, ContactSettingViewControllerDelegate;

@interface ContactSettingViewController
{
    MMTableViewInfo *m_tableViewInfo;
    CContact *m_contact;
    id <ContactInfoAssistDelegate> m_delegate;
    WCOpLog *_wcOpLog;
    NSString *m_recommandRemark;
    unsigned int m_scene;
    ForwardMessageLogicController *m_forwardLogic;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    _Bool m_toBeDeleted;
    _Bool m_isDeleteContactOplog;
    _Bool _bDisableAllOperation;
    _Bool _needDeleteSession;
    unsigned int _m_uiVerify;
    NSString *_m_chatRoomUsrname;
    ContactRelatedGroupLogic *_relatedGroupLogic;
    id <ContactSettingViewControllerDelegate> _viewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needDeleteSession; // @synthesize needDeleteSession=_needDeleteSession;
@property(nonatomic) __weak id <ContactSettingViewControllerDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(retain, nonatomic) ContactRelatedGroupLogic *relatedGroupLogic; // @synthesize relatedGroupLogic=_relatedGroupLogic;
@property(nonatomic) unsigned int m_uiVerify; // @synthesize m_uiVerify=_m_uiVerify;
@property(retain, nonatomic) NSString *m_chatRoomUsrname; // @synthesize m_chatRoomUsrname=_m_chatRoomUsrname;
@property(nonatomic) _Bool bDisableAllOperation; // @synthesize bDisableAllOperation=_bDisableAllOperation;
@property(retain, nonatomic) NSString *m_recommandRemark; // @synthesize m_recommandRemark;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reportContactInfoItemClickWithReportScene:(long long)arg1 andActionResultCode:(long long)arg2;
- (_Bool)isContactShakeOrLBS;
- (_Bool)isNeedVerify;
- (void)reloadTableView;
- (void)makeSignCell:(id)arg1;
- (void)addDeleteSection;
- (void)addRemarkCellWithSection:(id)arg1;
- (void)addBlackAndExposeSection;
- (void)addPermissionCellWithSection:(id)arg1;
- (void)addFavourSection;
- (void)addShareContactSection;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)onOpenImOplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)realDoAddOrRemoveBlack:(_Bool)arg1;
- (void)realDoDeleteWithDeleteAllMsg:(_Bool)arg1;
- (id)getContactSetPermissionsViewController;
- (void)opEditSetPermission;
- (void)opFavour;
- (void)opEditRemarkName;
- (id)getCurrentViewController;
- (void)opShareMyFriend;
- (void)opDelete:(id)arg1;
- (void)doDeleteConfirm:(id)arg1;
- (void)onArriveFundConfirmDeleteContact;
- (void)onArriveFundCancelDeleteContact;
- (void)checkDeleteContact:(id)arg1;
- (void)doDeleteLocal;
- (void)onExposeByRecommand;
- (void)doExpose:(int)arg1;
- (void)opExpose;
- (void)opBlackList;
- (void)cancelBlackListSwitch;
- (void)doAddToBlackList;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)doDeleteAndExpose;
- (void)doAddToBlackListAndExpose;
- (void)addToBlackList;
- (void)removeFromBlackList;
- (_Bool)shouldRestrictContentViewSize;
- (_Bool)isShowExposeAction;
- (_Bool)isShowBlackAction;
- (_Bool)isInMyContactList;
- (void)setDelegate:(id)arg1;
- (id)initWithContact:(id)arg1 inScene:(unsigned int)arg2;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

