//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TencentLBSLocationManager;

@interface QLBSLocationManager
{
    _Bool _toTriggerLocationCheck;
    TencentLBSLocationManager *_manager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TencentLBSLocationManager *manager; // @synthesize manager=_manager;
@property(nonatomic) _Bool toTriggerLocationCheck; // @synthesize toTriggerLocationCheck=_toTriggerLocationCheck;
- (void)tencentLBSLocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)requestWhenInUseAuthorization;
- (id)initWithKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

