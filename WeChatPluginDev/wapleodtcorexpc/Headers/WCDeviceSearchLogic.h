//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, WCDevice, WCDeviceBrandMgr, WCLanDeviceMgr;
@protocol WCDeviceSearchLogicDelegate;

@interface WCDeviceSearchLogic : NSObject
{
    WCDeviceBrandMgr *m_manager;
    WCLanDeviceMgr *m_LanManager;
    WCDevice *m_fliterDevice;
    NSMutableSet *m_macSet;
    NSMutableDictionary *m_bleDeviceMap;
    id <WCDeviceSearchLogicDelegate> _delegate;
    unsigned long long _deviceSearchType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long deviceSearchType; // @synthesize deviceSearchType=_deviceSearchType;
@property(nonatomic) __weak id <WCDeviceSearchLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onBLEHardDeviceSearch:(id)arg1 modContact:(id)arg2 respData:(id)arg3 errorCode:(int)arg4;
- (void)onWCDeviceFound:(long long)arg1 canHandled:(_Bool *)arg2;
- (void)onWifiHardDeviceSearch:(id)arg1 respData:(id)arg2 ExtData:(id)arg3;
- (void)onReceiveWCLanDeviceDisc:(id)arg1;
- (_Bool)isBLEDeviceBoundWithDid:(long long)arg1;
- (_Bool)fliterDevice:(id)arg1;
- (void)stopScan;
- (void)startScan;
- (void)dealloc;
- (id)initWithFliterDevice:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

