//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, TencentLBSSensorManager;
@protocol OS_dispatch_source;

@interface TencentLBSIndoorPDRManager : NSObject
{
    _Bool _isBleLocationStart;
    int _startNum;
    int _mSteps;
    TencentLBSSensorManager *_sensorManager;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_source> *_pdrCalbackTimer;
    double _heading;
    NSMutableArray *_pdrCallBacks;
    long long _lastPdrUpdateT;
    long long _lastPdrCallbackT;
    long long _startpdrT;
    double _bleArriveTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property int mSteps; // @synthesize mSteps=_mSteps;
@property double bleArriveTime; // @synthesize bleArriveTime=_bleArriveTime;
@property(nonatomic) long long startpdrT; // @synthesize startpdrT=_startpdrT;
@property long long lastPdrCallbackT; // @synthesize lastPdrCallbackT=_lastPdrCallbackT;
@property long long lastPdrUpdateT; // @synthesize lastPdrUpdateT=_lastPdrUpdateT;
@property(copy, nonatomic) NSMutableArray *pdrCallBacks; // @synthesize pdrCallBacks=_pdrCallBacks;
@property _Bool isBleLocationStart; // @synthesize isBleLocationStart=_isBleLocationStart;
@property int startNum; // @synthesize startNum=_startNum;
@property double heading; // @synthesize heading=_heading;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pdrCalbackTimer; // @synthesize pdrCalbackTimer=_pdrCalbackTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain) TencentLBSSensorManager *sensorManager; // @synthesize sensorManager=_sensorManager;
- (void)stopPdrInQueue;
- (void)inPdrQueueBleLocationCreateWithlat:(double)arg1 lng:(double)arg2 accuracy:(double)arg3 building:(id)arg4 floor:(id)arg5;
- (void)startPdrInPdrQueue;
- (int)obtainPdrSteps;
- (void)stopPdr;
- (void)onBleLocationCreateWithlat:(double)arg1 lng:(double)arg2 accuracy:(double)arg3 building:(id)arg4 floor:(id)arg5;
- (void)setPdrCoorType:(int)arg1;
- (void)startPdr;
- (void)removePdrcallbackFromArray:(CDUnknownBlockType)arg1;
- (void)setPdrCallBackBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

