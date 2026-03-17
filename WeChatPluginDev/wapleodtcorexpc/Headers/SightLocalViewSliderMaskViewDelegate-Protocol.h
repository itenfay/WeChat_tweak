//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SightLocalViewSliderMaskView;

@protocol SightLocalViewSliderMaskViewDelegate <NSObject>

@optional
- (_Bool)canMoveStartAndEndFlag;
- (_Bool)queryIsCropAllowEnlarge;
- (_Bool)queryIsSystemCrop;
- (void)shouldSwitchToLargeMode:(_Bool)arg1;
- (void)thumbImagesCollectionViewContentInsetNeedChange;
- (void)sightLocalViewSliderMaskView:(SightLocalViewSliderMaskView *)arg1 didStopMovingAtPosition:(double)arg2 isStartFlag:(_Bool)arg3;
- (void)sightLocalViewSliderMaskViewPlayFlagDidChange:(SightLocalViewSliderMaskView *)arg1;
@end

