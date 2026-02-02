//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary;
@protocol WCPayJSApiNativeCgiTunnelLogicDelegate;

@interface WCPayJSApiNativeCgiTunnelLogic
{
    id <WCPayJSApiNativeCgiTunnelLogicDelegate> _logicDelegate;
    NSDictionary *_paramDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *paramDict; // @synthesize paramDict=_paramDict;
@property(nonatomic) __weak id <WCPayJSApiNativeCgiTunnelLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startLogic;
- (void)pause;
- (void)dealloc;
- (id)initLogicWithDelegate:(id)arg1 jsEvent:(id)arg2 param:(id)arg3;

@end

