//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RfxPagPlayerImpl : NSObject
{
    struct shared_ptr<rfx::RfxPagPlayer> pagPlayer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
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
- (void)setComposition:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDeviceKind:(int)arg1;

@end

