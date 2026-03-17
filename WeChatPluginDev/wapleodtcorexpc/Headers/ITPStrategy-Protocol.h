//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPPlaybackInfo, TPStrategyContext;

@protocol ITPStrategy <NSObject>
- (void)addStrategyContext:(TPStrategyContext *)arg1;
- (long long)playerTypeForRetry:(TPPlaybackInfo *)arg1;
- (long long)playerTypeForOpen:(TPPlaybackInfo *)arg1;
@end

