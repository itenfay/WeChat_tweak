//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MCNearbyServiceBrowser, MCPeerID, NSDictionary, NSError;

@protocol MCNearbyServiceBrowserDelegate <NSObject>
- (void)browser:(MCNearbyServiceBrowser *)arg1 lostPeer:(MCPeerID *)arg2;
- (void)browser:(MCNearbyServiceBrowser *)arg1 foundPeer:(MCPeerID *)arg2 withDiscoveryInfo:(NSDictionary *)arg3;

@optional
- (void)browser:(MCNearbyServiceBrowser *)arg1 didNotStartBrowsingForPeers:(NSError *)arg2;
@end

