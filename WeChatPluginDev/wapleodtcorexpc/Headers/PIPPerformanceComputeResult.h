//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCLoopMetrics;

@interface PIPPerformanceComputeResult : NSObject
{
    int _fps;
    int _fpsDifference;
    WCLoopMetrics *_rootLoopMetrics;
    double _pixelRenderDuration;
    double _newRenderBufferDuration;
    double _attachWidgetsDuration;
    double _renderToBufferDuration;
}

- (void).cxx_destruct;
@property(nonatomic) int fpsDifference; // @synthesize fpsDifference=_fpsDifference;
@property(nonatomic) double renderToBufferDuration; // @synthesize renderToBufferDuration=_renderToBufferDuration;
@property(nonatomic) double attachWidgetsDuration; // @synthesize attachWidgetsDuration=_attachWidgetsDuration;
@property(nonatomic) double newRenderBufferDuration; // @synthesize newRenderBufferDuration=_newRenderBufferDuration;
@property(nonatomic) double pixelRenderDuration; // @synthesize pixelRenderDuration=_pixelRenderDuration;
@property(retain, nonatomic) WCLoopMetrics *rootLoopMetrics; // @synthesize rootLoopMetrics=_rootLoopMetrics;
@property(nonatomic) int fps; // @synthesize fps=_fps;
@property(readonly, nonatomic) int renderToBufferMsDuration;
@property(readonly, nonatomic) int attachWidgetsMsDuration;
@property(readonly, nonatomic) int newRenderBufferMsDuration;
@property(readonly, nonatomic) int pixelRenderMsDuration;
- (id)description;

@end

