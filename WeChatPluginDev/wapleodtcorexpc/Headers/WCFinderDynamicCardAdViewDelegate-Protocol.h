//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderJumpInfoViewBaseDelegate-Protocol.h"

@class WCFinderDynamicCardAdView;

@protocol WCFinderDynamicCardAdViewDelegate <WCFinderJumpInfoViewBaseDelegate>
- (void)onFinderDynamicCardAdViewDidClick:(WCFinderDynamicCardAdView *)arg1;
- (void)onFinderDynamicCardAdView:(WCFinderDynamicCardAdView *)arg1 needChangeToPhase:(unsigned long long)arg2;
@end

