//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAccountSecurityCenterLogic
{
    NSString *_rid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
- (void)accessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3;
- (_Bool)canAccessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3;
- (void)webViewReturn:(id)arg1;
- (id)getLoginViewNameDeepLink:(id)arg1 Url:(id)arg2;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

