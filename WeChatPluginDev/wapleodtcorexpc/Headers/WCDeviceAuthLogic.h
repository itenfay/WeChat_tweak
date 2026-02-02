//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;
@protocol WCDeviceAuthLogicDelegate;

@interface WCDeviceAuthLogic
{
    NSMutableArray *m_deviceInfos;
    int m_appState;
    id <WCDeviceAuthLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCDeviceAuthLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleWCDeviceAuthResopnse:(id)arg1;
- (id)__findDeviceInfoByDeviceID:(id)arg1;
- (id)__findDeviceInfoByDid:(long long)arg1;
- (void)__clearDeviceInfoByDeviceId:(long long)arg1;
- (void)__callbackEnd:(int)arg1 DID:(unsigned long long)arg2 RespTask:(id)arg3 SessionKey:(id)arg4;
- (void)handleWCDeviceChannelStateChanged:(long long)arg1 OldState:(int)arg2 NewState:(int)arg3;
- (void)handleDeviceAuthReq:(long long)arg1:(unsigned short)arg2:(unsigned short)arg3:(struct _MmBp__AuthRequest **)arg4;
- (id)genAuthRespTask:(int)arg1 DeviceID:(long long)arg2 Seq:(unsigned short)arg3 AESSessionKey:(id)arg4;
- (id)__toNSString:(void *)arg1:(int)arg2;
- (void)handleDeivceLost:(long long)arg1;
- (_Bool)isDeviceAuthed:(long long)arg1;
- (_Bool)setNeedAuth:(long long)arg1;
- (id)getSessionBuffer:(long long)arg1;
- (void)sendAuthReqToSvr:(id)arg1 AuthBuffer:(id)arg2;
- (void)willSuspend;
- (void)willEnterForeground;
- (void)dealloc;
- (id)init;

@end

