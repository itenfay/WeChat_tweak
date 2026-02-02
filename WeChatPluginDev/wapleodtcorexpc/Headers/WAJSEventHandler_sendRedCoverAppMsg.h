//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, JSApiSelectContactsViewController, JSApiSelectSessionViewController, NSString, SharePreConfirmSheetView, SharePreConfirmView;

@interface WAJSEventHandler_sendRedCoverAppMsg
{
    NSString *_receiveUri;
    JSApiSelectSessionViewController *_selectSessionViewController;
    JSApiSelectContactsViewController *_selectContactViewController;
    SharePreConfirmView *_sharePreConfirmView;
    SharePreConfirmSheetView *_sharePreConfirmSheetView;
    CContact *_selectedContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *selectedContact; // @synthesize selectedContact=_selectedContact;
@property(retain, nonatomic) SharePreConfirmSheetView *sharePreConfirmSheetView; // @synthesize sharePreConfirmSheetView=_sharePreConfirmSheetView;
@property(retain, nonatomic) SharePreConfirmView *sharePreConfirmView; // @synthesize sharePreConfirmView=_sharePreConfirmView;
@property(retain, nonatomic) JSApiSelectContactsViewController *selectContactViewController; // @synthesize selectContactViewController=_selectContactViewController;
@property(retain, nonatomic) JSApiSelectSessionViewController *selectSessionViewController; // @synthesize selectSessionViewController=_selectSessionViewController;
@property(retain, nonatomic) NSString *receiveUri; // @synthesize receiveUri=_receiveUri;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerBack;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiResponseOK:(id)arg1;
- (void)startSendAppMsgRequest:(id)arg1;
- (void)showSharePreConfirmView:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (_Bool)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerBack;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

