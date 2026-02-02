//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString, SessionSelectController, SharePreConfirmView;

@interface WAJSEventHandler_quickSendRedPacket
{
    SessionSelectController *_sessionSelectVC;
    SharePreConfirmView *_m_confirmView;
    CContact *_m_selectContact;
    NSString *_sessionId;
    NSString *_materialId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *materialId; // @synthesize materialId=_materialId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) CContact *m_selectContact; // @synthesize m_selectContact=_m_selectContact;
@property(retain, nonatomic) SharePreConfirmView *m_confirmView; // @synthesize m_confirmView=_m_confirmView;
@property(retain, nonatomic) SessionSelectController *sessionSelectVC; // @synthesize sessionSelectVC=_sessionSelectVC;
- (void)internalShowConfirmView:(id)arg1;
- (void)setupSessionSelectViewController;
- (void)OnWCRedEnvelopesMakeRedEnvelopesViewControllerBack;
- (void)OnWCRedEnvelopesSendControlLogicPaySuccess:(id)arg1;
- (id)getViewController;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

