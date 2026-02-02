//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString;

@interface MMFinderLiveMinimizeUpdateMgr
{
    MemoryMappedKV *_mappedKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (void)onServiceClearData;
- (void)updateLocalMinimizeLiveTaskData:(id)arg1;
- (void)removeLocalMinimizeLiveInfo:(id)arg1;
- (void)tryUpdateLocalMinimizeLiveInfoWithDataItems:(id)arg1 reportScene:(long long)arg2;
- (void)tryUpdateLocalMinimizeLiveInfo:(id)arg1 reportScene:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

