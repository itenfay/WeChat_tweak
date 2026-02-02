//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "V2TXLivePusherObserver-Protocol.h"

@class NSDictionary, NSString;

@protocol V2TXLivePusherObserverWx <V2TXLivePusherObserver>

@optional
- (void)onNetworkQuality:(long long)arg1;
- (void)onUserAudioAvailable:(NSString *)arg1 available:(_Bool)arg2;
- (void)onUserVideoAvailable:(NSString *)arg1 streamType:(long long)arg2 available:(_Bool)arg3;
- (void)onRemoteUserExit:(NSString *)arg1 reason:(long long)arg2;
- (void)onRemoteUserEnter:(NSString *)arg1;
- (void)onExitRoom:(long long)arg1;
- (void)onEnterRoom:(long long)arg1;
- (void)onPushNetStatus:(NSDictionary *)arg1;
- (void)onPushEvent:(long long)arg1 param:(NSDictionary *)arg2;
@end

