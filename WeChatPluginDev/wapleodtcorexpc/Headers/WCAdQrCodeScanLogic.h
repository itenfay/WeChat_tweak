//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, ScanQRCodeLogicController, WCAdQrCodeScanInfo, WCAdvertiseInfo;

@interface WCAdQrCodeScanLogic : NSObject
{
    _Bool _qrCodeProcessing;
    int _scene;
    int _subScene;
    WCAdQrCodeScanInfo *_qrCodeScanInfo;
    WCAdvertiseInfo *_adInfo;
    NSString *_snsId;
    CDUnknownBlockType _scanResultBlock;
    ScanQRCodeLogicController *_scanQRCodeLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ScanQRCodeLogicController *scanQRCodeLogic; // @synthesize scanQRCodeLogic=_scanQRCodeLogic;
@property(nonatomic) _Bool qrCodeProcessing; // @synthesize qrCodeProcessing=_qrCodeProcessing;
@property(copy, nonatomic) CDUnknownBlockType scanResultBlock; // @synthesize scanResultBlock=_scanResultBlock;
@property(nonatomic) int subScene; // @synthesize subScene=_subScene;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) WCAdvertiseInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) WCAdQrCodeScanInfo *qrCodeScanInfo; // @synthesize qrCodeScanInfo=_qrCodeScanInfo;
- (void)doQRScanReport;
- (void)didShowScanResult;
- (void)onScanEnds;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)setQrCodeProcessAutoFinished;
- (void)setQrCodeProcessManualFinished;
- (void)setQrCodeProcessing;
- (void)hideLoading;
- (void)showLoading;
- (unsigned long long)getSearchContactScene;
- (unsigned long long)getAdQRResultType;
- (id)genEncKey;
- (void)scanQRCodeWithImage:(id)arg1;
- (void)tryToScanQrCode:(id)arg1 adInfo:(id)arg2 snsId:(id)arg3 scene:(int)arg4 subScene:(int)arg5 showLoading:(_Bool)arg6 scanResultBlock:(CDUnknownBlockType)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

