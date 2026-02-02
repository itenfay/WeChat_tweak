//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderCarouselView;

@protocol WCFinderCarouseDelegate <NSObject>
- (void)carouselView:(WCFinderCarouselView *)arg1 didSelectedAtIndex:(long long)arg2;

@optional
- (void)carouselView:(WCFinderCarouselView *)arg1 didEndScrollAtIndex:(long long)arg2 indexPathRow:(long long)arg3;
- (void)carouselView:(WCFinderCarouselView *)arg1 didStartScrollAtIndex:(long long)arg2 indexPathRow:(long long)arg3;
@end

