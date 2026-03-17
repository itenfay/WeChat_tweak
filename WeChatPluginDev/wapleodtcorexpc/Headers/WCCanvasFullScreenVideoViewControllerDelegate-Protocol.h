//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCCanvasAdControlView, WCPlayerView;

@protocol WCCanvasFullScreenVideoViewControllerDelegate <NSObject>
- (void)reportFullscreenVideoPlayEnd;
- (void)reportFullscreenVideoPlayStart;
- (void)reportFloatAreaClickWithFullClick:(_Bool)arg1;
- (void)reportFloatAreaExposedDataWithFloatAreaStayTime:(unsigned long long)arg1 floatAreaExposureCount:(unsigned int)arg2 buttonStayTime:(unsigned long long)arg3 buttonExposureCount:(unsigned int)arg4;
- (void)onComponentClickForCid:(NSString *)arg1;
- (void)onFullscreenVideoDisappearAndResetVideoPlayer:(WCPlayerView *)arg1 andControlView:(WCCanvasAdControlView *)arg2 andAutoPlay:(_Bool)arg3;
- (void)onCanvasFullscreenVideoCloseBtnClick;
@end

