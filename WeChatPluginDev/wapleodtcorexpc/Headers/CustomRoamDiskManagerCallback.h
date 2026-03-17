//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CustomRoamDiskManagerCallback : NSObject
{
    struct CustomRoamDiskManagerDispatcherBridgeObjcImpl *dispatcher_bridge;
}

- (void)onDeviceDiscoveredEvent:(id)arg1 specialInfoPb:(id)arg2;
- (id)initWithCpp:(struct CustomRoamDiskManagerDispatcherBridgeObjcImpl *)arg1;

@end

