//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MagicWeAppCardService
{
    NSMutableDictionary *_frameSetItems;
    NSMutableDictionary *_host2biz;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *host2biz; // @synthesize host2biz=_host2biz;
@property(retain, nonatomic) NSMutableDictionary *frameSetItems; // @synthesize frameSetItems=_frameSetItems;
- (void)postMessageToMagicBrushInHost:(id)arg1 withFrameId:(unsigned int)arg2 message:(id)arg3 fromAppid:(id)arg4;
- (void)removeMagicBrushFrameInHost:(id)arg1 withFrameId:(unsigned int)arg2;
- (void)insertMagicBrushFrameForHost:(id)arg1 withAppid:(id)arg2 frameId:(unsigned int)arg3 debugMode:(unsigned int)arg4 pagePath:(id)arg5 fsPath:(id)arg6 extraData:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)getFrameSetItemCacheForHost:(id)arg1 frameId:(unsigned int)arg2;
- (void)removeCacheFrameSetItemForHost:(id)arg1 frameId:(unsigned int)arg2;
- (void)cacheFrameSetItem:(id)arg1 forHost:(id)arg2 frameId:(unsigned int)arg3;
- (void)removeBizForHost:(id)arg1;
- (void)cacheBiz:(id)arg1 forHost:(id)arg2;
- (id)getBizForHost:(id)arg1;
- (id)getHostForBiz:(id)arg1;
- (void)sendEventFromHost:(id)arg1 withName:(id)arg2 params:(id)arg3;
- (void)sendOnRemoveFrameFromHost:(id)arg1 withFrameId:(unsigned int)arg2;
- (void)sendOnInsertFrameFromHost:(id)arg1 withFrameId:(unsigned int)arg2 extraData:(id)arg3;
- (void)onCreateFrameSet:(id)arg1 forHost:(id)arg2 frameId:(unsigned int)arg3;
- (void)stopDirectly;
- (void)bindFrameSetView:(id)arg1 withBiz:(id)arg2;
- (void)stopWithHost:(id)arg1;
- (void)startWithHostIfNeeded:(id)arg1 fsPath:(id)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

