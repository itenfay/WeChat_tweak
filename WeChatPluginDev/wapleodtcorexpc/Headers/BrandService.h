//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandLemmaTable, NSDictionary, NSMutableDictionary, NSRegularExpression, NSString;

@interface BrandService
{
    int _agreementId;
    int _wordAgreementId;
    int _domainAgreementId;
    unsigned int _brandType;
    NSString *_sharedDomainDictPath;
    NSMutableDictionary *_dictDomain;
    NSRegularExpression *_domainRegex;
    NSDictionary *_domainKeyToListDict;
    BrandLemmaTable *_brandLemmaTable;
}

+ (_Bool)isOverseaWallet;
+ (_Bool)isOverseaAgent;
+ (unsigned int)getBrandType;
+ (id)getDomainKey:(id)arg1;
+ (id)replacePlaceHolder:(id)arg1 withName:(id)arg2 inWording:(id)arg3;
+ (id)safeResolveURLString:(id)arg1;
+ (id)additionalUA;
- (void).cxx_destruct;
@property(nonatomic) unsigned int brandType; // @synthesize brandType=_brandType;
@property(retain, nonatomic) BrandLemmaTable *brandLemmaTable; // @synthesize brandLemmaTable=_brandLemmaTable;
@property(retain, nonatomic) NSDictionary *domainKeyToListDict; // @synthesize domainKeyToListDict=_domainKeyToListDict;
@property(retain, nonatomic) NSRegularExpression *domainRegex; // @synthesize domainRegex=_domainRegex;
@property(nonatomic) int domainAgreementId; // @synthesize domainAgreementId=_domainAgreementId;
@property(retain) NSMutableDictionary *dictDomain; // @synthesize dictDomain=_dictDomain;
@property(nonatomic) int wordAgreementId; // @synthesize wordAgreementId=_wordAgreementId;
@property(nonatomic) int agreementId; // @synthesize agreementId=_agreementId;
@property(retain, nonatomic) NSString *sharedDomainDictPath; // @synthesize sharedDomainDictPath=_sharedDomainDictPath;
- (void)onLanguageChange;
- (void)onBrandTypeChange;
- (void)initBrandLemmaTable;
- (id)domainDict;
- (id)resolveURLString:(id)arg1;
- (id)getRealWording:(id)arg1 brandType:(unsigned int)arg2 locale:(id)arg3;
- (id)getRealWording:(id)arg1 locale:(id)arg2;
- (id)getRealWording:(id)arg1 brandType:(unsigned int)arg2;
- (id)getRealWording:(id)arg1;
- (id)getBrandWordingForKey:(id)arg1 brandType:(unsigned int)arg2 locale:(id)arg3;
- (id)getBrandWordingForKey:(id)arg1 brandType:(unsigned int)arg2;
- (id)getBrandWordingForKey:(id)arg1;
- (id)getRealDomain:(id)arg1;
- (void)updateDomainDict:(id)arg1;
- (void)loadDomainDict;
- (void)setDomainSettings:(id)arg1;
- (void)setWordingSettings:(id)arg1;
- (void)setUserAgreementId:(unsigned int)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

