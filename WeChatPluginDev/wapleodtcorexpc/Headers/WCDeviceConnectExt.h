//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCDevice;

@interface WCDeviceConnectExt
{
    WCDevice *_device;
    int _connectState;
    _Bool _tryConnect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool tryConnect; // @synthesize tryConnect=_tryConnect;
@property(retain, nonatomic) WCDevice *device; // @synthesize device=_device;
@property(nonatomic) int connectState; // @synthesize connectState=_connectState;

@end

