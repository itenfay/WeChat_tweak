//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMNetworkUtil : NSObject
{
}

+ (id)deviceNetworkStatistics;
+ (_Bool)isLocalhost:(const void *)arg1;
+ (_Bool)isIPAddress:(const void *)arg1 equalTo:(const void *)arg2;
+ (_Bool)isInternetwork:(const void *)arg1;
+ (unsigned int)getPortFromSocketAddr:(const void *)arg1;
+ (id)getIPFromSocketAddr:(const void *)arg1;
+ (id)getInterfaceFromSocketAddr:(const void *)arg1;

@end

