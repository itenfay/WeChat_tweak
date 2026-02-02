//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol KSUPnPDiscovererDelegate, OS_dispatch_queue;

@interface KSUPnPDiscoverer : NSObject
{
    _Bool _isDiscoveringDevices;
    NSString *_UUID;
    id <KSUPnPDiscovererDelegate> _delegate;
    NSMutableDictionary *_deviceList;
    unsigned long long _lastDiscoverySequence;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long lastDiscoverySequence; // @synthesize lastDiscoverySequence=_lastDiscoverySequence;
@property(readonly, nonatomic) NSMutableDictionary *deviceList; // @synthesize deviceList=_deviceList;
@property _Bool isDiscoveringDevices; // @synthesize isDiscoveringDevices=_isDiscoveringDevices;
@property(nonatomic) __weak id <KSUPnPDiscovererDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void)deviceStatusDidChange:(id)arg1;
- (id)sendBroadcastMessageWithRequest:(id)arg1;
- (void)handleDiscoveredDevice:(id)arg1;
- (void)stopDiscoveringDevices;
- (void)startDiscoveringDevicesWithConfiguration:(id)arg1;
- (id)createSSDPRequest;
- (void)dealloc;
- (void)_init;
- (id)initWithUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

