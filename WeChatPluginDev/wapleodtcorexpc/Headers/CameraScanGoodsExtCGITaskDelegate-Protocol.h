//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CameraScanGoodsExtCGITask;

@protocol CameraScanGoodsExtCGITaskDelegate <NSObject>
- (void)onCameraScanGoodsExtCGITaskSuccess:(CameraScanGoodsExtCGITask *)arg1;
- (void)onCameraScanGoodsExtCGITaskFailed:(CameraScanGoodsExtCGITask *)arg1 errCode:(unsigned int)arg2;

@optional
- (_Bool)enableMotionDetectors;
- (unsigned long long)uploadImageDataEncodeType;
- (double)exchangeTimeout;
- (double)uploadTimeout;
- (void)onCameraScanGoodsExtCGITaskRetrackFinish:(CameraScanGoodsExtCGITask *)arg1 result:(_Bool)arg2;
- (void)callTrackGoodsWhenExtCGITaskDidReceiveUploadResponse:(CameraScanGoodsExtCGITask *)arg1 completion:(void (^)(_Bool, UIImage *, NSNumber *, CameraScanGoodsItemPerformanceInfo *))arg2;
- (void)onCameraScanGoodsExtCGITaskExchangedSuccess:(CameraScanGoodsExtCGITask *)arg1;
- (void)onCameraScanGoodsExtCGITaskUploadSuccess:(CameraScanGoodsExtCGITask *)arg1;
- (void)onCameraScanGoodsExtCGITaskAskForPreload:(CameraScanGoodsExtCGITask *)arg1;
@end

