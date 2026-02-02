//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;
@protocol WCDeviceSendDataToManufacturSvrLogicDelegate;

@interface WCDeviceSendDataToManufacturSvrLogic
{
    NSMutableArray *m_tasks;
    int m_appState;
    id <WCDeviceSendDataToManufacturSvrLogicDelegate> _delegate;
    long long _m_sessionId;
}

- (void).cxx_destruct;
@property long long m_sessionId; // @synthesize m_sessionId=_m_sessionId;
@property(nonatomic) __weak id <WCDeviceSendDataToManufacturSvrLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendWCDeviceMessageRequest:(id)arg1 Retry:(unsigned int)arg2;
- (void)sendWCDeviceMessageRequest:(id)arg1;
- (void)handleSendWCDeviceMessageResponse:(id)arg1;
- (id)__findTaskBySessionId:(long long)arg1;
- (id)__findTaskByTaskId:(long long)arg1;
- (void)__clearTaskById:(long long)arg1;
- (void)__sendRespToDevice:(id)arg1:(int)arg2:(struct AutoBuffer *)arg3;
- (void)handleDeviceLost:(unsigned long long)arg1;
- (void)handleWCDeviceChannelStateChanged:(long long)arg1 OldState:(int)arg2 NewState:(int)arg3;
- (void)handleWCDeviceCmdEnd:(long long)arg1 ErrType:(int)arg2 ErrCode:(int)arg3 ErrMsg:(const char *)arg4;
- (void)handleSvrResp:(id)arg1;
- (void)handleSendMessageResponse:(unsigned long long)arg1 Device:(id)arg2 Error:(id)arg3;
- (void)clearTimeoutTask;
- (void)handleDeviceSendDataToManufacturerSvrReq:(long long)arg1:(unsigned short)arg2:(unsigned short)arg3:(struct _MmBp__SendDataRequest **)arg4 SessionBuffer:(id)arg5;
- (void)willSuspend;
- (void)willEnterForeground;
- (void)dealloc;
- (id)init;

@end

