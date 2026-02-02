//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KSUPnPDiscoverer, NSDictionary, NSString;
@protocol KSUPnPServiceObserver;

@interface KSUPnPService : NSObject
{
    id <KSUPnPServiceObserver> _observer;
    NSString *_UUID;
    KSUPnPDiscoverer *_discoverer;
}

+ (id)defaultService;
- (void).cxx_destruct;
@property(retain, nonatomic) KSUPnPDiscoverer *discoverer; // @synthesize discoverer=_discoverer;
@property(copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak id <KSUPnPServiceObserver> observer; // @synthesize observer=_observer;
- (void)UPnPDiscoverer:(id)arg1 didUpdateDevice:(id)arg2;
- (void)UPnPDiscoverer:(id)arg1 didDiscoverDevice:(id)arg2;
- (void)stopDiscoveringDevices;
- (void)startDiscoveringDevicesWithConfiguration:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *deviceList;
@property(readonly, nonatomic) _Bool isDiscoveringDevices;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

