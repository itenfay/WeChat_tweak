//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class KSUPnPDevice, KSUPnPDiscoverer;

@protocol KSUPnPDiscovererDelegate <NSObject>

@optional
- (void)UPnPDiscoverer:(KSUPnPDiscoverer *)arg1 didUpdateDevice:(KSUPnPDevice *)arg2;
- (void)UPnPDiscoverer:(KSUPnPDiscoverer *)arg1 didDiscoverDevice:(KSUPnPDevice *)arg2;
@end

