//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TXCDispatchQueue;
@protocol TXCGSensorDelegate;

@interface TXCGSensor : NSObject
{
    _Bool _enabled;
    id <TXCGSensorDelegate> _delegate;
    unsigned long long _gSensorMode;
    unsigned long long _rotation;
    long long _homeOrientation;
    TXCDispatchQueue *_queue;
    long long _interfaceOrientation;
}

+ (long long)currentInterfaceOrientation;
- (void).cxx_destruct;
@property long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) long long homeOrientation; // @synthesize homeOrientation=_homeOrientation;
@property(nonatomic) unsigned long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) unsigned long long gSensorMode; // @synthesize gSensorMode=_gSensorMode;
@property(nonatomic) __weak id <TXCGSensorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (unsigned long long)renderRotationWithFixedLayout;
- (unsigned long long)encodeRotationWithDeviceOrientation:(long long)arg1;
- (unsigned long long)renderRotation;
- (unsigned long long)encodeRotation;
- (_Bool)isViewInLandscape;
- (void)notifyRenderChange;
- (void)notifyEncodeChange;
- (void)onOrientationChange;
- (id)initWithQueue:(id)arg1;

@end

