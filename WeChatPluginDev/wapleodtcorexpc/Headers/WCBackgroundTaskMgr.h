//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCBackgroundTaskMgr
{
    _Bool _isEnabled;
    NSMutableArray *_runners;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(retain, nonatomic) NSMutableArray *runners; // @synthesize runners=_runners;
- (_Bool)unregisterTask:(id)arg1;
- (_Bool)registerTask:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

