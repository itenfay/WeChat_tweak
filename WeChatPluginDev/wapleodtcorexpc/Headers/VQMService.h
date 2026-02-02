//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface VQMService
{
}

- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceResumeBackgroundTask:(unsigned long long)arg1;
- (void)onServicePauseBackgroundTask:(unsigned long long)arg1;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceMemoryWarning;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
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

