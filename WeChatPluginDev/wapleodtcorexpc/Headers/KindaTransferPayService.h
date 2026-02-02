//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTipsViewController, MMVoidCallback, MMVoidI64Callback, MMVoidStringCallback, NSString, WCPayBizF2FConfirmViewController, WCPayCheckNameView;

@interface KindaTransferPayService : NSObject
{
    NSString *_m_checkUserNameStr;
    WCPayCheckNameView *_m_checkNameView;
    MMTipsViewController *_checkNameTipsView;
    MMVoidCallback *_m_checkSurNameCancelCallBack;
    MMVoidStringCallback *_m_checkSurNameSuccessCallBack;
    MMVoidCallback *_m_checkAmountCancelCallBack;
    MMVoidI64Callback *_m_checkAmountSuccessCallBack;
    WCPayBizF2FConfirmViewController *_m_amountConfirmViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBizF2FConfirmViewController *m_amountConfirmViewController; // @synthesize m_amountConfirmViewController=_m_amountConfirmViewController;
@property(retain, nonatomic) MMVoidI64Callback *m_checkAmountSuccessCallBack; // @synthesize m_checkAmountSuccessCallBack=_m_checkAmountSuccessCallBack;
@property(retain, nonatomic) MMVoidCallback *m_checkAmountCancelCallBack; // @synthesize m_checkAmountCancelCallBack=_m_checkAmountCancelCallBack;
@property(retain, nonatomic) MMVoidStringCallback *m_checkSurNameSuccessCallBack; // @synthesize m_checkSurNameSuccessCallBack=_m_checkSurNameSuccessCallBack;
@property(retain, nonatomic) MMVoidCallback *m_checkSurNameCancelCallBack; // @synthesize m_checkSurNameCancelCallBack=_m_checkSurNameCancelCallBack;
@property(retain, nonatomic) MMTipsViewController *checkNameTipsView; // @synthesize checkNameTipsView=_checkNameTipsView;
@property(retain, nonatomic) WCPayCheckNameView *m_checkNameView; // @synthesize m_checkNameView=_m_checkNameView;
@property(retain, nonatomic) NSString *m_checkUserNameStr; // @synthesize m_checkUserNameStr=_m_checkUserNameStr;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)cutString:(id)arg1;
- (void)checkNameDidChange:(id)arg1;
- (void)startTransferCheckSurnameImpl:(id)arg1 cancel:(id)arg2 confirm:(id)arg3;
- (void)delloc;
- (void)onWCPayBizF2FConfirmViewControllerConfirm:(unsigned long long)arg1 sign:(id)arg2;
- (void)onWCPayBizF2FConfirmViewControllerBack;
- (void)startTransferCheckAmountImpl:(id)arg1 cancel:(id)arg2 confirm:(id)arg3;
- (id)init;
- (void)stopTransferCheckAmount;
- (void)stopTransferCheckSurname;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

