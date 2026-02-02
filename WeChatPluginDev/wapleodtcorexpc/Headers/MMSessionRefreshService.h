//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableArray, NSString;

@interface MMSessionRefreshService
{
    MMTimer *m_refreshTimer;
    NSMutableArray *m_objectNameArray;
    _Bool m_bInBackground;
    _Bool m_isTriggered;
    int m_skipedCount;
}

- (void).cxx_destruct;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (void)timeToUpdate;
- (void)triggerTimer;
- (void)registerToBeTriggered:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

