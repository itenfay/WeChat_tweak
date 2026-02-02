//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSOperationQueue, TencentLBSReachability;

@interface TencentLBSWifiManager : NSObject
{
    NSDictionary *_wifiInfo;
    TencentLBSReachability *_internetReachability;
    NSOperationQueue *_queue;
}

+ (id)captiveWifiInfo;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) TencentLBSReachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property(retain) NSDictionary *wifiInfo; // @synthesize wifiInfo=_wifiInfo;
- (void)reachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

