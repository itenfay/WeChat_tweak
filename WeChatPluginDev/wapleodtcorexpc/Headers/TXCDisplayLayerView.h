//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVSampleBufferDisplayLayer, NSString;

@interface TXCDisplayLayerView : UIView
{
    atomic_d5d55d14 _mainThreadTaskCount;
    _Bool _firstFrameRendered;
    AVSampleBufferDisplayLayer *_displayLayer;
    unsigned long long _rotation;
    NSString *_currentVideoGravity;
    double _boundsOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double boundsOffset; // @synthesize boundsOffset=_boundsOffset;
@property(copy) NSString *currentVideoGravity; // @synthesize currentVideoGravity=_currentVideoGravity;
@property(nonatomic) _Bool firstFrameRendered; // @synthesize firstFrameRendered=_firstFrameRendered;
@property(nonatomic) unsigned long long rotation; // @synthesize rotation=_rotation;
@property(retain, nonatomic) AVSampleBufferDisplayLayer *displayLayer; // @synthesize displayLayer=_displayLayer;
- (void)flush;
- (void)setVideoGravity:(id)arg1;
- (_Bool)supportGravity;
- (void)drawToLayer:(struct __CVBuffer *)arg1;
- (struct CATransform3D)calculateRotationTransform;
- (_Bool)waitMainThreadTaskFinishIfNeed;
- (void)applyDisplayTransform;
- (void)fineTunningBounds;
- (_Bool)drawFrame:(struct __CVBuffer *)arg1 rotation:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

