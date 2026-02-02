//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationRetriever, MMLocatingCoordinateLogic, MMUILabel, NSString, SystemAuthBizInfo, _TtC6WeChat24SystemAuthCapabilityInfo;

@interface SystemAuthSettingSheetView
{
    _TtC6WeChat24SystemAuthCapabilityInfo *_capabilityInfo;
    SystemAuthBizInfo *_bizInfo;
    MMUILabel *_locationLabel;
    LocationRetriever *_locationRetriever;
    MMLocatingCoordinateLogic *_locatingLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLocatingCoordinateLogic *locatingLogic; // @synthesize locatingLogic=_locatingLogic;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(retain, nonatomic) MMUILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) SystemAuthBizInfo *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(retain, nonatomic) _TtC6WeChat24SystemAuthCapabilityInfo *capabilityInfo; // @synthesize capabilityInfo=_capabilityInfo;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)requestLocationAddress;
- (_Bool)showLocationAddress;
- (_Bool)isSwitchOn;
- (id)genSwitchView:(id)arg1;
- (void)customArrangeViews;
- (id)initWithAuthCapability:(id)arg1 scene:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

