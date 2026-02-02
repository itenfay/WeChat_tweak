//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseContact, MMTableViewInfo, NSString, WCFinderMsgChatInfoReporter;
@protocol WCFinderMsgChatInfoViewControllerDelegate;

@interface WCFinderMsgChatInfoViewController
{
    id <WCFinderMsgChatInfoViewControllerDelegate> _delegate;
    CBaseContact *_myRoleContact;
    CBaseContact *_sessionContact;
    CBaseContact *_realChatContact;
    MMTableViewInfo *_tableViewMgr;
    WCFinderMsgChatInfoReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMsgChatInfoReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) MMTableViewInfo *tableViewMgr; // @synthesize tableViewMgr=_tableViewMgr;
@property(retain, nonatomic) CBaseContact *realChatContact; // @synthesize realChatContact=_realChatContact;
@property(retain, nonatomic) CBaseContact *sessionContact; // @synthesize sessionContact=_sessionContact;
@property(retain, nonatomic) CBaseContact *myRoleContact; // @synthesize myRoleContact=_myRoleContact;
@property(nonatomic) __weak id <WCFinderMsgChatInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerYReportSdk;
- (void)addToBlackList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)onFinderMsgSessionStatusUpdatedWithSessionId:(id)arg1;
- (_Bool)isContactBlocked;
- (void)onExpose:(id)arg1;
- (void)onClearAllMessage:(id)arg1;
- (void)onBlockSwitchChange:(id)arg1;
- (void)openContactInfo;
- (void)makeContactInfo:(id)arg1 CellInfo:(id)arg2;
- (void)reloadTableViewData;
- (void)initView;
- (void)fetchLatestMsgSessionState;
- (void)setReportChatSessionId:(id)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

