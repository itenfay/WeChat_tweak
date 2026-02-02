//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMVoidCallback, MMVoidITransmitKvDataCallback, NSString, WCPayApplePayAuthorizationLogic;

@interface KindaApplePayService : NSObject
{
    WCPayApplePayAuthorizationLogic *_applePayAuthorizationLogic;
    MMVoidITransmitKvDataCallback *_callback;
    MMVoidCallback *_finishApplePayCallBack;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMVoidCallback *finishApplePayCallBack; // @synthesize finishApplePayCallBack=_finishApplePayCallBack;
@property(retain, nonatomic) MMVoidITransmitKvDataCallback *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) WCPayApplePayAuthorizationLogic *applePayAuthorizationLogic; // @synthesize applePayAuthorizationLogic=_applePayAuthorizationLogic;
- (id)covertAuthenAppleInfoFromPKPayment:(id)arg1;
- (void)deleayFinishCallBack:(id)arg1;
- (void)onApplePayAuthorizationDidFinish:(_Bool)arg1 paymentViewController:(id)arg2;
- (void)onApplePayAuthorizationDidCancel;
- (void)onApplePayAuthorizationDidAuthPayment:(id)arg1;
- (void)finishRequestApplePayImpl:(id)arg1 retcode:(int)arg2 callback:(id)arg3;
- (void)startRequestApplePayImpl:(id)arg1 callback:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

