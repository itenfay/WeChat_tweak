//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CustomRoamDiskManagerCallback, NSString;

@interface WXGRoamCustomDiskManagerBridge : NSObject
{
    CustomRoamDiskManagerCallback *_diskManagerCb;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CustomRoamDiskManagerCallback *diskManagerCb; // @synthesize diskManagerCb=_diskManagerCb;
- (id)genAutoTestDeviceInfo;
- (void)scanDevices;
- (void)setCallback:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

