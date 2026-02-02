//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CSCScanSessionReportFFEInfo, CameraScanGoodsExtensionDetector, CameraScanGoodsItemViewModel;

@protocol CameraScanGoodsExtensionDetectorDelegate <NSObject>

@optional
- (void)detector:(CameraScanGoodsExtensionDetector *)arg1 didUploadEngineLog:(CSCScanSessionReportFFEInfo *)arg2;
- (void)detector:(CameraScanGoodsExtensionDetector *)arg1 didSvrReTrackWithResult:(_Bool)arg2;
- (void)detector:(CameraScanGoodsExtensionDetector *)arg1 didAskPreloadForItem:(CameraScanGoodsItemViewModel *)arg2;
- (void)detector:(CameraScanGoodsExtensionDetector *)arg1 didFailCgiTaskForItem:(CameraScanGoodsItemViewModel *)arg2 errCode:(unsigned int)arg3;
- (void)detector:(CameraScanGoodsExtensionDetector *)arg1 didRetrievalLocalItem:(CameraScanGoodsItemViewModel *)arg2;
- (void)detector:(CameraScanGoodsExtensionDetector *)arg1 didUploadLocalItem:(CameraScanGoodsItemViewModel *)arg2;
- (void)detector:(CameraScanGoodsExtensionDetector *)arg1 didDetectLocalItem:(CameraScanGoodsItemViewModel *)arg2;
@end

