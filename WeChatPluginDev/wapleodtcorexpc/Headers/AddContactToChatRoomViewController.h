//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CreateChatLogic, DelaySwitchSettingLogic, MMTableView, MMTableViewInfo, MsgSearchHelper, NSIndexPath, NSSet, NSString, UIView, WWKFContactOpLogic;
@protocol addContactToChatRoomDelegate;

@interface AddContactToChatRoomViewController
{
    CContact *m_contact;
    id <addContactToChatRoomDelegate> m_delegate;
    MMTableView *m_tableView;
    UIView *m_headerView;
    CreateChatLogic *m_createChatLogic;
    _Bool m_bTopSession;
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_bShowTranslateSectionAtFirst;
    NSIndexPath *m_showTranslateSectionIndex;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    MsgSearchHelper *m_oMsgSearchHelper;
    WWKFContactOpLogic *m_wwkfOpLogic;
    _Bool m_strongNotificationItemOperateWaitStatue;
    NSSet *_trackUsernameSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *m_showTranslateSectionIndex; // @synthesize m_showTranslateSectionIndex;
@property(nonatomic) _Bool m_bShowTranslateSectionAtFirst; // @synthesize m_bShowTranslateSectionAtFirst;
@property(retain, nonatomic) CreateChatLogic *m_createChatLogic; // @synthesize m_createChatLogic;
@property(nonatomic) __weak id <addContactToChatRoomDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (id)getShowTopViewController;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (id)getChatContact;
- (void)msgSearchBarDoSearch;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarCancel;
- (void)onModifyStrongNotification:(id)arg1 contactUserName:(id)arg2;
- (void)handleStrongNotificationOperateResult:(_Bool)arg1;
- (void)onDeleteStrongNotification:(id)arg1 contactUserName:(id)arg2 resultFlag:(_Bool)arg3;
- (void)onAddStrongNotification:(id)arg1 contactUserName:(id)arg2 resultFlag:(_Bool)arg3;
- (void)onAlertViewAction:(_Bool)arg1;
- (void)setTopSession;
- (void)checkTopSession;
- (void)onDeleteContact:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)onModifyContact:(id)arg1;
- (void)processModContact:(id)arg1;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)doReset;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)doCloseChat;
- (void)onCloseChat;
- (_Bool)shouldRestrictContentViewSize;
- (double)getContentViewY;
- (id)getViewController;
- (void)dealloc;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadView;
- (void)initView;
- (void)removeCoverView;
- (void)hideCoverView;
- (void)startCoverAnimOnIndexPath:(id)arg1;
- (void)reloadOpenIMKefuTableInfo;
- (void)reloadTableData;
- (_Bool)isInMyContactList;
- (void)initMemberView;
- (void)setFlagIcon:(id)arg1 ItemUsername:(id)arg2;
- (void)realDoDelete;
- (void)onDelete;
- (void)onExpose;
- (void)onClear:(id)arg1;
- (id)getStrongNotificationCellLabel;
- (id)getStrongNotificationCellSwitch;
- (void)makeStrongNotificationCell:(id)arg1 cellInfo:(id)arg2;
- (double)getMemListCellHeight;
- (void)onStrongNotificationSetting:(id)arg1;
- (void)initMsgSearchHelper:(int)arg1;
- (void)onEditAndSearch;
- (void)onArriveFundConfirmDeleteSession;
- (void)onArriveFundCancelDeleteSession;
- (void)confirmClearAllMsg;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showChatBackgroundConfig;
- (void)setMuteStatus;
- (_Bool)setUpdateNotifyMuted:(_Bool)arg1;
- (void)initData;
- (_Bool)isTopSessionCountExceed;
- (void)onTopSession:(_Bool)arg1;
- (_Bool)getSessionTopped;
- (void)tryGetContactUsrImg;
- (void)addMember;
- (void)createChatRoom;
- (void)openContactInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

