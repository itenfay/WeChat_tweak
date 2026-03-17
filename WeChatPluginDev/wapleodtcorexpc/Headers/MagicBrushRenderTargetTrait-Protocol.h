//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CAEAGLLayer, MagicBrushCVPixelBufferRT, MagicBrushEAGLLayerRT;
@protocol MagicBrushCVPixelBufferRTDelegate;

@protocol MagicBrushRenderTargetTrait <NSObject>
- (MagicBrushCVPixelBufferRT *)createRenderTargetWithPixelBufferDelegate:(id <MagicBrushCVPixelBufferRTDelegate>)arg1 forCanvas:(int)arg2;
- (MagicBrushEAGLLayerRT *)createRenderTargetWithLayer:(CAEAGLLayer *)arg1 forCanvas:(int)arg2;
@end

