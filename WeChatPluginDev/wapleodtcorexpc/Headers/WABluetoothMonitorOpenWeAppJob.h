//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WABluetoothMonitoredDevice;

@interface WABluetoothMonitorOpenWeAppJob : NSObject
{
    NSString *_appId;
    WABluetoothMonitoredDevice *_monitoredDevice;
    CDUnknownBlockType _terminateHandler;
    CDUnknownBlockType _openSuccessHandler;
    CDUnknownBlockType _openFailHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType openFailHandler; // @synthesize openFailHandler=_openFailHandler;
@property(copy, nonatomic) CDUnknownBlockType openSuccessHandler; // @synthesize openSuccessHandler=_openSuccessHandler;
@property(copy, nonatomic) CDUnknownBlockType terminateHandler; // @synthesize terminateHandler=_terminateHandler;
@property(retain, nonatomic) WABluetoothMonitoredDevice *monitoredDevice; // @synthesize monitoredDevice=_monitoredDevice;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)description;

@end

