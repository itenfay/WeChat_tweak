//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSDictionary;

@interface WCPayJSAuthBaseLogic
{
    _Bool _hideLoading;
    JSEvent *_m_jsEvent;
    NSDictionary *_m_param;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideLoading; // @synthesize hideLoading=_hideLoading;
@property(retain, nonatomic) NSDictionary *m_param; // @synthesize m_param=_m_param;
@property(retain, nonatomic) JSEvent *m_jsEvent; // @synthesize m_jsEvent=_m_jsEvent;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)report14954:(id)arg1;
- (void)authOk;
- (void)authFail;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithJSEvent:(id)arg1 param:(id)arg2;
- (void)dealloc;

@end

