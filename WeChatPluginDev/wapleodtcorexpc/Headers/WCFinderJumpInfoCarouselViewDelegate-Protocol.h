//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderJumpInfoViewBaseDelegate-Protocol.h"

@class UIView, WCFinderJumpInfoCarouselView;
@protocol WCFinderJumpInfoViewProtocol;

@protocol WCFinderJumpInfoCarouselViewDelegate <WCFinderJumpInfoViewBaseDelegate>
- (void)finderJumpInfoCarouseView:(WCFinderJumpInfoCarouselView *)arg1 didClickCard:(UIView<WCFinderJumpInfoViewProtocol> *)arg2;
- (void)finderJumpInfoCarouseView:(WCFinderJumpInfoCarouselView *)arg1 changeToCardWithIndex:(long long)arg2;
@end

