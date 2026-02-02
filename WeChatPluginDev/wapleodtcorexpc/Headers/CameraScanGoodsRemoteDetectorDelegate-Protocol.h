//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CameraScanGoodsItemViewModel, CameraScanGoodsRemoteDetector, NSString;

@protocol CameraScanGoodsRemoteDetectorDelegate <NSObject>

@optional
- (void)onSendImageInfoFail:(CameraScanGoodsItemViewModel *)arg1 errorCode:(long long)arg2 errorMsg:(NSString *)arg3 isNetworkError:(_Bool)arg4;
- (void)detector:(CameraScanGoodsRemoteDetector *)arg1 didDetectRemoteItemFromAlbum:(CameraScanGoodsItemViewModel *)arg2;
@end

