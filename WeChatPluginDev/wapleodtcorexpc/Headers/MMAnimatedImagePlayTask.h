//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAnimatedImageDecoder, MMAnimatedImagePlayConfig, NSMutableArray, UIImage, UIImageView;

@interface MMAnimatedImagePlayTask : NSObject
{
    unsigned long long m_timeTickCount;
    _Bool m_isUpdating;
    _Bool m_needUpdateFrame;
    NSMutableArray *m_frameCache;
    double m_maxCacheWidth;
    int m_currentFrameId;
    int m_totalFrameCount;
    double m_currentDuration;
    UIImageView *m_imageView;
    MMAnimatedImagePlayConfig *m_config;
    unsigned int m_remainingTimes;
    UIImage *m_firstFrameImage;
    _Bool m_needRewind;
    _Bool m_stopped;
    MMAnimatedImageDecoder *_decoder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MMAnimatedImageDecoder *decoder; // @synthesize decoder=_decoder;
@property(readonly, nonatomic) _Bool stopped; // @synthesize stopped=m_stopped;
- (void)updateFrame;
- (void)onSeekNextFrameFinished:(_Bool)arg1;
- (void)seekToNextFrameWithDecoder:(id)arg1 async:(_Bool)arg2;
- (void)seekToNextFrameIfNeeded;
- (void)updateWithTickCount:(unsigned long long)arg1;
- (void)forceResetWithTickCount:(unsigned long long)arg1;
- (void)removePlayObserver;
- (void)removeImageView;
@property(readonly, nonatomic) UIImageView *imageView;
- (id)init;
- (id)initWithDecoder:(id)arg1 imageView:(id)arg2 config:(id)arg3 maxCacheSize:(double)arg4;
@property(readonly, nonatomic) unsigned long long playMode;

@end

