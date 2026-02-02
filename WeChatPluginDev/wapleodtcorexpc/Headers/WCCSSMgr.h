//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMRuleSetList, NSHashTable, NSMutableDictionary, NSString, WCCSSStyleExecuter;

@interface WCCSSMgr
{
    NSMutableDictionary *_dicCssClass;
    WCCSSStyleExecuter *_styleExecuter;
    MMRuleSetList *_ruleSetList;
    NSHashTable *_hashTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *hashTable; // @synthesize hashTable=_hashTable;
@property(retain, nonatomic) MMRuleSetList *ruleSetList; // @synthesize ruleSetList=_ruleSetList;
@property(retain, nonatomic) WCCSSStyleExecuter *styleExecuter; // @synthesize styleExecuter=_styleExecuter;
@property(retain, nonatomic) NSMutableDictionary *dicCssClass; // @synthesize dicCssClass=_dicCssClass;
- (void)onFileChange:(id)arg1;
- (void)reloadAllViewCssStyle;
- (void)parseNewStyleCss;
- (void)addHotReloaderTarger:(id)arg1;
- (void)applyRules:(id)arg1 ToTarget:(id)arg2;
- (id)getStylesDicWithClass:(id)arg1;
- (id)getStylesWithClass:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

