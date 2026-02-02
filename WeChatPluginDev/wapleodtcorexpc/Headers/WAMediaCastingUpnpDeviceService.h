//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMediaCastingUpnpDeviceService : NSObject
{
    NSString *_SCPDURL;
    NSString *_controlURL;
    NSString *_eventSubURL;
    NSString *_serviceId;
    NSString *_serviceType;
}

+ (id)deviceServiceWithInfo:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(copy, nonatomic) NSString *eventSubURL; // @synthesize eventSubURL=_eventSubURL;
@property(copy, nonatomic) NSString *controlURL; // @synthesize controlURL=_controlURL;
@property(copy, nonatomic) NSString *SCPDURL; // @synthesize SCPDURL=_SCPDURL;

@end

