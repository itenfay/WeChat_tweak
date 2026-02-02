//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, SafeDictionaryWrap;

@interface MMRegionCodeMgr
{
    SafeDictionaryWrap *m_regionDict;
    NSMutableArray *m_pickedRegionAry;
}

+ (int)numberOfOccurrencesOfString:(id)arg1 inString:(id)arg2;
+ (id)encodeCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (void).cxx_destruct;
- (_Bool)isProvinceMO:(id)arg1;
- (_Bool)isProvinceHK:(id)arg1;
- (_Bool)isProvinceTW:(id)arg1;
- (_Bool)isCountryMO:(id)arg1;
- (_Bool)isCountryHK:(id)arg1;
- (_Bool)isCountryTW:(id)arg1;
- (_Bool)isZhCN:(id)arg1;
- (void)removePickedResult;
- (id)getPickedResult;
- (void)popupData;
- (void)pushData:(id)arg1;
- (void)onLanguageChange;
- (void)onRegionPackageUpdated;
- (id)readRegionCodeFileForLang:(id)arg1;
- (void)trySplitRegionCodeFile:(id)arg1 Lang:(id)arg2 force:(_Bool)arg3;
- (void)splitRegionCodeFile:(id)arg1 Lang:(id)arg2;
- (id)getRegionCodeLangForCurLang:(id)arg1;
- (id)getChildrenOfCode:(id)arg1;
- (id)getCountries;
- (id)getRegionCodeFromString:(id)arg1 type:(int)arg2;
- (id)getRegionForCode:(id)arg1;
- (id)getValueForKey:(id)arg1;
- (id)getDisplayRegionWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (void)setRegionDictForCurLang;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

