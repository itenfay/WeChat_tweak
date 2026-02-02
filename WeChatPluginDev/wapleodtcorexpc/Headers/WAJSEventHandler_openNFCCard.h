//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PKAddPaymentPassViewController;

@interface WAJSEventHandler_openNFCCard
{
    PKAddPaymentPassViewController *_addPaymentPassViewController;
    NSString *_outOrderNo;
    NSString *_cardType;
    NSString *_cardId;
    unsigned long long _actType;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) unsigned long long actType; // @synthesize actType=_actType;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *outOrderNo; // @synthesize outOrderNo=_outOrderNo;
@property(retain, nonatomic) PKAddPaymentPassViewController *addPaymentPassViewController; // @synthesize addPaymentPassViewController=_addPaymentPassViewController;
- (void)onFailReturn;
- (void)showErrorAlertView:(id)arg1;
- (void)onWCPayNFCCardChargeControlLogicFailed:(id)arg1;
- (void)onWCPayNFCCardChargeControlLogicCancel;
- (void)onWCPayNFCCardChargeControlLogicSuccess;
- (void)onWCPayNFCCardApplyControlLogicFailed:(id)arg1;
- (void)onWCPayNFCCardApplyControlLogicCancel;
- (id)genRetDict;
- (void)onWCPayNFCCardApplyControlLogicSuccess:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

