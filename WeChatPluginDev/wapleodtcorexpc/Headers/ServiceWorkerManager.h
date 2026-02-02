//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ServiceWorkerManager
{
    _Bool _shouldCancelTask;
    NSString *_currLiteAppId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCancelTask; // @synthesize shouldCancelTask=_shouldCancelTask;
@property(retain, nonatomic) NSString *currLiteAppId; // @synthesize currLiteAppId=_currLiteAppId;
- (void)onTemplateApplyed:(unsigned long long)arg1;
- (void)publishGlobalEventToAll:(id)arg1 params:(id)arg2;
- (void)notifySearchQuit:(id)arg1;
- (void)notifySearchEntryClick:(id)arg1;
- (void)notifySearchEntryExpose:(id)arg1;
- (void)notifyBottomTabSwitch:(id)arg1;
- (void)notifyLifecycleStateChange:(_Bool)arg1;
- (void)releaseStore;
- (void)checkCreateStore;
- (_Bool)enableServiceWorker;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

