//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol WCPayNativeCgiTunnelImplDelegate;

@interface WCPayNativeCgiTunnelImpl : NSObject
{
    id <WCPayNativeCgiTunnelImplDelegate> _logicDelegate;
    NSDictionary *_paramDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *paramDict; // @synthesize paramDict=_paramDict;
@property(nonatomic) __weak id <WCPayNativeCgiTunnelImplDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startLogic;
- (id)initWithDelegate:(id)arg1 param:(id)arg2;
- (void)dealloc;

@end

