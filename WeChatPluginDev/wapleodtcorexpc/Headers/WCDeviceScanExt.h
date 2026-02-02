//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, WCDevice;

@interface WCDeviceScanExt
{
    WCDevice *_device;
    NSData *_extData;
    unsigned int _lastOnScanTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastOnScanTime; // @synthesize lastOnScanTime=_lastOnScanTime;
@property(retain, nonatomic) NSData *extData; // @synthesize extData=_extData;
@property(retain, nonatomic) WCDevice *device; // @synthesize device=_device;

@end

