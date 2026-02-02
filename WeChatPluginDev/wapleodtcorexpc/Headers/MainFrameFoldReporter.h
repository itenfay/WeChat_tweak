//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OrderedDictionary;

@interface MainFrameFoldReporter : NSObject
{
    _Bool _shouldReportExposeDetail;
    unsigned long long _currMainTabTime;
    OrderedDictionary *_exposeInfos;
    unsigned long long _enterForegroundTime;
    unsigned long long _prevEnterChatTime;
}

+ (void)checkReportSessionInfoWithOneScreenCount:(long long)arg1 foldRate:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldReportExposeDetail; // @synthesize shouldReportExposeDetail=_shouldReportExposeDetail;
@property(nonatomic) unsigned long long prevEnterChatTime; // @synthesize prevEnterChatTime=_prevEnterChatTime;
@property(nonatomic) unsigned long long enterForegroundTime; // @synthesize enterForegroundTime=_enterForegroundTime;
@property(retain, nonatomic) OrderedDictionary *exposeInfos; // @synthesize exposeInfos=_exposeInfos;
@property(nonatomic) unsigned long long currMainTabTime; // @synthesize currMainTabTime=_currMainTabTime;
- (void)onAppEnterForeground:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)onNewSyncClearUnread:(id)arg1;
- (void)onNewSyncEnterSession:(id)arg1 createTime:(unsigned int)arg2;
- (void)handleExposeSession:(id)arg1;
- (void)reportNewSyncClearUnread:(id)arg1 unreadCount:(long long)arg2;
- (void)reportFoldStatusChange:(_Bool)arg1 topSessionCount:(long long)arg2;
- (void)reportClickSession:(id)arg1 topSessionCount:(long long)arg2 status:(long long)arg3 index:(long long)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

