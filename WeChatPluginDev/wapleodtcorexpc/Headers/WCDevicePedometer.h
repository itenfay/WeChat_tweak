//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCDevice;

@interface WCDevicePedometer : NSObject
{
    WCDevice *device;
    NSString *ticket;
    NSString *displayName;
    NSString *iconUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket;
@property(retain, nonatomic) WCDevice *device; // @synthesize device;

@end

