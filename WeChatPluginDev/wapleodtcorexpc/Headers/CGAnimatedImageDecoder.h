//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage;

@interface CGAnimatedImageDecoder
{
    _Bool m_hasDecodeOneLoop;
    _Bool m_isSingleFrame;
    int m_frameCount;
    int m_currentFrameId;
    int m_decodedLoopCnt;
    NSString *m_cpKey;
    UIImage *m_currentFrameImage;
    double m_currentFrameDuration;
    struct CGImageSource *_source;
    long long _orientation;
    struct CGSize m_imageSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct CGImageSource *source; // @synthesize source=_source;
- (int)decodedLoopCnt;
- (_Bool)isSingleFrame;
- (_Bool)hasDecodeOneLoop;
- (int)currentFrameId;
- (struct CGSize)imageSize;
- (int)frameCount;
- (double)currentFrameDuration;
- (id)currentFrameImage;
- (id)cpKey;
- (void)releaseSource;
- (void)setScale:(double)arg1;
- (_Bool)rewind;
- (_Bool)seekToNextFrame;
- (id)initWithData:(id)arg1 config:(id)arg2;
- (void)dealloc;

@end

