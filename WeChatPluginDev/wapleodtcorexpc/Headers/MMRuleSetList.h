//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MMRuleSetList : NSObject
{
    NSMutableDictionary *m_ruleSets;
    _Bool m_isAlreadyParsed;
    _Bool m_isParseOK;
    _Bool m_isParseError;
    NSString *m_styleSheetFilePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *ruleSets; // @synthesize ruleSets=m_ruleSets;
@property(retain, nonatomic) NSString *styleSheetFilePath; // @synthesize styleSheetFilePath=m_styleSheetFilePath;
- (void)clearAllRuleSets;
- (_Bool)loadRuleSetsFromPath:(id)arg1;
- (_Bool)startParse;
- (void)onCssParseEnd;
- (void)onCssParseStart;
- (id)onNextCssFile;
- (void)onParseErrorInFile:(id)arg1 onLineNumber:(id)arg2 withText:(id)arg3 withErrorMessage:(id)arg4;
- (void)onReceiveCssRulesetWithSelectors:(id)arg1 withDeclarations:(id)arg2;
- (void)onScriptFunctionWithSelectors:(id)arg1 withStatements:(id)arg2;
- (id)init;
- (void)addOrMergeRuleSet:(id)arg1 forSelector:(id)arg2;
- (id)getValueOfProperty:(id)arg1 forSeletor:(id)arg2;
- (id)getRuleSetForSeletor:(id)arg1;
- (void)removeRuleSetForKey:(id)arg1;
- (void)setRuleSet:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

