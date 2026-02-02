//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FWFWKUserScriptData, NSNumber, NSString;

@protocol FWFWKUserContentControllerHostApi
- (void)removeAllUserScriptsForControllerWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
- (void)addUserScriptForControllerWithIdentifier:(NSNumber *)arg1 userScript:(FWFWKUserScriptData *)arg2 error:(id *)arg3;
- (void)removeAllScriptMessageHandlersForControllerWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
- (void)removeScriptMessageHandlerForControllerWithIdentifier:(NSNumber *)arg1 name:(NSString *)arg2 error:(id *)arg3;
- (void)addScriptMessageHandlerForControllerWithIdentifier:(NSNumber *)arg1 handlerIdentifier:(NSNumber *)arg2 ofName:(NSString *)arg3 error:(id *)arg4;
- (void)createFromWebViewConfigurationWithIdentifier:(NSNumber *)arg1 configurationIdentifier:(NSNumber *)arg2 error:(id *)arg3;
@end

