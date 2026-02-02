//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAMediaCastingUpnpDevice;

@interface WAMediaCastingRoutePickerDeviceItem : NSObject
{
    unsigned long long _deviceType;
    NSString *_name;
    WAMediaCastingUpnpDevice *_upnpDevice;
}

+ (id)deviceItemAirPlay;
+ (id)deviceItemUpnp:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WAMediaCastingUpnpDevice *upnpDevice; // @synthesize upnpDevice=_upnpDevice;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long deviceType; // @synthesize deviceType=_deviceType;

@end

