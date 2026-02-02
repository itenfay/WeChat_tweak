//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface DeviceModelConfigMgr
{
    int _m_oldVersion;
    NSDictionary *m_dicFromModelJson;
}

+ (id)getDeveceModelConfinPath;
+ (id)getDeviceModelConfigRootDir;
+ (id)getValueFromInfo:(id)arg1 Key:(id)arg2 attrKey:(id)arg3;
+ (unsigned int)parseVersionFromString:(id)arg1;
+ (id)matchCurrentWechatVersion:(id)arg1 WxVersion:(unsigned int)arg2;
+ (id)matchWxVersion:(unsigned int)arg1 platform:(id)arg2 iosVersion:(id)arg3 fromArray:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) int m_oldVersion; // @synthesize m_oldVersion=_m_oldVersion;
@property(retain, nonatomic) NSDictionary *m_dicFromModelJson; // @synthesize m_dicFromModelJson;
- (_Bool)save:(id)arg1;
- (long long)valueForDeviceModelForKey:(id)arg1 attrKey:(id)arg2 valueDefalut:(long long)arg3;
- (id)getAllVersionArray;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageNeedUpdate:(id)arg1 withPackIDs:(id)arg2;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)loadLocalInfo;
- (void)onServiceInit;
- (void)updateConfig;
- (void)onAuthOK;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

