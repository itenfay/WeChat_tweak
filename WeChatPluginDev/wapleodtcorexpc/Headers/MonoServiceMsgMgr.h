//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MonoServiceMsgHistory, NSMutableArray, NSString, VibrationRepeatObject;

@interface MonoServiceMsgMgr
{
    NSMutableArray *m_queue;
    MonoServiceMsgHistory *m_msgHistory;
    NSMutableArray *m_logicArray;
    MonoServiceMsgHistory *_m_localNotificationHistory;
    VibrationRepeatObject *_m_vibrationObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VibrationRepeatObject *m_vibrationObject; // @synthesize m_vibrationObject=_m_vibrationObject;
@property(retain, nonatomic) MonoServiceMsgHistory *m_localNotificationHistory; // @synthesize m_localNotificationHistory=_m_localNotificationHistory;
@property(retain, nonatomic) NSMutableArray *m_logicArray; // @synthesize m_logicArray;
@property(retain, nonatomic) MonoServiceMsgHistory *m_msgHistory; // @synthesize m_msgHistory;
@property(retain, nonatomic) NSMutableArray *m_queue; // @synthesize m_queue;
- (id)localHistoryMsgsWithServiceType:(id)arg1 key:(id)arg2;
- (id)historyMsgsWithServiceType:(id)arg1 key:(id)arg2;
- (void)didMonoServiceMsgReject;
- (_Bool)isMonoServiceUIWorking;
- (_Bool)isMonoServiceUIExist;
- (_Bool)isMonoServiceCheckingServer;
- (void)processInviteMsg:(id)arg1;
- (_Bool)isSimuCallPreCheck:(id)arg1;
- (void)processCancelMsg:(id)arg1;
- (void)processMsg:(id)arg1;
- (void)internalCheckMsgQueue;
- (void)stopInAppVibration;
- (void)repeatOutAppVibration;
- (void)repeatInAppVibration;
- (void)closeLocalNotificationWithMsg:(id)arg1;
- (void)showLocalNotificationByIlinkWithMsg:(id)arg1 repeatVibration:(_Bool)arg2 isCallkitAvailable:(_Bool)arg3;
- (void)showLocalNotificationWithMsg:(id)arg1 repeatVibration:(_Bool)arg2;
- (void)showLocalNotificationWithMsg:(id)arg1 repeatVibration:(_Bool)arg2 silently:(_Bool)arg3;
- (void)addCancelHistory:(id)arg1;
- (void)checkMsgQueue;
- (void)addMsgLogic:(id)arg1;
- (void)inQueueMsg:(id)arg1;
- (id)init;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

