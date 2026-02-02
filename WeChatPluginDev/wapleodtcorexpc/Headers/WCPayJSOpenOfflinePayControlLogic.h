//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;
@protocol WCPayJSOpenOfflinePayControlLogicDelegate;

@interface WCPayJSOpenOfflinePayControlLogic
{
    id <WCPayJSOpenOfflinePayControlLogicDelegate> _logicDelegate;
    NSDictionary *_paramDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *paramDict; // @synthesize paramDict=_paramDict;
@property(nonatomic) __weak id <WCPayJSOpenOfflinePayControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)onOfflinePayLogicStop:(_Bool)arg1;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)startLogic;
- (id)initWithJSParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

