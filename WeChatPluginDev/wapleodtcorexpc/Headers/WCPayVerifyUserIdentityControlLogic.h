//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, KindaJSEvent, NSDictionary, NSString, WAJSEventHandler_BaseEvent;
@protocol WCPayPayJSApiLogicParamDelegate;

@interface WCPayVerifyUserIdentityControlLogic
{
    JSEvent *m_jsEvent;
    id <WCPayPayJSApiLogicParamDelegate> _paramDelegate;
    WAJSEventHandler_BaseEvent *_tinyAppEvent;
    KindaJSEvent *_kindaJSEvent;
    NSDictionary *_paramDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *paramDict; // @synthesize paramDict=_paramDict;
@property(retain, nonatomic) KindaJSEvent *kindaJSEvent; // @synthesize kindaJSEvent=_kindaJSEvent;
@property(retain, nonatomic) WAJSEventHandler_BaseEvent *tinyAppEvent; // @synthesize tinyAppEvent=_tinyAppEvent;
@property(nonatomic) __weak id <WCPayPayJSApiLogicParamDelegate> paramDelegate; // @synthesize paramDelegate=_paramDelegate;
- (void)stopLogic;
- (void)startLogic;
- (void)call:(id)arg1;
- (void)startForceRotationToPortrait;
- (void)stopForceRotationToPortrait;
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1 tinyAppEvent:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

