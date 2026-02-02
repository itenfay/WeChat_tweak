//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CIImage, NSArray, TAVVideoCompositionImageCollection, TAVVideoCompositionRenderInfo;

@protocol TAVVideoCompositionMixer <NSObject>
- (CIImage *)applyEffectToImageCollection:(TAVVideoCompositionImageCollection *)arg1 renderInfo:(TAVVideoCompositionRenderInfo *)arg2;

@optional
- (void)applyEffectToPixelBufferCollection:(NSArray *)arg1 renderInfo:(TAVVideoCompositionRenderInfo *)arg2 toDestPixelBuffer:(struct __CVBuffer *)arg3;
- (_Bool)enableRenderPixelBufDirected;
@end

