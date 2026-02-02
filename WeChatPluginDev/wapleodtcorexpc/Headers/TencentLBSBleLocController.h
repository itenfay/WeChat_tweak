//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TencentLBSLocation;

@interface TencentLBSBleLocController : NSObject
{
    TencentLBSLocation *_beaconLocation;
    TencentLBSLocation *_beaconLocation_02;
    TencentLBSLocation *_pdrLocation;
    TencentLBSLocation *_pdrLocation_02;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) TencentLBSLocation *pdrLocation_02; // @synthesize pdrLocation_02=_pdrLocation_02;
@property(retain) TencentLBSLocation *pdrLocation; // @synthesize pdrLocation=_pdrLocation;
@property(retain) TencentLBSLocation *beaconLocation_02; // @synthesize beaconLocation_02=_beaconLocation_02;
@property(retain) TencentLBSLocation *beaconLocation; // @synthesize beaconLocation=_beaconLocation;
- (id)getTencentPdrLocation_02;
- (void)updatePdrLocation_02:(id)arg1;
- (id)getTencentBleLocation_02;
- (void)updateBleLocation_02:(id)arg1;
- (id)getTencentPdrLocation;
- (void)updatePdrLocation:(id)arg1;
- (id)getTencentBleLocation;
- (void)updateBleLocation:(id)arg1;

@end

