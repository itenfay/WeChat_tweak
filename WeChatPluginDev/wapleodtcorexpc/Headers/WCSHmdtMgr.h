//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCSHmdtMgr
{
    _Bool _isEnable;
    NSMutableDictionary *_dicSceneBehaviorID;
    unsigned int finderLiveSampleCount;
    unsigned int finderLiveSampleIntervalPreReport;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)startFinderLiveReportUntilStopWithBid:(id)arg1;
- (void)stopFinderLiveReport;
- (void)startFinderLiveReportWithLiveid:(unsigned long long)arg1;
- (void)onNewRegOK;
- (void)onManulLoginOK;
- (void)setBehaviorID:(id)arg1 forScene:(unsigned int)arg2;
- (void)startTask:(unsigned int)arg1 behaviorID:(id)arg2 config:(struct TaskConfig *)arg3;
- (void)startTask:(unsigned int)arg1 behaviorID:(id)arg2;
- (_Bool)isHmdtEnable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

