//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJPublisherSlider;

@protocol MJPublisherSliderAccessibilityDelegate <NSObject>

@optional
- (void)accessibilityDecrementInSlider:(MJPublisherSlider *)arg1;
- (void)accessibilityIncrementInSlider:(MJPublisherSlider *)arg1;
@end

