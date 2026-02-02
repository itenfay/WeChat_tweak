//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMapTable, NSString;

@interface MagicBrushKVStorageFactory
{
    NSMapTable *_mMBKVMap;
    NSMapTable *_mPublicServiceOtherBizStorageMap;
    NSString *_uin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSMapTable *mPublicServiceOtherBizStorageMap; // @synthesize mPublicServiceOtherBizStorageMap=_mPublicServiceOtherBizStorageMap;
@property(retain, nonatomic) NSMapTable *mMBKVMap; // @synthesize mMBKVMap=_mMBKVMap;
- (id)getPublicServiceOtherBizStorageList:(id)arg1;
- (void)addPublicServiceOtherBizStorage:(id)arg1 bizNameList:(id)arg2;
- (void)clearBizStorage;
- (long long)getBizStorageQuota:(id)arg1;
- (long long)getBizStorageSize:(id)arg1;
- (id)privateGetOrCreateBizStorage:(id)arg1 uin:(id)arg2;
- (id)getOrCreateBizStorage:(id)arg1 otherBizName:(id)arg2;
- (void)dealloc;
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

