//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OrientationPlugin : NSObject
{
    int _currentOrientation;
    id _motionManager;
}

+ (void)registerWithRegistrar:(id)arg1;
- (void).cxx_destruct;
@property int currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(retain) id motionManager; // @synthesize motionManager=_motionManager;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)forceOrientation:(id)arg1;
- (void)setSystemChromePreferredOrientations:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

