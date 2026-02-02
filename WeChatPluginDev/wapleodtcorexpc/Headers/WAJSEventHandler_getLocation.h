//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TencentLBSLocationManager;

@interface WAJSEventHandler_getLocation
{
    unsigned long long m_geoLocationType;
    NSString *_subKey;
    NSString *_openId;
    _Bool _enableIndoor;
    double _highAccuracyTimeout;
    double _beginTime;
    double _getLocationTimeStamp;
    TencentLBSLocationManager *_locationMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TencentLBSLocationManager *locationMgr; // @synthesize locationMgr=_locationMgr;
@property(nonatomic) double getLocationTimeStamp; // @synthesize getLocationTimeStamp=_getLocationTimeStamp;
- (void)onTencentLBSLocationError:(id)arg1;
- (void)reportID;
- (void)onTencentLBSLocationChanged:(id)arg1;
- (void)updateWebviewTitle;
- (void)onDelayDismiss;
- (void)requestAddressSync;
- (void)startRequestAddress;
- (void)handleJSEvent:(id)arg1;

@end

