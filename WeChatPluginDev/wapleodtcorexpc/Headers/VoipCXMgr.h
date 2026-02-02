//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CXCallController, CXProvider, MonoServiceMsg, NSDate, NSMutableDictionary, NSString, NSUUID;

@interface VoipCXMgr
{
    _Bool m_bHaveNotActionedEndCallRequest;
    _Bool m_bHaveAnsweredCall;
    _Bool m_bHaveAProcessingCall;
    _Bool m_bOutgoingCallHaveBeenAccepted;
    _Bool _noActionAfterEnteringForeground;
    int m_callType;
    CXProvider *provider;
    MonoServiceMsg *m_monoMsg;
    NSUUID *m_uuid;
    NSString *m_user;
    NSMutableDictionary *m_callFromDic;
    NSMutableDictionary *m_callToDic;
    CXCallController *_cxController;
    NSDate *_dateOfIncomingInvitationFromPushKit;
    unsigned long long _roomID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long roomID; // @synthesize roomID=_roomID;
@property(nonatomic) _Bool noActionAfterEnteringForeground; // @synthesize noActionAfterEnteringForeground=_noActionAfterEnteringForeground;
@property(retain, nonatomic) NSDate *dateOfIncomingInvitationFromPushKit; // @synthesize dateOfIncomingInvitationFromPushKit=_dateOfIncomingInvitationFromPushKit;
@property(retain, nonatomic) CXCallController *cxController; // @synthesize cxController=_cxController;
@property(nonatomic) int m_callType; // @synthesize m_callType;
@property(retain, nonatomic) NSMutableDictionary *m_callToDic; // @synthesize m_callToDic;
@property(retain, nonatomic) NSMutableDictionary *m_callFromDic; // @synthesize m_callFromDic;
@property(retain, nonatomic) NSString *m_user; // @synthesize m_user;
@property(retain, nonatomic) NSUUID *m_uuid; // @synthesize m_uuid;
@property(retain, nonatomic) MonoServiceMsg *m_monoMsg; // @synthesize m_monoMsg;
@property(retain, nonatomic) CXProvider *provider; // @synthesize provider;
- (void)logCallKitErrorWithType:(unsigned long long)arg1 andErrorMsg:(id)arg2;
- (void)onInitOK;
- (void)onAppBecomeActive;
- (void)provider:(id)arg1 didDeactivateAudioSession:(id)arg2;
- (void)provider:(id)arg1 didActivateAudioSession:(id)arg2;
- (void)provider:(id)arg1 timedOutPerformingAction:(id)arg2;
- (void)provider:(id)arg1 performPlayDTMFCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetGroupCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;
- (void)provider:(id)arg1 performStartCallAction:(id)arg2;
- (void)providerDidReset:(id)arg1;
- (void)reportCallEndedAtDate:(id)arg1 reason:(long long)arg2 roomID:(unsigned long long)arg3;
- (void)reportIncomingCallFromUser:(id)arg1 ofType:(int)arg2 withMsg:(id)arg3 isPushKit:(_Bool)arg4;
- (void)prepareForIncomingInvitationFromPushKit;
- (void)requestEndCallTrans;
- (void)requestAcceptCallTransaction;
- (_Bool)haveAnsweredCall;
- (_Bool)haveAProcessingCall;
- (void)dealloc;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

