//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJSegmentViewModel, MJTimelineContentRangeEditView;

@protocol MJTimelineContentRangeEditViewDelegate <NSObject>
- (void)timelineContentRangeEditView:(MJTimelineContentRangeEditView *)arg1 selectedSegmentPlaybackDurationDidChange:(CDStruct_1b6d18a9)arg2;
- (void)timelineContentRangeEditView:(MJTimelineContentRangeEditView *)arg1 selectedSegmentPlaybackTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)timelineContentRangeEditView:(MJTimelineContentRangeEditView *)arg1 didSkimToSegmentHeadAfterSelect:(MJSegmentViewModel *)arg2;
- (void)timelineContentRangeEditView:(MJTimelineContentRangeEditView *)arg1 didSelectSegmentVM:(MJSegmentViewModel *)arg2;
@end

