//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, UIImage;

@interface MxGifAnimatedImageDecoder
{
    void *m_gifImage;
    NSData *m_gifData;
    _Bool m_hasDecodeOneLoop;
    _Bool m_isSingleFrame;
    int m_frameCount;
    int m_currentFrameId;
    int m_decodedLoopCnt;
    NSString *m_cpKey;
    UIImage *m_currentFrameImage;
    double m_currentFrameDuration;
    struct CGSize m_imageSize;
}

+ (int)frameCountForImageData:(id)arg1;
+ (double)frameDurationInSecondForDuration:(double)arg1;
+ (id)cgImageWithData:(id)arg1 maxWidth:(unsigned int)arg2 scale:(double)arg3;
- (void).cxx_destruct;
- (int)decodedLoopCnt;
- (_Bool)isSingleFrame;
- (_Bool)hasDecodeOneLoop;
- (int)currentFrameId;
- (struct CGSize)imageSize;
- (double)currentFrameDuration;
- (id)cpKey;
- (_Bool)configDecoderWithGifData:(id)arg1 maxWidth:(unsigned int)arg2;
- (void)setScale:(double)arg1;
- (int)frameCount;
- (id)currentFrameImage;
- (_Bool)seekToNextFrame;
- (_Bool)rewind;
- (id)initWithData:(id)arg1 config:(id)arg2;
- (void)dealloc;

@end

