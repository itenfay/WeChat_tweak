//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent;

@interface WCPayJSApiGetWCPayRealnameVerifyControlLogic
{
    JSEvent *m_jsEvent;
    long long m_enWCPayCheckAuthorityScene;
}

- (void).cxx_destruct;
- (void)OnRealnameVerifySuccess:(id)arg1;
- (void)OnRealnameVerifyCancel:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1;

@end

