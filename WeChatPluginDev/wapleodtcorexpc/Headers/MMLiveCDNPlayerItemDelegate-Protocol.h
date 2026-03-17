//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveCDNPlayerItem, MMLiveCDNPlayerStreamWrap, MMLiveTask, MMWeEffectFrame, NSDictionary;

@protocol MMLiveCDNPlayerItemDelegate <NSObject>

@optional
- (void)onLiveCDNPlayerItem:(MMLiveCDNPlayerItem *)arg1 renderFpsUpdate:(int)arg2;
- (void)onLiveCDNPlayerItem:(MMLiveCDNPlayerItem *)arg1 videoDecodeTypeChanged:(unsigned long long)arg2;
- (void)onLiveCDNPlayerItem:(MMLiveCDNPlayerItem *)arg1 weEffectProcessedRenderFrameRefresh:(MMWeEffectFrame *)arg2;
- (MMLiveTask *)getRootLiveTask;
- (void)onLiveCDNPlayerItem:(MMLiveCDNPlayerItem *)arg1 switchStreamResult:(_Bool)arg2 withStreamWrap:(MMLiveCDNPlayerStreamWrap *)arg3;
- (_Bool)isLiveCDNPlayerItemNeedStopRenderPixel:(MMLiveCDNPlayerItem *)arg1;
- (void)onLiveCDNPlayerItem:(MMLiveCDNPlayerItem *)arg1 pixelBufferRendered:(struct __CVBuffer *)arg2;
- (void)onLiveCDNPlayerItem:(MMLiveCDNPlayerItem *)arg1 pixelBufferRefresh:(struct __CVBuffer *)arg2;
- (void)onMMLiveCDNPlayerItemWillChangeDelegate:(MMLiveCDNPlayerItem *)arg1;
- (void)onLiveCDNPlayerItem:(MMLiveCDNPlayerItem *)arg1 netStatus:(NSDictionary *)arg2;
- (void)onLiveCDNPlayerItem:(MMLiveCDNPlayerItem *)arg1 playEvent:(int)arg2 withParam:(NSDictionary *)arg3;
@end

