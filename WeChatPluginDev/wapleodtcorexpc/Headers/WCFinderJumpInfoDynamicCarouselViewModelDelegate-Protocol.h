//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderJumpInfoDynamicCarouselViewModel;

@protocol WCFinderJumpInfoDynamicCarouselViewModelDelegate <NSObject>
- (void)dynamicCarouselViewModelDidUpdateCarouselContent:(WCFinderJumpInfoDynamicCarouselViewModel *)arg1;
- (void)dynamicCarouselViewModelDidSwitchCarouselContent:(WCFinderJumpInfoDynamicCarouselViewModel *)arg1;
- (void)dynamicCarouselViewModelDidReloadViewProperties:(WCFinderJumpInfoDynamicCarouselViewModel *)arg1 shouldReloadSubviews:(_Bool)arg2;
@end

