//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CameraScanCombineReportActionBaseInfo, CameraScanGoodsItemViewModel, NSString;

@protocol CameraScanCombineDetectorRouterDelegate <NSObject>
- (CameraScanCombineReportActionBaseInfo *)curCombineReportBaseInfo;
- (void)onSendImageInfoFail:(CameraScanGoodsItemViewModel *)arg1 errorCode:(long long)arg2 errorMsg:(NSString *)arg3 isNetworkError:(_Bool)arg4;
- (void)onDetectScanGoodItemFromAlbum:(CameraScanGoodsItemViewModel *)arg1;
- (void)onDetectScanGoodItemFail:(CameraScanGoodsItemViewModel *)arg1 errCode:(unsigned int)arg2;
- (void)onDetectScanGoodItemRetrieval:(CameraScanGoodsItemViewModel *)arg1;
- (void)onDetectScanGoodItemAskForPreload:(CameraScanGoodsItemViewModel *)arg1;
- (void)onDetectScanGoodItemUpload:(CameraScanGoodsItemViewModel *)arg1;
- (void)onDetectScanGoodItemFound:(CameraScanGoodsItemViewModel *)arg1;
@end

