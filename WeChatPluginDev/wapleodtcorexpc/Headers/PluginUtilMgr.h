//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSSet, NSString;

@interface PluginUtilMgr
{
    NSDictionary *m_dicNameToType;
    NSArray *m_arrNames;
    NSArray *m_arrLocalizedNickNames;
    NSArray *m_arrOfficialNames;
    NSSet *m_officialNamesSet;
    NSArray *m_arrLocalizedOfficialNickNames;
}

- (void).cxx_destruct;
- (void)onManulLoginOK;
- (void)onRegCountryChange;
- (void)onLanguageChange;
- (void)refreshLocalizedName;
- (id)getOfficialLocalizedNickNameWithType:(long long)arg1;
- (id)getOfficialUserNameWithType:(long long)arg1;
- (_Bool)hasOfficialExpectWeixinUserName:(id)arg1;
- (_Bool)hasOfficialUserName:(id)arg1;
- (id)getPluginLocalizedNickName:(long long)arg1;
- (long long)nameToPluginType:(id)arg1;
- (id)pluginTypeToName:(long long)arg1;
- (id)init;
- (void)initOfficialName;
- (void)initLocalizedOfficialName;
- (void)initLocalizedName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

