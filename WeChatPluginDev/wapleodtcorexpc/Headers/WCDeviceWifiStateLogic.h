//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;
@protocol WCDeviceWifiStateLogicDelegate;

@interface WCDeviceWifiStateLogic
{
    NSMutableArray *m_devices;
    id <WCDeviceWifiStateLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCDeviceWifiStateLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getSubscribingWithDeviceType:(id)arg1 andDieviceID:(id)arg2;
- (_Bool)isDeviceSubscribing:(id)arg1;
- (void)handleWCDeviceWifiStateSubscribeResopnse:(id)arg1;
- (void)handleWifiStateUpdateMsg:(id)arg1;
- (void)sendWCDeviceWifiStatusSubscribeForDeviceID:(id)arg1 AndDeviceType:(id)arg2 AndReqType:(unsigned int)arg3;
- (int)getWCDeviceWifiState:(id)arg1;
- (void)sendWCDeviceWifiStateSubscribe:(id)arg1 ReqType:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end

