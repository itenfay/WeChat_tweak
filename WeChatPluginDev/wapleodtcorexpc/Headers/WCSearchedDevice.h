//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSDictionary, WCBLEDevice, WCDevice, WCLanDeviceInfo;

@interface WCSearchedDevice : NSObject
{
    int _connProto;
    WCDevice *_originalDevice;
    WCBLEDevice *_bleDevice;
    WCLanDeviceInfo *_lanDevice;
    NSDictionary *_userData;
    CContact *_deviceContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *deviceContact; // @synthesize deviceContact=_deviceContact;
@property(retain, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) WCLanDeviceInfo *lanDevice; // @synthesize lanDevice=_lanDevice;
@property(retain, nonatomic) WCBLEDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property(retain, nonatomic) WCDevice *originalDevice; // @synthesize originalDevice=_originalDevice;
@property(nonatomic) int connProto; // @synthesize connProto=_connProto;
- (id)initWithLanDevice:(id)arg1;
- (id)initWithBleDevice:(id)arg1;
- (id)init;

@end

