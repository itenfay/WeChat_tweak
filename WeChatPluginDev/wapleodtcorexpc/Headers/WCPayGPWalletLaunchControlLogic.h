//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AAOperationRes, CContact, NSMutableArray, NSString, WCPayGPLaunchControlLogic, WCPayGPOperationCgi;
@protocol WCPayGPWalletLaunchControlLogicDelegate;

@interface WCPayGPWalletLaunchControlLogic
{
    _Bool _bHasLaunchSucc;
    _Bool _bIsFromJSAPI;
    id <WCPayGPWalletLaunchControlLogicDelegate> _walletLaunchDelegate;
    WCPayGPLaunchControlLogic *_launchLogic;
    NSMutableArray *_recentGroupPayContactList;
    CContact *_launchContact;
    long long _groupPayAmount;
    NSString *_groupPayTitle;
    WCPayGPOperationCgi *_gpOperationCgi;
    AAOperationRes *_gpOperationResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AAOperationRes *gpOperationResp; // @synthesize gpOperationResp=_gpOperationResp;
@property(retain, nonatomic) WCPayGPOperationCgi *gpOperationCgi; // @synthesize gpOperationCgi=_gpOperationCgi;
@property(nonatomic) _Bool bIsFromJSAPI; // @synthesize bIsFromJSAPI=_bIsFromJSAPI;
@property(retain, nonatomic) NSString *groupPayTitle; // @synthesize groupPayTitle=_groupPayTitle;
@property(nonatomic) long long groupPayAmount; // @synthesize groupPayAmount=_groupPayAmount;
@property(retain, nonatomic) CContact *launchContact; // @synthesize launchContact=_launchContact;
@property(retain, nonatomic) NSMutableArray *recentGroupPayContactList; // @synthesize recentGroupPayContactList=_recentGroupPayContactList;
@property(nonatomic) _Bool bHasLaunchSucc; // @synthesize bHasLaunchSucc=_bHasLaunchSucc;
@property(retain, nonatomic) WCPayGPLaunchControlLogic *launchLogic; // @synthesize launchLogic=_launchLogic;
@property(nonatomic) __weak id <WCPayGPWalletLaunchControlLogicDelegate> walletLaunchDelegate; // @synthesize walletLaunchDelegate=_walletLaunchDelegate;
- (void)onGetGroupPayOperationResponse:(id)arg1;
- (void)sendGroupPaySvrConfigRequest;
- (id)getOperationData;
- (void)onLaunchControlLogicStop;
- (void)onLaunchGroupPaySuccWithContact:(id)arg1;
- (void)contactInBizChatDidSelect:(id)arg1;
- (id)contactInBizChatSessionAtRow:(unsigned long long)arg1;
- (long long)numberOfRowInBizChatSession;
- (id)sectionTitleForBizChatSession;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (unsigned long long)getGroupPayLaunchScene;
- (void)onWCPayGPIntroViewControllerClickRecordHistoryBtn;
- (void)onWCPayGPIntroViewControllerClickLaunchBtn;
- (void)onWCPayGPIntroViewControllerBack;
- (void)stopLogic;
- (void)startLogic;
- (void)setGroupPayWalletLaunchDelegate:(id)arg1;
- (void)setupData;
- (id)initWithData:(id)arg1 amount:(long long)arg2 title:(id)arg3;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

