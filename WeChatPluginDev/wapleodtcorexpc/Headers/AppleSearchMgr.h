//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString;

@interface AppleSearchMgr
{
    _Bool m_hasIndexSearch;
    MMUIViewController *m_moreVc;
    unsigned int m_patternLockLogicTag;
}

- (void).cxx_destruct;
- (void)walletLockVerifySuccess:(id)arg1;
- (id)getViewController;
- (void)indexActivities;
- (id)genFeatureSearchItem:(id)arg1 title:(id)arg2 keywords:(id)arg3;
- (id)openShake:(long long)arg1 isSupported:(_Bool)arg2 currentVc:(id)arg3;
- (void)openFeature:(id)arg1;
- (void)openQuickPay;
- (void)openQuickPayOnVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

