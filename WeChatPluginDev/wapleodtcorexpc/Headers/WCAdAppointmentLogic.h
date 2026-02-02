//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdAppointmentInfo, WCAdConfirmHalfScreenBaseView;
@protocol WCAdAppointmentLogicDelegate;

@interface WCAdAppointmentLogic
{
    id <WCAdAppointmentLogicDelegate> _delegate;
    WCAdAppointmentInfo *_appointmentInfo;
    WCAdConfirmHalfScreenBaseView *_halfScreenView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdConfirmHalfScreenBaseView *halfScreenView; // @synthesize halfScreenView=_halfScreenView;
@property(retain, nonatomic) WCAdAppointmentInfo *appointmentInfo; // @synthesize appointmentInfo=_appointmentInfo;
@property(nonatomic) __weak id <WCAdAppointmentLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldAppointmentProgressContinuing;
- (void)updateAppointmentStatus:(int)arg1;
- (void)postAppointmentStatusUpdateEvent:(int)arg1;
- (void)handleAppointmentRespWithOpType:(int)arg1 isSuccess:(_Bool)arg2 status:(int)arg3;
- (void)submitAppointmentWithOpType:(int)arg1 uxInfo:(id)arg2 phoneNumber:(id)arg3;
- (void)checkAppointmentStatusWithUxInfo:(id)arg1;
- (void)onConfirmViewConfirmButtonClickWithConfirmInfo:(id)arg1;
- (void)showAppointmentConfirmViewForStatus:(int)arg1 isNotice:(_Bool)arg2;
- (int)fetchAppointmentStatus;
- (id)initWithAppointmentInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

