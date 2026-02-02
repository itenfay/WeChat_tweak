//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, Reachability;

@interface FLTConnectivityPlusPlugin : NSObject
{
    CDUnknownBlockType _eventSink;
    Reachability *_reachabilityForInternetConnection;
}

+ (void)registerWithRegistrar:(id)arg1;
- (void).cxx_destruct;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)onReachabilityDidChange:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)statusFromReachability:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

