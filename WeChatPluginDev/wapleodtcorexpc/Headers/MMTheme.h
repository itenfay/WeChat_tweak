//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMTheme : NSObject
{
    NSString *m_tid;
    NSString *m_name;
    NSString *m_icon;
    NSString *m_version;
    NSString *m_author;
    NSString *m_discription;
    NSString *m_website;
    NSString *m_basePath;
    long long m_totalSize;
    long long m_finishedSize;
    long long m_themeType;
    _Bool m_isAlreadyParsed;
    _Bool m_isParseOK;
}

+ (id)defaultTheme;
+ (id)themeFromPath:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long themeType; // @synthesize themeType=m_themeType;
@property(nonatomic) long long finishedSize; // @synthesize finishedSize=m_finishedSize;
@property(nonatomic) long long totalSize; // @synthesize totalSize=m_totalSize;
@property(retain, nonatomic) NSString *basePath; // @synthesize basePath=m_basePath;
@property(retain, nonatomic) NSString *website; // @synthesize website=m_website;
@property(retain, nonatomic) NSString *discription; // @synthesize discription=m_discription;
@property(retain, nonatomic) NSString *author; // @synthesize author=m_author;
@property(retain, nonatomic) NSString *version; // @synthesize version=m_version;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=m_icon;
@property(retain, nonatomic) NSString *name; // @synthesize name=m_name;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=m_tid;
- (id)pathForLocalizedResource:(id)arg1;
- (id)pathForResource:(id)arg1;
- (void)setAsDefaultTheme;
- (_Bool)isDefaultTheme;
- (_Bool)startParse;
- (void)onCssParseEnd;
- (void)onCssParseStart;
- (id)onNextCssFile;
- (void)onParseErrorInFile:(id)arg1 onLineNumber:(id)arg2 withText:(id)arg3 withErrorMessage:(id)arg4;
- (void)onReceiveCssRulesetWithSelectors:(id)arg1 withDeclarations:(id)arg2;
- (void)onScriptFunctionWithSelectors:(id)arg1 withStatements:(id)arg2;
- (id)initWithBasePath:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)keyPaths;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

