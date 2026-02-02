//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseContact, MMTableViewInfo, NSString;
@protocol GameLifeMsgChatInfoViewControllerDelegate;

@interface GameLifeMsgChatInfoViewController
{
    _Bool _isInBlackList;
    _Bool _isAssociateWithWxGame;
    id <GameLifeMsgChatInfoViewControllerDelegate> _delegate;
    CBaseContact *_myRoleContact;
    CBaseContact *_sessionContact;
    CBaseContact *_realChatContact;
    MMTableViewInfo *_tableViewMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableViewInfo *tableViewMgr; // @synthesize tableViewMgr=_tableViewMgr;
@property(retain, nonatomic) CBaseContact *realChatContact; // @synthesize realChatContact=_realChatContact;
@property(retain, nonatomic) CBaseContact *sessionContact; // @synthesize sessionContact=_sessionContact;
@property(retain, nonatomic) CBaseContact *myRoleContact; // @synthesize myRoleContact=_myRoleContact;
@property(nonatomic) __weak id <GameLifeMsgChatInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportBlackListDialogUserAction:(_Bool)arg1 isAssociateWithWxGame:(_Bool)arg2 isCancel:(_Bool)arg3;
- (void)reportBlackListDialogExposure:(_Bool)arg1;
- (void)reportClickBlackListDialog;
- (void)reportExpose;
- (void)reportClearMsg:(int)arg1;
- (void)reportClickAvatar;
- (void)reportChattingInfoUIExposure;
- (id)getSessionId;
- (void)onConfirmClick:(_Bool)arg1 isAssociateWithWxGame:(_Bool)arg2;
- (void)onCancelClick:(_Bool)arg1 isAssociateWithWxGame:(_Bool)arg2;
- (void)showDealBlackDialog:(id)arg1 accoutType:(unsigned int)arg2 isBlack:(_Bool)arg3 isAssociate:(_Bool)arg4;
- (void)addBlackList:(id)arg1;
- (void)onExpose:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clearAllMsg;
- (void)onClearAllMessage:(id)arg1;
- (void)openContactInfo;
- (void)viewWillAppear:(_Bool)arg1;
- (void)makeContactInfo:(id)arg1 CellInfo:(id)arg2;
- (void)checkBlackListStatus:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)reloadTableViewData;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

