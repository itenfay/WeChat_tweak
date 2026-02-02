//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol LocalAreaPeerClientDelegate <NSObject>
- (void)onPeerConnectFailed;
- (void)onPeerDisconnect;
- (void)onPeerReceiveData:(NSData *)arg1;

@optional
- (void)onPeerConnected;
- (void)onPeerConnecting;
@end

