//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderPlayAPMMonitor : NSObject
{
    unsigned long long _lastNetworkType;
}

@property(nonatomic) unsigned long long lastNetworkType; // @synthesize lastNetworkType=_lastNetworkType;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)reportDiskFreeSpaceSize;
- (void)dealloc;
- (id)init;

@end

