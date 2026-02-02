//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@protocol MCssParserDelegate <NSObject>
- (void)onCssParseEnd;
- (void)onCssParseStart;
- (NSString *)onNextCssFile;
- (void)onParseErrorInFile:(NSString *)arg1 onLineNumber:(NSNumber *)arg2 withText:(NSString *)arg3 withErrorMessage:(NSString *)arg4;
- (void)onScriptFunctionWithSelectors:(NSArray *)arg1 withStatements:(NSArray *)arg2;
- (void)onReceiveCssRulesetWithSelectors:(NSArray *)arg1 withDeclarations:(NSDictionary *)arg2;
@end

