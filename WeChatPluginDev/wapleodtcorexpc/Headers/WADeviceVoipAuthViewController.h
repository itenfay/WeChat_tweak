//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableSet;

@interface WADeviceVoipAuthViewController
{
    NSArray *_deviceList;
    NSMutableSet *_statusChangedDevice;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *statusChangedDevice; // @synthesize statusChangedDevice=_statusChangedDevice;
@property(retain, nonatomic) NSArray *deviceList; // @synthesize deviceList=_deviceList;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)reloadUI;
- (void)viewDidLoad;
- (id)init;

@end

