//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface KSUPnPDeviceService : NSObject
{
    NSString *_serviceType;
    NSString *_serviceId;
    NSURL *_SCPDURL;
    NSURL *_controlURL;
    NSURL *_eventSubURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *eventSubURL; // @synthesize eventSubURL=_eventSubURL;
@property(retain, nonatomic) NSURL *controlURL; // @synthesize controlURL=_controlURL;
@property(retain, nonatomic) NSURL *SCPDURL; // @synthesize SCPDURL=_SCPDURL;
@property(copy, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (id)description;

@end

