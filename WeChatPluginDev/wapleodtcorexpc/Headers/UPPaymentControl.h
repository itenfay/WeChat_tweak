//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UPPreTableCell;

@interface UPPaymentControl : NSObject
{
    UPPreTableCell *_codecUtil;
    _Bool _configHandled;
    _Bool _alertShowed;
    id _delegate;
    NSString *_downloadURL;
    CDUnknownBlockType _nextBlock;
}

+ (id)defaultControl;
@property(nonatomic) _Bool alertShowed; // @synthesize alertShowed=_alertShowed;
@property(copy, nonatomic) CDUnknownBlockType nextBlock; // @synthesize nextBlock=_nextBlock;
@property(nonatomic) _Bool configHandled; // @synthesize configHandled=_configHandled;
@property(copy, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onPayCancel:(id)arg1;
- (_Bool)onSDKPay:(id)arg1;
- (void)onWebPayResult:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cDXING3SZSdsyerh:(id)arg1;
- (void)dUTJFHkhlePSYsBI:(id)arg1;
- (_Bool)XHjpSncjkQDgjBif:(id)arg1;
- (void)HmIKStbidWtmSuRy:(id)arg1;
- (void)GSCtxGmJSizWGHNC:(id)arg1;
- (void)FjLwqpwsSxGFVXEu;
- (id)AdsSDlNGlCPeVcMb;
- (_Bool)isPaymentAppInstalled;
- (void)handlePaymentResult:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (_Bool)startPay:(id)arg1 fromScheme:(id)arg2 mode:(id)arg3 viewController:(id)arg4;
- (void)dealloc;
- (id)initPrivate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

