//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoIPMPSystemAuthNativeAPICallback : NSObject
{
    struct VoIPMPSystemAuthNativeAPIDispatcherBridgeObjcImpl *dispatcher_bridge;
}

- (void)onRequestComplete:(unsigned long long)arg1 isAuthorized:(_Bool)arg2;
- (id)initWithCpp:(struct VoIPMPSystemAuthNativeAPIDispatcherBridgeObjcImpl *)arg1;

@end

