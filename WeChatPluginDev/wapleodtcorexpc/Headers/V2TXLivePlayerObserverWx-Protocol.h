//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "V2TXLivePlayerObserver-Protocol.h"

@protocol V2TXLivePlayerObserverWx <V2TXLivePlayerObserver>

@optional
- (void)onNetworkQuality:(long long)arg1;
- (void)onPlayNetStatus:(id)arg1;
- (void)onPlayEvent:(long long)arg1 param:(id)arg2;
@end

