//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVSampleBufferDisplayLayer, NSString;

@interface TPDisplayLayerView : UIView
{
    _Bool _waitingForMainThread;
    _Bool _firstFrameRendered;
    int _rotationAngle;
    AVSampleBufferDisplayLayer *_displayLayer;
    struct ITPRendererInterruptCallback *_interruptCallback;
    NSString *_currentVideoGravity;
    double _boundsOffset;
    struct CGSize _frameSize;
}

- (void).cxx_destruct;
@property(nonatomic) double boundsOffset; // @synthesize boundsOffset=_boundsOffset;
@property(copy) NSString *currentVideoGravity; // @synthesize currentVideoGravity=_currentVideoGravity;
@property(nonatomic) struct CGSize frameSize; // @synthesize frameSize=_frameSize;
@property(nonatomic) _Bool firstFrameRendered; // @synthesize firstFrameRendered=_firstFrameRendered;
@property(nonatomic) struct ITPRendererInterruptCallback *interruptCallback; // @synthesize interruptCallback=_interruptCallback;
@property _Bool waitingForMainThread; // @synthesize waitingForMainThread=_waitingForMainThread;
@property(nonatomic) int rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(retain, nonatomic) AVSampleBufferDisplayLayer *displayLayer; // @synthesize displayLayer=_displayLayer;
- (void)flush;
- (void)setVideoGravity:(id)arg1;
- (void)drawToLayer:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)getPixelBufferFromTPFrame:(struct TPFrame *)arg1;
- (struct CATransform3D)calculateRotationTransform;
- (void)waitForMainThread;
- (void)applyDisplayTransform;
- (void)fineTunningBounds;
- (_Bool)drawFrame:(struct TPFrame *)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

