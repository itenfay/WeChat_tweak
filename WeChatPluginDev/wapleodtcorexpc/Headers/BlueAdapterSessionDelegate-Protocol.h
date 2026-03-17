//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "BlueAdapterDelegateBase-Protocol.h"

@protocol BlueAdapterSessionDelegate <BlueAdapterDelegateBase>

@optional
- (void)onSessionClosed:(long long)arg1;
- (void)onSessionDataAvailable:(long long)arg1;
- (void)onSessionError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionWrote:(long long)arg1;
- (void)onSessionConnectError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionConnected:(long long)arg1;
@end

