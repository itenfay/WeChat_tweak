//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSDictionary, NSString;
@protocol WCPayJSLaunchGroupPayPfLogicDelegate;

@interface WCPayJSLaunchGroupPayPfLogic
{
    id <WCPayJSLaunchGroupPayPfLogicDelegate> _logicDelegate;
    JSEvent *_jsEvent;
    NSDictionary *_param;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
@property(nonatomic) __weak id <WCPayJSLaunchGroupPayPfLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)onPfLaunchControlLogicDidStop:(_Bool)arg1;
- (void)startLogic;
- (void)setJsPfLaunchLogicDelegate:(id)arg1;
- (id)initWithJSEvent:(id)arg1 param:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

