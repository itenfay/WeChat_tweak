//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVSampleBufferDisplayLayer, NSString;

@interface WCPlayerPipDisplayLayerView : UIView
{
    _Bool _waitingForMainThread;
    _Bool _firstFrameRendered;
    unsigned int _taskId;
    int _rotationAngle;
    AVSampleBufferDisplayLayer *_displayLayer;
    NSString *_currentVideoGravity;
    double _boundsOffset;
    long long _lastPrintPtsSec;
    struct CGSize _frameSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastPrintPtsSec; // @synthesize lastPrintPtsSec=_lastPrintPtsSec;
@property(nonatomic) double boundsOffset; // @synthesize boundsOffset=_boundsOffset;
@property(copy, nonatomic) NSString *currentVideoGravity; // @synthesize currentVideoGravity=_currentVideoGravity;
@property(nonatomic) struct CGSize frameSize; // @synthesize frameSize=_frameSize;
@property(nonatomic) _Bool firstFrameRendered; // @synthesize firstFrameRendered=_firstFrameRendered;
@property _Bool waitingForMainThread; // @synthesize waitingForMainThread=_waitingForMainThread;
@property(nonatomic) int rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(retain, nonatomic) AVSampleBufferDisplayLayer *displayLayer; // @synthesize displayLayer=_displayLayer;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
- (void)flush;
- (void)setVideoGravity:(id)arg1;
- (void)drawToLayer:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)getPixelBufferFromTPFrame:(id)arg1;
- (struct CATransform3D)calculateRotationTransform;
- (void)waitForMainThread;
- (void)applyDisplayTransform;
- (void)fineTunningBounds;
- (_Bool)drawFrame:(id)arg1;
- (void)renderedOneEmptyFrameWithSize:(struct CGSize)arg1;
- (void)renderedOneFrame:(id)arg1;
- (void)seek:(double)arg1;
- (void)setRate:(double)arg1;
- (double)getCurrentTime;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

