//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock, NSString, WCEliminatedSlotMMKV;

@interface MPPageUrlInfoMgr
{
    WCEliminatedSlotMMKV *_slotMMKV;
    NSRecursiveLock *_dataLock;
}

+ (id)MPPageCommonIdentityWithbizId:(id)arg1 msgId:(id)arg2 itemIdx:(id)arg3 itemShowType:(unsigned int)arg4;
+ (id)MPPageCommonIdentityWithUrl:(id)arg1 itemShowType:(unsigned int)arg2;
+ (id)MPPageCommonIdentityWithUrl:(id)arg1;
+ (id)identityWithBizStr:(id)arg1 midStr:(id)arg2 indexStr:(id)arg3;
+ (id)parseMPPageIdentityWithMPPageFullUrl:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *dataLock; // @synthesize dataLock=_dataLock;
@property(retain, nonatomic) WCEliminatedSlotMMKV *slotMMKV; // @synthesize slotMMKV=_slotMMKV;
- (void)updateUrlMappingWithOriginalUrl:(id)arg1 bizUin:(unsigned int)arg2 msgId:(unsigned int)arg3 itemIdx:(unsigned int)arg4;
- (void)updateUrlMappingWithOriginalUrl:(id)arg1 fullUrl:(id)arg2;
- (id)MPPageIdentityWithUrlAndReturnNilIfNotHave:(id)arg1;
- (id)MPPageIdentityWithUrlAsDefault:(id)arg1;
- (void)prepareSlotKv;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

