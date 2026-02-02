//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MFRTimelineReportInfo, NSString;

@interface WCMomentsFinderRecommendationReporter
{
    MFRTimelineReportInfo *_timelineReportInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MFRTimelineReportInfo *timelineReportInfo; // @synthesize timelineReportInfo=_timelineReportInfo;
- (void)didClickMissReadButton;
- (void)timelineViewControllerWillDisplayDataItem:(id)arg1;
- (void)didLeaveTimelineViewController:(id)arg1;
- (void)willEnterTimelineViewController:(id)arg1 cachedRecommendationInfo:(id)arg2;
- (void)didClickFinderRecommendationButton:(int)arg1;
- (void)updateCurrentItemReportInfoWithUnexposureReason:(long long)arg1 isFinalReason:(_Bool)arg2;
- (void)updateCurrentItemReportInfoWithRecommendationInfo:(id)arg1;
- (void)didBeginNewSession:(_Bool)arg1;
- (void)endLastTimelineReportSession;
- (void)beginNewTimelineReportSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

