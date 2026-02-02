//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_openQRCode
{
    _Bool _bGotScanResult;
}

@property(nonatomic) _Bool bGotScanResult; // @synthesize bGotScanResult=_bGotScanResult;
- (void)onCameraScanViewControllerDidBePoped;
- (void)obtainScanResultDidFinish:(id)arg1;
- (_Bool)shouldBackToSessionImmediately;
- (_Bool)shouldObtainScanResult;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

