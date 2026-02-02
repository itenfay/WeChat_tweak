//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString, WCEliminatedSlotMMKV;

@interface MsgImgSearchPhashService
{
    NSMutableSet *_needCallbackContextSets;
    WCEliminatedSlotMMKV *_searchPhashSlotKV;
}

+ (_Bool)isSearchPhashEnable;
- (void).cxx_destruct;
@property(retain, nonatomic) WCEliminatedSlotMMKV *searchPhashSlotKV; // @synthesize searchPhashSlotKV=_searchPhashSlotKV;
@property(retain, nonatomic) NSMutableSet *needCallbackContextSets; // @synthesize needCallbackContextSets=_needCallbackContextSets;
- (id)cdnFileIDForContext:(id)arg1;
- (id)memoryMappedKV;
- (void)onFetchPhashConfigureFail:(long long)arg1 errorMsg:(id)arg2;
- (void)onFetchPhashConfigureSuccess:(id)arg1 confVersion:(id)arg2;
- (id)imageForMessageWrap:(id)arg1;
- (void)handleSearchPhashResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSearchPhashReq:(id)arg1 context:(id)arg2;
- (void)recordAndSearchPhashWithContext:(id)arg1;
- (void)setPhashInfo:(id)arg1 forPhashStr:(id)arg2;
- (id)getPhashInfoWithPhashStr:(id)arg1;
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

