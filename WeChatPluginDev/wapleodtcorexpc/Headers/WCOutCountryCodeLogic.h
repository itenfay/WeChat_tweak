//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSLocale, NSMutableArray, NSSet, NSString, Package, WCOutCountryCodeWrap;

@interface WCOutCountryCodeLogic
{
    WCOutCountryCodeWrap *m_defaultCountryCodeWrap;
    unsigned int m_lastUpdateTime;
    NSString *m_countryCodeConfig;
    Package *m_downloadingPackage;
    NSString *m_curLanguage;
    NSSet *m_restrictionSet;
    NSMutableArray *m_allCountryCodes;
    NSDictionary *m_countryCodesDic;
    NSLocale *m_curLocale;
    unsigned long long _addressMgrId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long addressMgrId; // @synthesize addressMgrId=_addressMgrId;
- (id)getLocaleCountryCode;
- (id)getCarrierCountryCode;
- (id)getCurCountryCode;
- (id)findCountryWrapFromISOCountryCode:(id)arg1;
- (void)getAllCountryCode;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageNeedUpdate:(id)arg1 withPackIDs:(id)arg2;
- (void)configCountryCodeRestriction;
- (void)configData;
- (void)checkUpdate;
- (id)countryCodeFromISOCountryCode:(id)arg1;
- (id)countryISOCodeForCountryCode:(id)arg1;
- (unsigned int)countOfCountryCodeStartWith:(id)arg1;
- (_Bool)isValidCountryCode:(id)arg1;
- (_Bool)isRestrictedCountryCode:(id)arg1;
- (id)getCountryCodeWrapsFromCountryCodeList:(id)arg1;
- (id)getAllCountryCodes;
@property(readonly, nonatomic) NSString *defaultCoutryCode;
- (id)getTopCountryCodeConfig;
- (id)init;

@end

