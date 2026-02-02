//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL;
@protocol KSUPnPDeviceStatusObserver;

@interface KSUPnPDevice : NSObject
{
    NSMutableDictionary *_controllers;
    NSString *_instanceDescription;
    NSString *_USN;
    long long _status;
    NSDictionary *_discoverInfo;
    NSURL *_deviceDescriptionURL;
    NSString *_searchTarget;
    NSURL *_baseURL;
    NSString *_deviceType;
    NSString *_friendlyName;
    NSString *_manufacturer;
    NSURL *_manufacturerURL;
    NSString *_modelDescription;
    NSString *_modelName;
    NSString *_modelNumber;
    NSArray *_serviceList;
    id <KSUPnPDeviceStatusObserver> _statusObserver;
    NSDictionary *_discoverInfoForParsing;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *discoverInfoForParsing; // @synthesize discoverInfoForParsing=_discoverInfoForParsing;
@property(nonatomic) __weak id <KSUPnPDeviceStatusObserver> statusObserver; // @synthesize statusObserver=_statusObserver;
@property(copy, nonatomic) NSArray *serviceList; // @synthesize serviceList=_serviceList;
@property(copy, nonatomic) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSString *modelDescription; // @synthesize modelDescription=_modelDescription;
@property(retain, nonatomic) NSURL *manufacturerURL; // @synthesize manufacturerURL=_manufacturerURL;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(copy, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *searchTarget; // @synthesize searchTarget=_searchTarget;
@property(retain, nonatomic) NSURL *deviceDescriptionURL; // @synthesize deviceDescriptionURL=_deviceDescriptionURL;
@property(copy, nonatomic) NSDictionary *discoverInfo; // @synthesize discoverInfo=_discoverInfo;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *USN; // @synthesize USN=_USN;
@property(readonly, copy, nonatomic) NSString *propertiesDescription;
@property(readonly, copy, nonatomic) NSString *instanceDescription; // @synthesize instanceDescription=_instanceDescription;
- (id)description;
- (id)controllerForServiceType:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *controllers; // @synthesize controllers=_controllers;
- (id)serviceForType:(id)arg1;
- (_Bool)isPrimaryDiscoverInfoEqualToDevice:(id)arg1;
- (void)updateWithDiscoverResponseData:(id)arg1;
- (id)initWithDiscoverResponseData:(id)arg1;
- (void)updateWithDiscoverInfo:(id)arg1;
- (id)initWithDiscoverInfo:(id)arg1;
- (void)_didInit;
- (_Bool)_isValid;
- (id)initWithUSN:(id)arg1;
- (void)handleFailureForDeviceDescriptionWithRecord:(id)arg1 error:(id)arg2;
- (void)handleSuccessForDeviceDescriptionWithRecord:(id)arg1;
- (void)handleDeviceDescriptionWithRecord:(id)arg1 response:(id)arg2 data:(id)arg3;
- (void)requestDeviceDescription;
- (_Bool)parseDescriptionFromXMLData:(id)arg1;

@end

