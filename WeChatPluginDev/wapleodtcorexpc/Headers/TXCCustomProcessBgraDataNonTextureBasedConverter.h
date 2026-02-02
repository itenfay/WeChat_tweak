//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TXCCustomProcessBgraDataNonTextureBasedConverter
{
    struct __CVBuffer *_dstPixelBuffer;
}

@property(nonatomic) struct __CVBuffer *dstPixelBuffer; // @synthesize dstPixelBuffer=_dstPixelBuffer;
- (struct __CVBuffer *)createBufferIfNeeded:(struct __CVBuffer *)arg1 forSize:(struct CGSize)arg2;
- (id)outputVideoFrameFromDstVideoFrame:(id)arg1 withTexture:(id)arg2;
- (id)srcDataFromVideoFrame:(id)arg1;

@end

