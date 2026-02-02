//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WePkgCheckUpdateMgr
{
    NSMutableArray *_arrCheckingPkgIds;
}

- (void).cxx_destruct;
- (void)callFailExtForPkgId:(id)arg1 errCode:(int)arg2;
- (void)callSuccessExtForPkgId:(id)arg1;
- (void)callFailExtForPkgIds:(id)arg1 errCode:(int)arg2;
- (void)copyNonAtomicPart:(id)arg1 OldVersion:(id)arg2 ResonpseMd5:(id)arg3;
- (void)copyAtomicSingleFileListToUpdateConfig:(id)arg1 UpdateConfig:(id)arg2;
- (void)copyAtomicPart:(id)arg1 OldVersion:(id)arg2 ResonpseMd5:(id)arg3;
- (void)copyPkgResponseToTmpConfig:(id)arg1 OldVersion:(id)arg2 ResonpseMd5:(id)arg3;
- (void)updateGlobalPkgId2Version:(id)arg1 PkgItem:(id)arg2;
- (void)removeFromCheckingArr:(id)arg1;
- (void)removeFromCheckingArrIn:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSuccessResp:(id)arg1 PkgItem:(id)arg2 regConfig:(id)arg3 ResonpseMd5:(id)arg4;
- (_Bool)isSameAsLastOne:(id)arg1 RegularRespMd5:(id)arg2 PkgId:(id)arg3;
- (void)handleRspForPkgItem:(id)arg1;
- (_Bool)isPkgItemValid:(id)arg1;
- (void)handleRespCGIWarp:(id)arg1;
- (_Bool)sendReq:(id)arg1 Scene:(int)arg2;
- (_Bool)internalCheckUpdateForPkgIds:(id)arg1 Scene:(int)arg2;
- (_Bool)checkUpdateForPkgIds:(id)arg1 Scene:(int)arg2;
- (_Bool)checkUpdateForPkgId:(id)arg1 Scene:(int)arg2;
- (id)init;

@end

