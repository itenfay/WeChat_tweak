//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderJumpInfoViewBaseDelegate-Protocol.h"

@class WCFinderJumpInfoHardAdView;

@protocol WCFinderJumpInfoHardAdViewDelegate <WCFinderJumpInfoViewBaseDelegate>
- (void)onFinderJumpInfoHardAdViewDidClick:(WCFinderJumpInfoHardAdView *)arg1;
- (void)onFinderJumpInfoHardAdView:(WCFinderJumpInfoHardAdView *)arg1 needChangeToPhase:(unsigned long long)arg2;
@end

