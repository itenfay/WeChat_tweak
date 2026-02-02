//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KindaCrtService, LiteAppDynamicModuleCallback, NSString, UIViewController, WXPLiteAppBankCardOcrService, WXPLiteAppBiometricVerifyService, WXPLiteAppLuckyMoneyPickEnvelopeService, WXPLiteAppNetworkService, WXPLiteAppNewyearHbService, WXPLiteAppRealnameService;

@interface WeixinPayService : NSObject
{
    UIViewController *_controller;
    LiteAppDynamicModuleCallback *_callback;
    NSObject *_hold;
    KindaCrtService *_crtService;
    WXPLiteAppNetworkService *_networkService;
    WXPLiteAppBankCardOcrService *_bankOcrService;
    WXPLiteAppRealnameService *_realNameService;
    WXPLiteAppBiometricVerifyService *_biometricVerifyService;
    WXPLiteAppLuckyMoneyPickEnvelopeService *_luckyMoneyPickEnvelopeService;
    WXPLiteAppNewyearHbService *_newyearHbService;
}

+ (id)liteapp_export_method_async_85;
+ (id)liteapp_export_method_async_84;
+ (id)liteapp_export_method_async_82;
+ (id)liteapp_export_method_async_81;
+ (id)liteapp_export_method_async_80;
+ (id)liteapp_export_method_async_79;
+ (id)liteapp_export_method_async_78;
+ (id)liteapp_export_method_async_77;
+ (id)liteapp_export_method_async_76;
+ (id)liteapp_export_method_async_75;
+ (id)liteapp_export_method_async_withbuffer_73_1_WXPLiteAppNetworkResponse;
+ (id)liteapp_export_method_async_withbuffer_72_NSData;
+ (id)liteapp_export_method_async_withbuffer_71_1_NSString;
+ (id)liteapp_export_method_async_70;
+ (id)liteapp_export_method_async_69;
+ (id)liteapp_export_method_async_66;
+ (id)liteapp_export_method_async_63;
+ (id)liteapp_export_method_async_62;
+ (id)liteapp_export_method_async_61;
+ (id)liteapp_export_method_async_58;
+ (id)liteapp_export_method_async_57;
+ (id)liteapp_export_method_async_56;
+ (id)liteapp_export_method_async_55;
+ (id)liteapp_export_method_async_54;
+ (id)liteapp_export_method_async_53;
- (void).cxx_destruct;
@property(retain, nonatomic) WXPLiteAppNewyearHbService *newyearHbService; // @synthesize newyearHbService=_newyearHbService;
@property(retain, nonatomic) WXPLiteAppLuckyMoneyPickEnvelopeService *luckyMoneyPickEnvelopeService; // @synthesize luckyMoneyPickEnvelopeService=_luckyMoneyPickEnvelopeService;
@property(retain, nonatomic) WXPLiteAppBiometricVerifyService *biometricVerifyService; // @synthesize biometricVerifyService=_biometricVerifyService;
@property(retain, nonatomic) WXPLiteAppRealnameService *realNameService; // @synthesize realNameService=_realNameService;
@property(retain, nonatomic) WXPLiteAppBankCardOcrService *bankOcrService; // @synthesize bankOcrService=_bankOcrService;
@property(retain, nonatomic) WXPLiteAppNetworkService *networkService; // @synthesize networkService=_networkService;
@property(retain, nonatomic) KindaCrtService *crtService; // @synthesize crtService=_crtService;
@property(retain, nonatomic) NSObject *hold; // @synthesize hold=_hold;
@property(retain, nonatomic) LiteAppDynamicModuleCallback *callback;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"LiteAppDynamicModuleCallback",?,&,N

@property(nonatomic) __weak UIViewController *viewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,W,N

- (void)previewStateNewYearHb:(id)arg1;
- (void)getNewYearPagPath:(id)arg1;
- (void)luckyMoneyPickEnvelope:(id)arg1;
- (void)cancelAuthenticate;
- (void)bioAuthenticate:(id)arg1;
- (void)supportBioType;
- (void)notifyRealNameCancel;
- (void)notifyRealNameResult:(id)arg1;
- (void)startUnderAgeParentVerify:(id)arg1;
- (void)startBankCardScan:(id)arg1;
- (void)request:(id)arg1 data:(id)arg2;
- (void)getBaseRequest:(int)arg1;
- (void)crtSign:(id)arg1 data:(id)arg2;
- (void)getCrtNo;
- (void)hasCrt;
- (void)startMultiSelectContacts:(id)arg1;
- (void)startRealNameVerify:(id)arg1;
- (void)startNativeUseCase:(id)arg1;
- (void)nativeRoute:(id)arg1;
- (void)startKindaUseCase:(id)arg1;
- (void)finishApplePayPayment:(id)arg1;
- (void)requestApplePayPayment:(id)arg1;
- (void)canMakeApplePayPayments;
- (void)startContactSelect:(id)arg1;
- (void)onPreviewContentLogicControllerBack;
- (void)jumpRedPacketEnvelopePreview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

