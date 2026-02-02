//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSTimer, WAMediaCastingUpnpDevicesPool;
@protocol OS_dispatch_queue, OS_dispatch_source, WAMediaCastingUpnpDiscoveryDelegate;

@interface WAMediaCastingUpnpDiscovery : NSObject
{
    _Bool _isSearching;
    int _fd;
    id <WAMediaCastingUpnpDiscoveryDelegate> _delegate;
    WAMediaCastingUpnpDevicesPool *_devicesPool;
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSTimer *_sendTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *sendTimer; // @synthesize sendTimer=_sendTimer;
@property(nonatomic) int fd; // @synthesize fd=_fd;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchSource; // @synthesize dispatchSource=_dispatchSource;
@property(retain, nonatomic) WAMediaCastingUpnpDevicesPool *devicesPool; // @synthesize devicesPool=_devicesPool;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(nonatomic) __weak id <WAMediaCastingUpnpDiscoveryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyDeviceChanged;
- (void)handleDeviceByeByeWith:(id)arg1 uuid:(id)arg2 address:(id)arg3;
- (void)handleLocation:(id)arg1 usn:(id)arg2 uuid:(id)arg3 address:(id)arg4;
- (void)onReceiveData:(id)arg1 address:(id)arg2;
- (id)searchRequestData;
- (void)close;
- (void)raiseError:(id)arg1;
- (void)timeTick;
- (void)sendBroadcast;
- (void)openBroadcast;
- (void)searchWithTimeout:(double)arg1;
- (void)cancelSearch;
- (void)dealloc;
- (id)init;

@end

