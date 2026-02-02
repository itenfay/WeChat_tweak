//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface DeviceILinkService
{
    NSMutableArray *_iLinkDevices;
    NSMutableArray *_privateILinkDevices;
    NSMutableArray *_publicILinkDevices;
    long long _deviceCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long deviceCount; // @synthesize deviceCount=_deviceCount;
@property(retain, nonatomic) NSMutableArray *publicILinkDevices; // @synthesize publicILinkDevices=_publicILinkDevices;
@property(retain, nonatomic) NSMutableArray *privateILinkDevices; // @synthesize privateILinkDevices=_privateILinkDevices;
@property(retain, nonatomic) NSMutableArray *iLinkDevices; // @synthesize iLinkDevices=_iLinkDevices;
- (id)getPublicILinkDevices;
- (id)getPrivateILinkDevices;
- (_Bool)hasAvailableDeviceInType:(id)arg1;
- (_Bool)hasAvailableDeviceInMessageWrap:(id)arg1;
- (id)getILinkDevicesForMsg:(id)arg1;
- (id)getILinkDevices;
- (int)getDeviceCount;
- (void)requestDeviceCount;
- (void)refreshDataFromResp:(id)arg1;
- (void)onAuthOK;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onServiceClearData;
- (void)restoreData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

