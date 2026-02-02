//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FWFInstanceManager;

@interface FWFUserContentControllerHostApiImpl : NSObject
{
    FWFInstanceManager *_instanceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FWFInstanceManager *instanceManager; // @synthesize instanceManager=_instanceManager;
- (void)removeAllUserScriptsForControllerWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)addUserScriptForControllerWithIdentifier:(id)arg1 userScript:(id)arg2 error:(id *)arg3;
- (void)removeAllScriptMessageHandlersForControllerWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)removeScriptMessageHandlerForControllerWithIdentifier:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (void)addScriptMessageHandlerForControllerWithIdentifier:(id)arg1 handlerIdentifier:(id)arg2 ofName:(id)arg3 error:(id *)arg4;
- (void)createFromWebViewConfigurationWithIdentifier:(id)arg1 configurationIdentifier:(id)arg2 error:(id *)arg3;
- (id)userContentControllerForIdentifier:(id)arg1;
- (id)initWithInstanceManager:(id)arg1;

@end

