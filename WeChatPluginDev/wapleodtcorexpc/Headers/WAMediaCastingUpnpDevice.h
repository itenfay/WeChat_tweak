//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;
@protocol WAMediaCastingUpnpDeviceService;

@interface WAMediaCastingUpnpDevice : NSObject
{
    NSString *_deviceID;
    NSString *_address;
    NSString *_usn;
    NSString *_uuid;
    NSString *_location;
    NSString *_friendlyName;
    NSString *_modelName;
    NSString *_modelNumber;
    NSString *_modelDescription;
    NSString *_manufacturer;
    NSDictionary<WAMediaCastingUpnpDeviceService> *_servicesDictionary;
    NSURL *_commandBaseURL;
    NSString *_XMLString;
}

+ (id)deviceIDWithUUID:(id)arg1 address:(id)arg2;
+ (id)deviceWithLocation:(id)arg1 usn:(id)arg2 uuid:(id)arg3 data:(id)arg4 address:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *XMLString; // @synthesize XMLString=_XMLString;
@property(copy, nonatomic) NSURL *commandBaseURL; // @synthesize commandBaseURL=_commandBaseURL;
@property(retain, nonatomic) NSDictionary<WAMediaCastingUpnpDeviceService> *servicesDictionary; // @synthesize servicesDictionary=_servicesDictionary;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(copy, nonatomic) NSString *modelDescription; // @synthesize modelDescription=_modelDescription;
@property(copy, nonatomic) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *usn; // @synthesize usn=_usn;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (id)SOAPActionWithCommandName:(id)arg1 serviceType:(id)arg2;
- (id)commandURLWithServiceType:(id)arg1;
- (id)description;

@end

