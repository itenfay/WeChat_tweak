//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ScanGoodsService
{
    _Bool _isUploadingCameraImageInfo;
}

+ (void)deleteScanGoodDevelopH5;
@property(nonatomic) _Bool isUploadingCameraImageInfo; // @synthesize isUploadingCameraImageInfo=_isUploadingCameraImageInfo;
- (long long)getResultActionFromReturnType:(unsigned int)arg1;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (unsigned long long)localJSBizType;
- (unsigned int)packageResouceType;
- (id)templateResouceRootPath;
- (id)defaultTemplateZipPath;
- (void)handleMpTemplateResponse:(id)arg1;
- (void)handleSendPressImageInfo:(id)arg1;
- (void)handleSendImageInfo:(id)arg1;
- (void)hanldeScanCombineConfigure:(id)arg1;
- (void)handleFetchPhashConfigure:(id)arg1;
- (void)handleFetchDynamicWording:(id)arg1;
- (void)handleFetchScanConfigure:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)mpTemplateRequest:(unsigned int)arg1 type:(unsigned int)arg2 content:(id)arg3;
- (void)setSendImageInfoCgiTimeout:(unsigned int)arg1;
- (unsigned int)getSendImageInfoCgiTimeout;
- (void)onEndUploadingCameraImageInfo;
- (void)onBeginUploadingCameraImageInfo;
- (void)cancelSendPressImageInfo:(unsigned int)arg1;
- (unsigned int)sendPressImageInfo:(id)arg1;
- (_Bool)sendImageInfo:(id)arg1;
- (void)internalFetchScanConfWithType:(int)arg1;
- (void)fetchScanCombineConfigure;
- (void)fetchPhashConfigure;
- (void)fetchDynamicWording;
- (void)fetchScanConfigure;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

