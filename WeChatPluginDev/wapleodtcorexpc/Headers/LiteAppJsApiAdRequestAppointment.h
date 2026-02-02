//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface LiteAppJsApiAdRequestAppointment
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleAdAppointmentResp:(id)arg1 Event:(unsigned int)arg2;
- (void)sendAdAppointmentReqWithUxInfo:(id)arg1 opType:(int)arg2 appointmentId:(unsigned long long)arg3 phoneNumber:(id)arg4;
- (void)doAdInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

@end

