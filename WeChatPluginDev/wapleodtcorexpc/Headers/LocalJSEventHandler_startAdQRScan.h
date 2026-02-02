//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, ScanQRCodeLogicController;

@interface LocalJSEventHandler_startAdQRScan
{
    NSString *_scanUrl;
    NSString *_uxInfo;
    ScanQRCodeLogicController *_scanQRCodeLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ScanQRCodeLogicController *scanQRCodeLogic; // @synthesize scanQRCodeLogic=_scanQRCodeLogic;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *scanUrl; // @synthesize scanUrl=_scanUrl;
- (void)doScanReportWithResult:(int)arg1 qrResultType:(unsigned long long)arg2 qrResultUrl:(id)arg3;
- (void)didShowScanResult;
- (void)onScanEnds;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (_Bool)isQRResultTypeAvailable:(unsigned long long)arg1;
- (unsigned long long)getQRResultType;
- (id)genEncKeyWithUxInfo:(id)arg1 url:(id)arg2;
- (void)startToScanQRCodeWithImage:(id)arg1;
- (void)startToScanQRCodeWithUrl:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

