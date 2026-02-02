//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class PAGPlayerImpl, PAGSurface;

@interface PAGPlayer : NSObject
{
    PAGPlayerImpl *pagPlayer;
    PAGSurface *pagSurface;
}

- (_Bool)hitTestPoint:(id)arg1 point:(struct CGPoint)arg2 pixelHitTest:(_Bool)arg3;
- (_Bool)hitTestPoint:(id)arg1 point:(struct CGPoint)arg2;
- (id)getLayersUnderPoint:(struct CGPoint)arg1;
- (struct CGRect)getBounds:(id)arg1;
- (_Bool)flush;
- (void)prepare;
- (long long)currentFrame;
- (void)setProgress:(double)arg1;
- (double)getProgress;
- (long long)duration;
- (void)setMatrix:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)matrix;
- (void)setScaleMode:(int)arg1;
- (int)scaleMode;
- (void)setMaxFrameRate:(float)arg1;
- (float)maxFrameRate;
- (void)setCacheScale:(float)arg1;
- (float)cacheScale;
- (void)setUseDiskCache:(_Bool)arg1;
- (_Bool)useDiskCache;
- (void)setCacheEnabled:(_Bool)arg1;
- (_Bool)cacheEnabled;
- (void)setVideoEnabled:(_Bool)arg1;
- (_Bool)videoEnabled;
- (void)setSurface:(id)arg1;
- (id)getSurface;
- (void)setComposition:(id)arg1;
- (id)getComposition;
- (void)dealloc;
- (id)init;

@end

