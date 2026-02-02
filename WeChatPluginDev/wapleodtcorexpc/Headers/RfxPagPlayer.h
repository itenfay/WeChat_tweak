//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class RfxPagFile, RfxPagPlayerImpl, RfxPagSurface;

@interface RfxPagPlayer : NSObject
{
    RfxPagPlayerImpl *pagPlayer;
    RfxPagSurface *pagSurface;
    RfxPagFile *pagFile;
}

- (_Bool)flush;
- (void)prepare;
- (void)setProgress:(double)arg1;
- (double)getProgress;
- (long long)duration;
- (void)setMatrix:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)matrix;
- (void)setScaleMode:(int)arg1;
- (int)scaleMode;
- (void)setMaxFrameRate:(float)arg1;
- (float)maxFrameRate;
- (void)setSurface:(id)arg1;
- (id)getSurface;
- (void)setComposition:(id)arg1;
- (id)getComposition;
- (void)dealloc;
- (id)initWithDeviceKind:(int)arg1;
- (id)init;

@end

