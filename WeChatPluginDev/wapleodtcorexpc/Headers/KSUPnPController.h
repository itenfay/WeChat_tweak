//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KSUPnPDevice, KSUPnPDeviceService;

@interface KSUPnPController : NSObject
{
    KSUPnPDevice *_device;
    KSUPnPDeviceService *_service;
}

+ (Class)controllerClassForServiceType:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) KSUPnPDeviceService *service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak KSUPnPDevice *device; // @synthesize device=_device;
- (id)initWithDevice:(id)arg1 service:(id)arg2;

@end

