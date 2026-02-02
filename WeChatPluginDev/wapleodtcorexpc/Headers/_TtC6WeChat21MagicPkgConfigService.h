//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface _TtC6WeChat21MagicPkgConfigService
{
}

- (id)init;
- (id)saveBootPkgAppConfigAndVersionWithLowerBizName:(id)arg1 version:(int)arg2;
- (id)saveUdrPkgAppConfigAndVersionWithLowerBizName:(id)arg1 resource:(id)arg2;
- (void)removeDebugKvWithBizName:(id)arg1;
- (id)saveDebugPkgAppConfigWithAppId:(id)arg1;
- (id)getVersionFromAppConfigWithInstanceVersionWithBizNameOrInstanceName:(id)arg1 version:(int)arg2;
- (id)getAppConfigWithInstanceVersionWithBizNameOrInstanceName:(id)arg1 version:(int)arg2;
- (id)getVersionFromAppConfigWithBizName:(id)arg1;
- (id)getPkgConfigWithBizName:(id)arg1;

@end

