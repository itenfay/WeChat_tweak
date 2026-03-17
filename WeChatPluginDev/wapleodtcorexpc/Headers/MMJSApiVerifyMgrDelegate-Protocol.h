//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSFunctionDef, NSArray, NSDictionary, NSString, WebViewSanboxPreverifyContext;

@protocol MMJSApiVerifyMgrDelegate <NSObject>

@optional
- (unsigned int)getA8KeyRequestId;
- (void)onGotWebComptData:(NSArray *)arg1 forAppId:(NSString *)arg2 forUrl:(NSString *)arg3 forContext:(WebViewSanboxPreverifyContext *)arg4;
- (void)onCheckJSAPIInvalid;
- (void)onPreverifyFinished;
- (void)kvReportJSCall:(NSString *)arg1 withParam:(NSDictionary *)arg2;
- (JSFunctionDef *)getJSFunctionDef:(NSString *)arg1;
@end

