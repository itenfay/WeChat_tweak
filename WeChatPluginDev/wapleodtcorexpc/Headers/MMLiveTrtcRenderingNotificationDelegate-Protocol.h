//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveTask, NSString, TRTCVideoFrame;

@protocol MMLiveTrtcRenderingNotificationDelegate <NSObject>

@optional
- (void)onLiveTask:(MMLiveTask *)arg1 renderImageBuffer:(struct __CVBuffer *)arg2 forUserId:(NSString *)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 localRenderFlipX:(_Bool)arg3;
- (void)onLiveTask:(MMLiveTask *)arg1 renderVideoFrame:(TRTCVideoFrame *)arg2 userId:(NSString *)arg3 streamType:(long long)arg4;
@end

