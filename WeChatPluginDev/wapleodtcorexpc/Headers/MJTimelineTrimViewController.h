//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MJPublisherButton, MJTimelineViewController;

@interface MJTimelineTrimViewController : UIViewController
{
    _Bool _hasChanges;
    MJTimelineViewController *_timelineVC;
    MJPublisherButton *_quickAdjustButton;
    CDStruct_e83c9415 _initialTimeRange;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_e83c9415 initialTimeRange; // @synthesize initialTimeRange=_initialTimeRange;
@property(retain, nonatomic) MJPublisherButton *quickAdjustButton; // @synthesize quickAdjustButton=_quickAdjustButton;
@property(retain, nonatomic) MJTimelineViewController *timelineVC; // @synthesize timelineVC=_timelineVC;
@property(readonly, nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
- (void)quickAdjustTimeRangeToSegment;
- (void)quickAdjustTimeRangeToTimeline;
- (void)quickAdjustTouchUpInside:(id)arg1;
- (void)layoutViews;
- (void)setupViews;
- (void)viewDidLoad;
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2;

@end

