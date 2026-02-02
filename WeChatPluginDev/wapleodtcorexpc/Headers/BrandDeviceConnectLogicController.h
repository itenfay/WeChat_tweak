//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSMutableArray, NSMutableSet, NSString;
@protocol BrandDeviceConnectLogicControllerDelegate;

@interface BrandDeviceConnectLogicController
{
    CContact *m_contact;
    int m_brandDeviceConnectedCount;
    NSMutableArray *m_devices;
    NSMutableSet *m_hasTryOnceDeviceSet;
    _Bool m_is15SScanEnd;
    _Bool m_hasLongConnetDevice;
    _Bool m_hasWifiDevice;
    _Bool m_hasEADevice;
    _Bool m_hasBLEDevice;
    id <BrandDeviceConnectLogicControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BrandDeviceConnectLogicControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onWCDeviceAccountUnbind:(id)arg1;
- (void)onBlueProfilePedometerInfoUpdated:(long long)arg1 Info:(id)arg2;
- (void)onBlueProfileConnectStateChanged:(long long)arg1 State:(int)arg2 ErrorCode:(int)arg3;
- (void)onWCDeviceSessionTimeout:(long long)arg1;
- (void)onWCDeviceBlueToothStateChanged:(int)arg1;
- (void)onWCDeviceInitEnd:(int)arg1 DID:(long long)arg2 isHandled:(_Bool *)arg3;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 isHandled:(_Bool *)arg3;
- (void)onWCDeviceChannelStateChanged:(long long)arg1:(int)arg2:(int)arg3;
- (void)onWCDeviceLost:(long long)arg1;
- (void)onWCDeviceFound:(long long)arg1 canHandled:(_Bool *)arg2;
- (void)onWCDeviceWifiStatusUpdate:(id)arg1 Status:(unsigned int)arg2;
- (void)showErrTips:(int)arg1;
- (void)scanTimeout;
- (void)stopScan;
- (void)restartScan;
- (void)startScan;
- (void)wifiStateUpdate;
- (void)updateSubTitle;
- (void)genConnProtoAndDoScan;
- (void)internalStartScan:(_Bool)arg1;
- (void)updateBrandDevciesType;
- (id)getDeviceForDid:(long long)arg1;
- (void)willEnterForeground;
- (id)initWithContact:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

