//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSNetService, NSNetServiceBrowser, NSString;

@protocol NSNetServiceBrowserDelegate <NSObject>

@optional
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didRemoveService:(NSNetService *)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didRemoveDomain:(NSString *)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didFindService:(NSNetService *)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didFindDomain:(NSString *)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg1 didNotSearch:(NSDictionary *)arg2;
- (void)netServiceBrowserDidStopSearch:(NSNetServiceBrowser *)arg1;
- (void)netServiceBrowserWillSearch:(NSNetServiceBrowser *)arg1;
@end

