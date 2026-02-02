//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderJumpInfoViewBaseDelegate-Protocol.h"

@class WCFinderJumpInfoDynamicCarouselView;

@protocol WCFinderJumpInfoDynamicCarouselViewDelegate <WCFinderJumpInfoViewBaseDelegate>
- (void)onFinderJumpInfoDynamicCarouselViewDidClickActionButton:(WCFinderJumpInfoDynamicCarouselView *)arg1;
- (void)onFinderJumpInfoDynamicCarouselViewDidClickCard:(WCFinderJumpInfoDynamicCarouselView *)arg1;
- (void)onFinderJumpInfoDynamicCarouselView:(WCFinderJumpInfoDynamicCarouselView *)arg1 needchangeToPhase:(unsigned long long)arg2;
@end

