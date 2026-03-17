//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCAdSliderCardViewDelegate <NSObject>

@optional
- (void)onSliderCardWillChangeIndex:(long long)arg1;
- (void)onSliderCardSlideWithDuration:(unsigned long long)arg1;
- (void)onAutoSlideFrom:(long long)arg1 to:(long long)arg2;
- (void)onSliderCardExposure:(long long)arg1;
- (void)onSliderCardSlideJump;
- (void)onSliderCardClick:(long long)arg1 clickType:(long long)arg2;
@end

