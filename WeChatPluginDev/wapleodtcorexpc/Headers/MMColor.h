//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMColor : NSObject
{
    NSMutableDictionary *m_colorDictionary;
    NSRecursiveLock *m_lock;
    _Bool m_isAlreadyParsed;
    _Bool m_isParseOK;
    NSString *m_colorCssPath;
}

- (void).cxx_destruct;
- (_Bool)loadColorFromPath:(id)arg1;
- (id)getColorByName:(id)arg1 withAlpha:(double)arg2;
- (id)getColorByName:(id)arg1;
- (_Bool)startParse;
- (void)onCssParseEnd;
- (void)onCssParseStart;
- (id)onNextCssFile;
- (void)onParseErrorInFile:(id)arg1 onLineNumber:(id)arg2 withText:(id)arg3 withErrorMessage:(id)arg4;
- (void)onReceiveCssRulesetWithSelectors:(id)arg1 withDeclarations:(id)arg2;
- (void)onScriptFunctionWithSelectors:(id)arg1 withStatements:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

