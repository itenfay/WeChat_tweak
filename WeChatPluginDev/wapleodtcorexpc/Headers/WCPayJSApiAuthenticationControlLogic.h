//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent;

@interface WCPayJSApiAuthenticationControlLogic
{
    JSEvent *m_jsEvent;
    long long m_enWCPayCheckAuthorityScene;
    int m_enWCPayCheckOpenWCPayViewAuthorityScene;
}

- (void).cxx_destruct;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1 Scene:(long long)arg2 WithOpenViewScene:(int)arg3;
- (id)initWithJSEvent:(id)arg1 Scene:(long long)arg2;

@end

