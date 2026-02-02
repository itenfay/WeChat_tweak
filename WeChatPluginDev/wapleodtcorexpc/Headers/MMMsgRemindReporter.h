//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableSet, NSString;

@interface MMMsgRemindReporter
{
    _Bool _isRecording;
    _Bool _hasLeavePageAtRecording;
    _Bool _hasBackToMainFrame;
    _Bool _hasEnterRemindContact;
    unsigned int _startRecordTime;
    unsigned int _newMsgEndTime;
    unsigned int _enterMainFrameTime;
    MMTimer *_timer;
    NSMutableSet *_recordSessions;
    NSString *_currentSessionName;
    long long _newMsgCount;
    long long _pageType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int enterMainFrameTime; // @synthesize enterMainFrameTime=_enterMainFrameTime;
@property(nonatomic) _Bool hasEnterRemindContact; // @synthesize hasEnterRemindContact=_hasEnterRemindContact;
@property(nonatomic) _Bool hasBackToMainFrame; // @synthesize hasBackToMainFrame=_hasBackToMainFrame;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) long long newMsgCount; // @synthesize newMsgCount=_newMsgCount;
@property(nonatomic) unsigned int newMsgEndTime; // @synthesize newMsgEndTime=_newMsgEndTime;
@property(nonatomic) unsigned int startRecordTime; // @synthesize startRecordTime=_startRecordTime;
@property(retain, nonatomic) NSString *currentSessionName; // @synthesize currentSessionName=_currentSessionName;
@property(nonatomic) _Bool hasLeavePageAtRecording; // @synthesize hasLeavePageAtRecording=_hasLeavePageAtRecording;
@property(retain, nonatomic) NSMutableSet *recordSessions; // @synthesize recordSessions=_recordSessions;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
- (void)doReport;
- (void)stopTimer;
- (void)resetReportData;
- (void)recordNewMsgAtSession:(id)arg1;
- (void)stopRecordNewMsg;
- (void)stopRecordFlow;
- (void)startRecordFlowAtSession:(id)arg1;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(long long)arg2;
- (void)didEnterSession:(id)arg1;
- (void)didLeaveCurrentPage;
- (void)didEnterMainFrame;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

