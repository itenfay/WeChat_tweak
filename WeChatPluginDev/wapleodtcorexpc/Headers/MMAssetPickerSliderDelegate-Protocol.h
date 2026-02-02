//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMAssetPickerSlider;

@protocol MMAssetPickerSliderDelegate <NSObject>

@optional
- (void)assetPickerSlider:(MMAssetPickerSlider *)arg1 didChangeActiveState:(_Bool)arg2;
- (void)assetPickerSlider:(MMAssetPickerSlider *)arg1 didChangeValue:(double)arg2;
- (void)assetPickerSliderDidBeginMove:(MMAssetPickerSlider *)arg1;
@end

