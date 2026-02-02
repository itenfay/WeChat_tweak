//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LocationRetriever, NSString, WCAdDetermineHalfScreenView;

@interface LiteAppJsApiAdGetLocation
{
    WCAdDetermineHalfScreenView *_determineHalfScreenView;
    LocationRetriever *_locationRetriever;
    long long _geoMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long geoMode; // @synthesize geoMode=_geoMode;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(retain, nonatomic) WCAdDetermineHalfScreenView *determineHalfScreenView; // @synthesize determineHalfScreenView=_determineHalfScreenView;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)notifyRetrieveLocationSuccess:(id)arg1;
- (void)retrieveLocation;
- (void)onDetermineViewDidClose:(_Bool)arg1;
- (void)onDetermineViewButtonClickedWithType:(long long)arg1 determineInfo:(id)arg2;
- (void)showLocationPermissionView;
- (void)doAdInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

