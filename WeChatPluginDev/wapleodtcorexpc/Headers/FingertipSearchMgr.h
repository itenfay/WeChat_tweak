//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DSMMatcher, ExpressMatcher, FSDSMModelPreparer, NSHashTable, NSString, RegexMatcher;

@interface FingertipSearchMgr
{
    ExpressMatcher *_expressMatcher;
    RegexMatcher *_regexMatcher;
    NSHashTable *_weakVCHashTable;
    DSMMatcher *_dsm;
    FSDSMModelPreparer *_dsmPreparer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FSDSMModelPreparer *dsmPreparer; // @synthesize dsmPreparer=_dsmPreparer;
@property(retain, nonatomic) DSMMatcher *dsm; // @synthesize dsm=_dsm;
@property(retain, nonatomic) NSHashTable *weakVCHashTable; // @synthesize weakVCHashTable=_weakVCHashTable;
@property(retain, nonatomic) RegexMatcher *regexMatcher; // @synthesize regexMatcher=_regexMatcher;
@property(retain, nonatomic) ExpressMatcher *expressMatcher; // @synthesize expressMatcher=_expressMatcher;
- (void)onMatchModelErrorHappend;
- (void)onFunctionMsgResponse:(id)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(id)arg3;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (long long)cleanDSMCache;
- (unsigned long long)preGetDSMCacheSize;
- (id)getKeywordsResult:(id)arg1;
- (id)getRegexSearchResult:(id)arg1;
- (id)getExpressResult:(id)arg1;
- (id)extractKeywordsWithContent:(id)arg1 version:(id *)arg2;
- (void)changeResourceloadPath;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

