//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, ScanGoodsImageInfo;

@protocol IScanGoodsServiceExt <NSObject>

@optional
- (void)onMpTemplateResponseFail:(unsigned int)arg1 errorCode:(long long)arg2 errorMsg:(NSString *)arg3;
- (void)onMpTemplateResponseSuccess:(unsigned int)arg1 content:(NSString *)arg2;
- (void)onSendPressImageInfoFail:(ScanGoodsImageInfo *)arg1 errorCode:(long long)arg2 errorMsg:(NSString *)arg3 isNetworkError:(_Bool)arg4;
- (void)onSendPressImageInfoSuccess:(ScanGoodsImageInfo *)arg1;
- (void)onSendImageInfoFail:(ScanGoodsImageInfo *)arg1 errorCode:(long long)arg2 errorMsg:(NSString *)arg3 isNetworkError:(_Bool)arg4;
- (void)onSendImageInfoSuccess:(ScanGoodsImageInfo *)arg1;
- (void)onFetchCombineConfigureFail:(long long)arg1 errorMsg:(NSString *)arg2;
- (void)onFetchCombineConfigureSuccess:(NSString *)arg1 confVersion:(NSString *)arg2 confGuide:(NSString *)arg3 detObjGuide:(NSString *)arg4;
- (void)onFetchPhashConfigureFail:(long long)arg1 errorMsg:(NSString *)arg2;
- (void)onFetchPhashConfigureSuccess:(NSString *)arg1 confVersion:(NSString *)arg2;
- (void)onFetchDynamicWordingFail:(long long)arg1 errorMsg:(NSString *)arg2;
- (void)onFetchDynamicWordingSuccess:(NSString *)arg1;
- (void)onFetchScanConfigureFail:(long long)arg1 errorMsg:(NSString *)arg2;
- (void)onFetchScanConfigureSuccess:(NSString *)arg1 confVersion:(NSString *)arg2;
@end

