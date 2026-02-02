//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, _TtC6WeChat31MagicPermissionConfigPkgManager;

@interface MagicPermissionConfigService
{
    _TtC6WeChat31MagicPermissionConfigPkgManager *_pkgMgr;
    NSMutableDictionary *_dicBizName2Config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicBizName2Config; // @synthesize dicBizName2Config=_dicBizName2Config;
@property(retain, nonatomic) _TtC6WeChat31MagicPermissionConfigPkgManager *pkgMgr; // @synthesize pkgMgr=_pkgMgr;
- (id)getBizConfig:(id)arg1 moduleType:(id)arg2 configName:(id)arg3;
- (id)getPermissionBlackList:(id)arg1 moduleType:(id)arg2;
- (id)getBizConfig:(id)arg1;
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

