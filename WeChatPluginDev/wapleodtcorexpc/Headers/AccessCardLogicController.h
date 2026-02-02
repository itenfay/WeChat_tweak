//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBCentralManager, CLLocation, DeviceInfoData, LocationRetriever, MMTimer, NSString, WCCardDataCardInfo, WCCardDataCardTPInfo;
@protocol AccessCardLogicDelegate;

@interface AccessCardLogicController
{
    MMTimer *_uploadTimer;
    CBCentralManager *_centralManager;
    DeviceInfoData *_foundDeviceWithMaxRSSI;
    _Bool _deviceInfoHasChanged;
    _Bool _deviceForceUpdate;
    NSString *_cardID;
    WCCardDataCardInfo *_cardInfo;
    WCCardDataCardTPInfo *_cardTPInfo;
    LocationRetriever *_locationRetriver;
    CLLocation *_curLocation;
    _Bool _locationHasChanged;
    _Bool _bIsBleScanning;
    _Bool _hasTurnedOnBluetooth;
    _Bool _hasAuthorizeLocation;
    _Bool _bIsShowingAlert;
    double _timerInterval;
    _Bool _bIsAlreadyShowLocationSwitchOff;
    id <AccessCardLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AccessCardLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onResponseProcess:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)makeUploadRequest;
- (void)doUplaodAction;
- (void)tryStopUploadDataLogic;
- (void)tryUploadDataLogic;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)tryStopBLELogic;
- (void)realScanBLE;
- (void)tryStartBLELogic;
- (void)reportLocationWithLocation:(id)arg1 ErrorCode:(long long)arg2;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)stopRetriveLocation;
- (void)startRetriveLocation;
- (void)tryStopLocationLogic;
- (void)tryStartLocationLogic;
- (void)alertConfirmRetriveLocation;
- (void)alertRefuseRetriveLocation;
- (void)tryStop;
- (void)tryStart;
- (void)updateWithCardID:(id)arg1 andCardInfo:(id)arg2 andCardTPInfo:(id)arg3;
- (void)dealloc;
- (id)initWithCardID:(id)arg1 andCardInfo:(id)arg2 andCardTPInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

