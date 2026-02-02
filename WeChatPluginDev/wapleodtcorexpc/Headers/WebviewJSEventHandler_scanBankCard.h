//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSData, NSString;

@interface WebviewJSEventHandler_scanBankCard
{
    _Bool _useHttp;
    NSString *_trueName;
    NSString *_scanResult;
    NSString *_encryptedStr;
    NSData *_scanImageData;
    NSString *_certPem;
    NSString *_baseRequest;
    JSEvent *_cbEvent;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useHttp; // @synthesize useHttp=_useHttp;
@property(retain, nonatomic) JSEvent *cbEvent; // @synthesize cbEvent=_cbEvent;
@property(retain, nonatomic) NSString *baseRequest; // @synthesize baseRequest=_baseRequest;
@property(retain, nonatomic) NSString *certPem; // @synthesize certPem=_certPem;
@property(retain, nonatomic) NSData *scanImageData; // @synthesize scanImageData=_scanImageData;
@property(retain, nonatomic) NSString *encryptedStr; // @synthesize encryptedStr=_encryptedStr;
@property(retain, nonatomic) NSString *scanResult; // @synthesize scanResult=_scanResult;
@property(retain, nonatomic) NSString *trueName; // @synthesize trueName=_trueName;
- (void)reportMode:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (id)fillResult:(id)arg1 err_code:(id)arg2 scanResult:(id)arg3;
- (void)clickHandInput;
- (void)clickCloseButton:(id)arg1;
- (void)didFindCardNumber:(id)arg1 cardImage:(id)arg2 scanResult:(id)arg3;
- (void)startScan;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

