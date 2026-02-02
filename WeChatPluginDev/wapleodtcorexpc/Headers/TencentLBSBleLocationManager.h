//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, TencentLBSLocation, TencentLBSLocationReGeocoder;

@interface TencentLBSBleLocationManager : NSObject
{
    int _mbearing;
    TencentLBSLocationReGeocoder *_reGeoManger;
    NSMutableArray *_resultBlocks;
    double _lastBeaconUpdate;
    TencentLBSLocation *_mlastBleLocation;
    NSMutableArray *_singleFixBlocks;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSMutableArray *singleFixBlocks; // @synthesize singleFixBlocks=_singleFixBlocks;
@property int mbearing; // @synthesize mbearing=_mbearing;
@property(retain) TencentLBSLocation *mlastBleLocation; // @synthesize mlastBleLocation=_mlastBleLocation;
@property double lastBeaconUpdate; // @synthesize lastBeaconUpdate=_lastBeaconUpdate;
@property(retain) NSMutableArray *resultBlocks; // @synthesize resultBlocks=_resultBlocks;
@property(retain) TencentLBSLocationReGeocoder *reGeoManger; // @synthesize reGeoManger=_reGeoManger;
- (void)singlePosCachUpdate:(id)arg1;
- (void)removeTencentLBSSingleFixBlock:(CDUnknownBlockType)arg1;
- (void)addTencentLBSSingleFixBlock:(CDUnknownBlockType)arg1;
- (void)callBackBleResult:(id)arg1 bearing:(int)arg2 wlanFix:(int)arg3 wlanUse:(int)arg4;
- (void)requestBleLocationWithRequestlevel:(unsigned long long)arg1 beacons:(id)arg2 coordinateType:(unsigned long long)arg3 isSingleRequest:(_Bool)arg4 appName:(id)arg5 smallKey:(id)arg6 withLocation:(id)arg7;
- (void)removeTencentLBSBleBlock:(CDUnknownBlockType)arg1;
- (void)setTencentLBSBleBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

