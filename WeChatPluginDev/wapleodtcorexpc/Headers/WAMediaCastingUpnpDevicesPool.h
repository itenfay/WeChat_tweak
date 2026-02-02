//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WAMediaCastingUpnpDevicesPool : NSObject
{
    NSMutableDictionary *_pool;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(retain, nonatomic) NSMutableDictionary *pool; // @synthesize pool=_pool;
- (id)allDevices;
- (void)removeAll;
- (void)removeDevicesWithUSN:(id)arg1 uuid:(id)arg2 address:(id)arg3;
- (void)addDevicesWithLocation:(id)arg1 usn:(id)arg2 uuid:(id)arg3 data:(id)arg4 address:(id)arg5;
- (id)init;

@end

