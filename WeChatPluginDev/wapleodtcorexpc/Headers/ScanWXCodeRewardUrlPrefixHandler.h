//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayQRCodeRewardPayControlLogic;

@interface ScanWXCodeRewardUrlPrefixHandler
{
    WCPayQRCodeRewardPayControlLogic *_qrcodeRewardPayerLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayQRCodeRewardPayControlLogic *qrcodeRewardPayerLogic; // @synthesize qrcodeRewardPayerLogic=_qrcodeRewardPayerLogic;
- (BOOL)QRCodeType;
- (void)onQRCodeRewardPayLogicStop;
- (id)matchingPrefixArray;
- (void)handleUrl:(id)arg1;
- (void)reportCount;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

