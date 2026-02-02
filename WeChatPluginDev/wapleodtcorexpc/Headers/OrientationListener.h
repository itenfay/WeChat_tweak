//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OrientationListener : NSObject
{
    long long lastDeviceOrientation;
    NSString *lastOrientation;
    id _observer;
}

- (void).cxx_destruct;
@property(retain) id observer; // @synthesize observer=_observer;
- (void)stopOrientationListener;
- (id)getDeviceOrientation;
- (void)getOrientation:(CDUnknownBlockType)arg1;
- (void)startOrientationListener:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

