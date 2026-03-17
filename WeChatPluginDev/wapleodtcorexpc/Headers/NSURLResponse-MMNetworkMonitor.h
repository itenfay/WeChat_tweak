//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSURLResponse.h>

@interface NSURLResponse (MMNetworkMonitor)
- (unsigned long long)mmGetBytesReceived;
- (void)logToConsole;
@end

