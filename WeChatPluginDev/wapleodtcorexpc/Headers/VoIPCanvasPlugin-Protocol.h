//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class VoIPCanvas;
@protocol MTLRenderCommandEncoder;

@protocol VoIPCanvasPlugin <NSObject>
- (void)canvas:(VoIPCanvas *)arg1 customizeRenderCommandEncoder:(id <MTLRenderCommandEncoder>)arg2 withIndex:(unsigned long long)arg3;
- (unsigned long long)timesForCustomizingRenderCommandEncoderForCanvas:(VoIPCanvas *)arg1;
- (void)canvas:(VoIPCanvas *)arg1 didRenderWithIsSucceed:(_Bool)arg2;
- (void)canvasWillRender:(VoIPCanvas *)arg1;
@end

