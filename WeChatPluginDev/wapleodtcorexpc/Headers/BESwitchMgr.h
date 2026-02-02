//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString;

@interface BESwitchMgr
{
    _Bool _isSvrOpenTimelineWhenInit;
    unsigned int _debugConfigOpenTimelineWhenInit;
    unsigned int _lastRequestTime;
    MemoryMappedKV *_mappedKV;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(nonatomic) unsigned int debugConfigOpenTimelineWhenInit; // @synthesize debugConfigOpenTimelineWhenInit=_debugConfigOpenTimelineWhenInit;
@property(nonatomic) _Bool isSvrOpenTimelineWhenInit; // @synthesize isSvrOpenTimelineWhenInit=_isSvrOpenTimelineWhenInit;
- (void)requestServiceTimelineConfirm;
- (void)tryRequestServiceTimelineConfirmWithScene:(unsigned long long)arg1;
- (_Bool)isEnableBrandServiceTimeline;
- (void)resetMappedKv;
- (void)onServiceEnterForeground;
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

