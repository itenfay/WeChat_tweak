//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, JSEvent, NSString, SessionSelectController, SharePreConfirmSheetView, SharePreConfirmView;

@interface WebviewJSEventHandler_sendRedCoverAppMsg
{
    NSString *_receiveUri;
    SessionSelectController *_sessionSelectVC;
    SharePreConfirmView *_sharePreConfirmView;
    SharePreConfirmSheetView *_sharePreConfirmSheetView;
    CContact *_selectedContact;
    JSEvent *_m_event;
    NSString *_m_sessionid;
    NSString *_m_coverid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_coverid; // @synthesize m_coverid=_m_coverid;
@property(retain, nonatomic) NSString *m_sessionid; // @synthesize m_sessionid=_m_sessionid;
@property(retain, nonatomic) JSEvent *m_event; // @synthesize m_event=_m_event;
@property(retain, nonatomic) CContact *selectedContact; // @synthesize selectedContact=_selectedContact;
@property(retain, nonatomic) SharePreConfirmSheetView *sharePreConfirmSheetView; // @synthesize sharePreConfirmSheetView=_sharePreConfirmSheetView;
@property(retain, nonatomic) SharePreConfirmView *sharePreConfirmView; // @synthesize sharePreConfirmView=_sharePreConfirmView;
@property(retain, nonatomic) SessionSelectController *sessionSelectVC; // @synthesize sessionSelectVC=_sessionSelectVC;
@property(retain, nonatomic) NSString *receiveUri; // @synthesize receiveUri=_receiveUri;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiResponseOK:(id)arg1;
- (void)startSendAppMsgRequest:(id)arg1;
- (void)showSharePreConfirmView:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (id)getViewController;
- (_Bool)filterContact:(id)arg1;
- (_Bool)onShouldFilterContact:(id)arg1;
- (void)kvReport:(unsigned int)arg1 toUsername:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

