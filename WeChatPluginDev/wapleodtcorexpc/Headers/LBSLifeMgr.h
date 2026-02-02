//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SKBuiltinBuffer_t;

@interface LBSLifeMgr
{
    SKBuiltinBuffer_t *_getBuff;
    SKBuiltinBuffer_t *_searchBuff;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKBuiltinBuffer_t *searchBuff; // @synthesize searchBuff=_searchBuff;
@property(retain, nonatomic) SKBuiltinBuffer_t *getBuff; // @synthesize getBuff=_getBuff;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetLifeListResponse:(id)arg1 eventId:(unsigned int)arg2;
- (int)getLBSLifeDetail:(id)arg1;
- (int)continueSearchLBSLife:(id)arg1;
- (int)autoSearchLBSLife:(id)arg1;
- (int)getLBSLife:(id)arg1 StartFromFirst:(_Bool)arg2 Scene:(unsigned int)arg3 EntryTime:(unsigned int)arg4 eventIdLdr:(unsigned int *)arg5;
- (int)getLBSLife:(id)arg1 StartFromFirst:(_Bool)arg2 Scene:(unsigned int)arg3 EntryTime:(unsigned int)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

