//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString, WCPayUnionTransferBeforeCgi;
@protocol WCPaySelectChatroomMemberViewControllerDelegate;

@interface WCPaySelectChatroomMemberViewController
{
    id <WCPaySelectChatroomMemberViewControllerDelegate> _delegate;
    WCPayUnionTransferBeforeCgi *_unionBeforeCgi;
    CContact *_selectUser;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *selectUser; // @synthesize selectUser=_selectUser;
@property(retain, nonatomic) WCPayUnionTransferBeforeCgi *unionBeforeCgi; // @synthesize unionBeforeCgi=_unionBeforeCgi;
@property(nonatomic) __weak id <WCPaySelectChatroomMemberViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkPermission:(unsigned int)arg1 errMsg:(id)arg2;
- (void)onWCPayUnionTransferBeforeCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferBeforeCgiResponseOK:(id)arg1;
- (void)realCallbackSelectContact:(id)arg1;
- (void)onSelectedOrCancelContact:(id)arg1 isSelected:(_Bool)arg2;
- (id)getChatroomContact;
- (id)getReloadContactDataList;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)leftBarbuttonClick;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

