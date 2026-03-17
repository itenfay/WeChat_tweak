//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveReplayGreateTimeModel;

@protocol WCFinderLiveReplayPreviewDelegate <NSObject>
- (void)onInvokeScheduleAutoUpdatePreviewData;
- (MMFinderLiveReplayGreateTimeModel *)getNearestGreateTimeModelWithTime:(double)arg1;
- (void)onPreviewContainterInvokeToSlider:(double)arg1;
- (void)onPreviewContainterSizeChanged:(struct CGSize)arg1;
@end

