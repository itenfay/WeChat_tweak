//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, TXCMetalRenderKernel;

@interface TXCMetalRGBRenderer
{
    TXCMetalRenderKernel *_renderKernel;
    NSArray *_textures;
    _Bool _swapColorChannels;
}

- (void).cxx_destruct;
- (unsigned long long)rendererType;
- (id)drawMetalTexture:(id)arg1 toTarget:(id)arg2 coordinate:(id)arg3;
- (id)drawToTarget:(id)arg1 coordinate:(id)arg2;
- (void)uploadPixelBuffer:(struct __CVBuffer *)arg1;

@end

