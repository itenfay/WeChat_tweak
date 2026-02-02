//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, WCLanDeviceData, WCLanDeviceMgr;
@protocol WCLanDeviceKissLogicDelegate;

@interface WCLanDeviceBaseKissLogic : NSObject
{
    NSMutableSet *m_deviceMd5Set;
    NSMutableDictionary *m_lanDeviceDict;
    NSMutableDictionary *m_reqEventMap;
    WCLanDeviceMgr *m_lanMgr;
    id <WCLanDeviceKissLogicDelegate> _delegate;
    unsigned long long _deviceScene;
    WCLanDeviceData *_deviceData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCLanDeviceData *deviceData; // @synthesize deviceData=_deviceData;
@property(nonatomic) unsigned long long deviceScene; // @synthesize deviceScene=_deviceScene;
@property(nonatomic) __weak id <WCLanDeviceKissLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2 Device:(id)arg3;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(_Bool)arg3;
- (void)onReceiveWCLanDeviceProfile:(id)arg1;
- (_Bool)filterSearchLanDevice:(id)arg1;
- (_Bool)cancelTaskWithDevice:(id)arg1;
- (unsigned int)popEventIdRelatedWithDevice:(id)arg1;
- (id)lanDeviceWithDeviceMD5:(id)arg1;
- (id)devicesApplyScene;
- (id)devicesApplySceneAndSupportInternetKissOnly;
- (void)disconnect;
- (void)stopScan;
- (void)startScan;
- (id)initWithDelegate:(id)arg1 deviceData:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

