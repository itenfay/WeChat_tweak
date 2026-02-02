//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveManger, NSDictionary, NSString, UIImage, WAWebViewController;

@protocol TXLivePushJSAdapterDelegate <NSObject>

@optional
- (void)onEnableCustomVideoCapture:(_Bool)arg1 width:(double)arg2 height:(double)arg3;
- (void)liveManager:(MMLiveManger *)arg1 didPushVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 homeRotation:(long long)arg3;
- (void)onPusherEvent:(NSString *)arg1;
- (void)onLivePusher:(unsigned int)arg1 audioVolumeEvaluation:(long long)arg2;
- (void)onLivePusherCallBack:(_Bool)arg1 errNo:(long long)arg2 errMsg:(NSString *)arg3;
- (void)onLivePusherBGMComplete:(unsigned int)arg1 errCode:(long long)arg2;
- (void)onLivePusherBGMProgress:(unsigned int)arg1 progress:(long long)arg2 duration:(long long)arg3;
- (void)onLivePusherBGMStart:(unsigned int)arg1;
- (void)onInsertLogView:(unsigned int)arg1;
- (void)onPusherDidTakeSnapshot:(UIImage *)arg1 pusherId:(unsigned int)arg2;
- (void)onPushNetStatus:(NSDictionary *)arg1 pusherId:(unsigned int)arg2;
- (void)onLivePusherError:(unsigned int)arg1 errCode:(long long)arg2 errMsg:(NSString *)arg3 data:(NSDictionary *)arg4;
- (void)onPushEvent:(int)arg1 evtMsg:(NSString *)arg2 pusherId:(unsigned int)arg3 param:(NSDictionary *)arg4;
- (WAWebViewController *)getCurrentWebView;
- (void)onCameraStateChanged:(_Bool)arg1;
- (void)onRecordStateChanged:(_Bool)arg1;
@end

