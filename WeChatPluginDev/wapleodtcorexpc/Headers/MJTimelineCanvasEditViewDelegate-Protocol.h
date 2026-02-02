//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJTimelineCanvasEditView, OMJAspectRatio;

@protocol MJTimelineCanvasEditViewDelegate <NSObject>
- (void)canvasEditView:(MJTimelineCanvasEditView *)arg1 didChangeContentScaleMode:(unsigned long long)arg2;
- (void)canvasEditView:(MJTimelineCanvasEditView *)arg1 didChangeAspectRatio:(OMJAspectRatio *)arg2;
@end

