//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString;

@interface BrandPaySubcribeMgr
{
    _Bool _isPaySubscribeOpen;
    MemoryMappedKV *_mappedKV;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPaySubscribeOpen; // @synthesize isPaySubscribeOpen=_isPaySubscribeOpen;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
- (void)onExptItemListChange;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onBatchUpdateMPPageRelatedInfoArr:(id)arg1;
- (_Bool)updateMPPageHasPaidWithPayInfoArr:(id)arg1;
- (_Bool)updateMPPagePayStatusWithPageIdentifier:(id)arg1 fullUrl:(id)arg2;
- (void)resetMappedKv;
- (void)unregisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)clearAllPayStatus;
- (void)configueShowRedDot:(_Bool)arg1 path:(unsigned long long)arg2;
- (void)diposeRedDotWithPath:(unsigned long long)arg1;
- (_Bool)isShowRedDotWithPath:(unsigned long long)arg1;
- (void)updateUserPaySubcribeEntryInfo:(_Bool)arg1 paySubscribeEntryUrl:(id)arg2;
- (id)paySubscribeEntryUrl;
- (_Bool)hasUserPaySubscribeEntry;
- (_Bool)updateMPPageHasPaidWithFullUrl:(id)arg1;
- (_Bool)isMPPagePaidWithPageIdentifier:(id)arg1;
- (_Bool)isMPPagePaid:(id)arg1;
- (_Bool)isPaySubcribeOpen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

