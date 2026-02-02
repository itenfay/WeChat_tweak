//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSMutableArray, NSString, ScanQRCodeLogicController;

@interface ScanQRCodeResultsMgr
{
    NSMutableArray *_offlineResults;
    ScanQRCodeLogicController *_scanLogicController;
    MMUIViewController *_sourceViewController;
}

+ (id)scanResultRepotInfoFromMsgHistoryItem:(id)arg1;
+ (id)msgScanHistoryItemFromScanResultInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(retain, nonatomic) ScanQRCodeLogicController *scanLogicController; // @synthesize scanLogicController=_scanLogicController;
@property(retain, nonatomic) NSMutableArray *offlineResults; // @synthesize offlineResults=_offlineResults;
- (void)reportScanResultActionWithResultInfo:(id)arg1 isRetry:(_Bool)arg2;
- (void)onScanRequestTimeout;
- (void)onScanInUnreachableNetworkStatus;
- (void)onShowAlertWording;
- (void)onStopLoading;
- (void)onStartLoading;
- (void)onPushViewContoller:(id)arg1 animated:(_Bool)arg2;
- (_Bool)saveScanCodeOfflineResult;
- (void)loadScanCodeOfflineResult;
- (id)scanCodeOfflineResultDir;
- (void)appendReportScanResultInfo:(id)arg1;
- (void)appendOfflineScanResultInfo:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)retryRequetScanResult:(id)arg1 viewController:(id)arg2;
- (void)sendMessageForScanResult:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

