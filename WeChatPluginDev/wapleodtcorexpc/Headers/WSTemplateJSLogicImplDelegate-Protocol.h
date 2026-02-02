//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol YYWebViewInterface;

@protocol WSTemplateJSLogicImplDelegate <NSObject>
- (unsigned long long)getLocalJSBusinessType;
- (void)webViewContentProcessDidTerminate:(id <YYWebViewInterface>)arg1;
- (_Bool)onJsApiHandlerForwardDealWithFunc:(NSString *)arg1 params:(NSDictionary *)arg2 callbackID:(NSString *)arg3;
- (NSArray *)jsEventsNeedRegister;
@end

