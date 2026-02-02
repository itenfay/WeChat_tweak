//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TencentLBSLocationManager;

@interface WAJSEventHandler_getFuzzyLocation
{
    unsigned long long m_geoLocationType;
    NSString *_openId;
    TencentLBSLocationManager *_locationMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TencentLBSLocationManager *locationMgr; // @synthesize locationMgr=_locationMgr;
- (struct CLLocationCoordinate2D)randomDeviate:(struct CLLocationCoordinate2D)arg1;
- (void)onTencentLBSLocationError:(id)arg1;
- (void)onTencentLBSLocationGot:(id)arg1;
- (void)updateWebviewTitle;
- (void)onDelayDismiss;
- (void)requestAddressSync;
- (void)startRequestAddress;
- (void)handleJSEvent:(id)arg1;

@end

