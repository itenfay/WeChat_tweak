//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSIndexPath, NSMutableDictionary, NSString;

@interface MainSessionReporter
{
    _Bool _enableExitReport;
    _Bool _enableEntryReport;
    _Bool _enableReportDetail;
    _Bool _shouldReportEntryData;
    long long _readSessionCount;
    unsigned long long _enterForegoundTime;
    unsigned long long _enterBackgroundTime;
    long long _enterForegroundUnreadCount;
    NSMutableDictionary *_reportItems;
    long long _chatBoxMinIndex;
    NSIndexPath *_maxEntrySessionIndexPath;
}

+ (long long)chatTypeForSession:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldReportEntryData; // @synthesize shouldReportEntryData=_shouldReportEntryData;
@property(retain, nonatomic) NSIndexPath *maxEntrySessionIndexPath; // @synthesize maxEntrySessionIndexPath=_maxEntrySessionIndexPath;
@property(nonatomic) long long chatBoxMinIndex; // @synthesize chatBoxMinIndex=_chatBoxMinIndex;
@property(retain, nonatomic) NSMutableDictionary *reportItems; // @synthesize reportItems=_reportItems;
@property(nonatomic) long long enterForegroundUnreadCount; // @synthesize enterForegroundUnreadCount=_enterForegroundUnreadCount;
@property(nonatomic) unsigned long long enterBackgroundTime; // @synthesize enterBackgroundTime=_enterBackgroundTime;
@property(nonatomic) unsigned long long enterForegoundTime; // @synthesize enterForegoundTime=_enterForegoundTime;
@property(nonatomic) long long readSessionCount; // @synthesize readSessionCount=_readSessionCount;
@property(nonatomic) _Bool enableReportDetail; // @synthesize enableReportDetail=_enableReportDetail;
@property(nonatomic) _Bool enableEntryReport; // @synthesize enableEntryReport=_enableEntryReport;
@property(nonatomic) _Bool enableExitReport; // @synthesize enableExitReport=_enableExitReport;
- (id)itemKeyForSession:(id)arg1;
- (id)itemForSession:(id)arg1;
- (void)reset;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onAppEnterForeground:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onEnterBaseMsgSession:(id)arg1;
- (void)onWillDeleteSession:(id)arg1;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(long long)arg2;
- (void)onSessionUnreadCountChanged:(id)arg1 prevUnreadCount:(long long)arg2;
- (void)handleEnterSessionAndClearUnread:(id)arg1;
- (long long)maxEntrySessionIndex;
- (void)reportSessionsAt:(long long)arg1;
- (void)updateChatBoxEntryMinIndex:(long long)arg1;
- (void)recordEnterSessionIndex:(id)arg1;
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

