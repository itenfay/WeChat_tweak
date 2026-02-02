//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CalendarStatisticsArgs, DiscoverExposeEdgeArgs, NSString;

@interface WCFinderTrigger
{
    DiscoverExposeEdgeArgs *edgeArgs;
    CalendarStatisticsArgs *finderCalendarArgs;
}

- (void).cxx_destruct;
- (void)finder19943:(id)arg1;
- (id)checkToReturnAiFinderInfo;
- (void)quitFindFriendEntryController:(id)arg1 andNext:(id)arg2 andStayTimeMs:(unsigned long long)arg3;
- (void)enterFindFriendEntryController:(id)arg1 andStayTimeMs:(unsigned long long)arg2;
- (void)onSendKV:(id)arg1 withReportID:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

