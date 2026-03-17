//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveTask, MMWeEffectFrame;

@protocol TRTCCdnPlayerManagerDelegate <NSObject>

@optional
- (void)onCdnRenderFpsUpdate:(int)arg1;
- (void)onOutputWeEffectProcessedRenderFrame:(MMWeEffectFrame *)arg1;
- (MMLiveTask *)getRootLiveTask;
- (_Bool)isCDNPlayerNeedStopRenderPixel;
- (void)onPlayerPixelBufferRendered:(struct __CVBuffer *)arg1;
- (void)onPlayerPixelBufferRefresh:(struct __CVBuffer *)arg1;
@end

