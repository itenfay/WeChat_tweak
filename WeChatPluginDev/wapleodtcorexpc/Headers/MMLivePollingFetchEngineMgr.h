//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMLivePollingFetchEngineMgr
{
    NSMutableDictionary *_engineMap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *engineMap; // @synthesize engineMap=_engineMap;
- (void)stopEngineForLive:(id)arg1;
- (id)engineForLive:(id)arg1;
- (id)startEngineForLive:(id)arg1 requestParamsMaker:(CDUnknownBlockType)arg2;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

