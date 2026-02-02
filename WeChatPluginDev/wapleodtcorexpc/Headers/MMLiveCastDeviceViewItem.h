//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KSUPnPController_AVTransport, KSUPnPDevice;

@interface MMLiveCastDeviceViewItem
{
    KSUPnPDevice *_device;
    KSUPnPController_AVTransport *_AVTransportController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KSUPnPController_AVTransport *AVTransportController; // @synthesize AVTransportController=_AVTransportController;
@property(readonly, nonatomic) KSUPnPDevice *device; // @synthesize device=_device;
- (void)stopCastingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startCastingWithURL:(id)arg1 title:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reloadValuesFromDevice;
- (id)initWithDevice:(id)arg1;

@end

