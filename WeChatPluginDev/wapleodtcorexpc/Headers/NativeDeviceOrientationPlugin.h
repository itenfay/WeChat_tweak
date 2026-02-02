//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NativeDeviceOrientationPlugin : NSObject
{
    id _observer;
    CDUnknownBlockType _orientationRetrieved;
}

+ (void)registerWithRegistrar:(id)arg1;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType orientationRetrieved; // @synthesize orientationRetrieved=_orientationRetrieved;
@property(retain) id observer; // @synthesize observer=_observer;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)resume;
- (void)pause;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

