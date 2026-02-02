//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSDictionary;
@protocol SecureTunnelLogicDelegate;

@interface WCPayJSApiSecureTunnelControlLogic
{
    NSDictionary *m_param;
    JSEvent *m_jsEvent;
    id <SecureTunnelLogicDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SecureTunnelLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) JSEvent *m_jsEvent; // @synthesize m_jsEvent;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1 delegate:(id)arg2 param:(id)arg3;

@end

