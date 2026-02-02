//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AirKissConfData, NSString, UIScrollView, UIView, WCDevice;

@interface WCDeviceSearchGuideViewController
{
    WCDevice *m_device;
    AirKissConfData *m_confData;
    UIScrollView *m_scrolView;
    UIView *m_noWifiOrBLEView;
}

- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onWCDeviceBlueToothStateChanged:(int)arg1;
- (_Bool)isWifiConnected;
- (_Bool)isBLEConnected;
- (void)updateConnectState;
- (void)onAirKissReturn:(_Bool)arg1;
- (void)onDeviceSearch;
- (void)onAirKiss;
- (void)initNoWifiOrBLEView;
- (void)initGuideView;
- (void)viewDidLoad;
- (id)initWithFilterUserData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

