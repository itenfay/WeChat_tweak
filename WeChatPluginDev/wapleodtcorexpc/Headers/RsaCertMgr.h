//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock, NSString, RsaCertInfo;

@interface RsaCertMgr
{
    NSRecursiveLock *m_oLock;
    RsaCertInfo *m_oRsaCertInfo;
}

+ (id)GetInfoStringMd5For:(id)arg1;
+ (id)GetPathOfRsaCertInfoVerify;
+ (id)GetPathOfRsaCertInfo;
- (void).cxx_destruct;
- (id)GetMutableRsaCertInfo;
- (id)GetKVCommCertInfo;
- (id)GetAuthCertInfo;
- (id)GetBaseRsaCertInfo;
- (void)SaveRsaCertInfo;
- (void)SaveRsaCertInfoVerify;
- (void)LoadRsaCertInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

