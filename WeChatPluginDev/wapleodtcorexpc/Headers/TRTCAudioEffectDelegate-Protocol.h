//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TRTCAudioEffectDelegate <NSObject>
- (void)onBgmPlayEnd:(long long)arg1 code:(long long)arg2 reason:(NSString *)arg3;
- (void)onBgmPlayProgress:(long long)arg1 currentTime:(long long)arg2 totalTime:(long long)arg3;
- (void)onBgmPlayStart:(long long)arg1 code:(long long)arg2 reason:(NSString *)arg3;
@end

