//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WABluetoothMonitoredDevice : NSObject
{
    NSString *_deviceUUID;
    NSString *_wechatToken;
    NSString *_envVersion;
    NSString *_entryPackage;
    NSString *_appId;
    NSString *_extraData;
    double _delayReconnectTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_extraData;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_entryPackage;
+ (void)PBArrayAdd_envVersion;
+ (void)PBArrayAdd_wechatToken;
+ (void)PBArrayAdd_deviceUUID;
- (void).cxx_destruct;
@property(nonatomic) double delayReconnectTime; // @synthesize delayReconnectTime=_delayReconnectTime;
@property(copy, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *entryPackage; // @synthesize entryPackage=_entryPackage;
@property(copy, nonatomic) NSString *envVersion; // @synthesize envVersion=_envVersion;
@property(copy, nonatomic) NSString *wechatToken; // @synthesize wechatToken=_wechatToken;
@property(copy, nonatomic) NSString *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

