//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SKBuiltinBuffer_t;

@interface GetPOIListMgr
{
    SKBuiltinBuffer_t *_nearBuff;
    SKBuiltinBuffer_t *_searchBuff;
    struct CLLocationCoordinate2D _lastCoordinate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKBuiltinBuffer_t *searchBuff; // @synthesize searchBuff=_searchBuff;
@property(retain, nonatomic) SKBuiltinBuffer_t *nearBuff; // @synthesize nearBuff=_nearBuff;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)getSearchPOIList:(struct CLLocationCoordinate2D)arg1 KeyWord:(id)arg2 StartFromFirst:(_Bool)arg3 Scene:(unsigned int)arg4 Scale:(double)arg5 UserActuallyLocation:(id)arg6;
- (_Bool)autoSearchPOIList:(struct CLLocationCoordinate2D)arg1 Keyword:(id)arg2 Scene:(unsigned int)arg3 Scale:(double)arg4 UserActuallyLocation:(id)arg5 StartFromFirst:(_Bool)arg6;
- (_Bool)getNearPOIList:(struct CLLocationCoordinate2D)arg1 StartFromFirst:(_Bool)arg2 Scene:(unsigned int)arg3 Scale:(double)arg4 IndoorInfo:(id)arg5 UserActuallyLocation:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

