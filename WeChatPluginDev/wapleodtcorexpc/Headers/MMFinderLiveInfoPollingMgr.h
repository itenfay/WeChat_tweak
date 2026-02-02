//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMFinderLiveInfoPollingMgr
{
    NSMutableDictionary *_cacheItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cacheItems; // @synthesize cacheItems=_cacheItems;
- (void)getLiveInfoWithParams:(id)arg1 referenceId:(id)arg2 overrideCache:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (void)onServiceInit;
- (void)getLiveInfoWithParams:(id)arg1 overrideCache:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

