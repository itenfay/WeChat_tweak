//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJSegmentCropGestureCaptureView, UIPanGestureRecognizer, UIPinchGestureRecognizer;

@protocol MJSegmentCropGestureCaptureViewDelegate <NSObject>
- (void)cropGestureCaptureView:(MJSegmentCropGestureCaptureView *)arg1 handlePinchGesture:(UIPinchGestureRecognizer *)arg2;
- (void)cropGestureCaptureView:(MJSegmentCropGestureCaptureView *)arg1 handlePanGesture:(UIPanGestureRecognizer *)arg2;
@end

