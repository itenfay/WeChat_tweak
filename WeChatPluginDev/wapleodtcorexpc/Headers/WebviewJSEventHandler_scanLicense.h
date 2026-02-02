//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WebviewJSEventHandler_scanLicense
{
    unsigned long long _scanType;
    NSString *_scanTypeName;
    NSString *_displayCardNumber;
    NSString *_retJson;
    int _errCode;
    _Bool _bIsGetResult;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendBizScanLicenseRequestWithImg:(id)arg1 andType:(unsigned int)arg2;
- (void)getCardCancel;
- (void)getCardFail;
- (void)getCardOK;
- (void)getBankCardOK;
- (id)getImageData:(id)arg1 maxLength:(long long)arg2;
- (void)didFindCalibrateCardImage:(id)arg1 cardType:(unsigned long long)arg2;
- (void)didFindBankCardNumber:(id)arg1 cardImage:(id)arg2;
- (void)onReturnBtnClick;
- (void)FillBankNumConfirmWithImage:(id)arg1 cardNumber:(id)arg2;
- (void)FillBankNumCancel;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

