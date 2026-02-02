//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMLongImageCropSliderBarViewDelegate <NSObject>
- (void)onSliderBarEndTrackingCropFromDirection:(unsigned int)arg1 topCroppedRatio:(double)arg2 bottomCroppedRatio:(double)arg3;
- (void)onSliderBarContinueTrackingCropFromDirection:(unsigned int)arg1 croppedRatio:(double)arg2;
- (void)onSliderBarBeganTrackingCropFromDirection:(unsigned int)arg1;
- (void)onSliderBarMoveSliderPosWithTopOffsetRatio:(double)arg1 actionType:(unsigned int)arg2;
@end

