//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJTimelineViewController, MJTransitionSegmentViewModel;

@protocol MJTimelineViewControllerDelegate <NSObject>

@optional
- (void)timelineViewControllerDidDoubleTap:(MJTimelineViewController *)arg1;
- (void)timelineViewControllerDidLongPress:(MJTimelineViewController *)arg1;
- (void)timelineViewControllerDidSelectRetryOSTRecognition:(MJTimelineViewController *)arg1;
- (void)timelineViewControllerDidSelectAdjustVolume:(MJTimelineViewController *)arg1;
- (void)timelineViewControllerDidSelectAddMusic:(MJTimelineViewController *)arg1;
- (void)timelineViewController:(MJTimelineViewController *)arg1 didSelectTransition:(MJTransitionSegmentViewModel *)arg2;
@end

