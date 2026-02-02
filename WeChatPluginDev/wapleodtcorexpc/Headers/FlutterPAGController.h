//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterPAGInfo, FlutterPAGValueAnimator, NSNumber, NSString, PAGFile, PAGPlayer, PAGSurface, PAGViewListenerApi;
@protocol FlutterTextureRegistry, OS_dispatch_queue;

@interface FlutterPAGController : NSObject
{
    struct __CVBuffer *_lastPixelBuffer;
    NSNumber *_pagId;
    FlutterPAGInfo *_pagInfo;
    struct CGSize _size;
    PAGSurface *_pagSurface;
    PAGPlayer *_pagPlayer;
    long long _duration;
    int _repeatCount;
    NSObject<OS_dispatch_queue> *_pag_queue;
    _Bool _isReleased;
    _Bool _couldProduceFrame;
    NSObject<FlutterTextureRegistry> *_flutterTextureRegistry;
    double _currentPlayFraction;
    long long _textureId;
    PAGFile *_pagFile;
    FlutterPAGValueAnimator *_valueAnimator;
    PAGViewListenerApi *_pagViewListener;
}

+ (void)setFlutterUpdatePath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PAGViewListenerApi *pagViewListener; // @synthesize pagViewListener=_pagViewListener;
@property(nonatomic) _Bool couldProduceFrame; // @synthesize couldProduceFrame=_couldProduceFrame;
@property(nonatomic) _Bool isReleased; // @synthesize isReleased=_isReleased;
@property(retain, nonatomic) FlutterPAGValueAnimator *valueAnimator; // @synthesize valueAnimator=_valueAnimator;
@property(retain, nonatomic) PAGFile *pagFile; // @synthesize pagFile=_pagFile;
@property(nonatomic) long long textureId; // @synthesize textureId=_textureId;
@property(nonatomic) double currentPlayFraction; // @synthesize currentPlayFraction=_currentPlayFraction;
@property(retain, nonatomic) NSObject<FlutterTextureRegistry> *flutterTextureRegistry; // @synthesize flutterTextureRegistry=_flutterTextureRegistry;
- (void)onTextureUnregistered:(id)arg1;
- (void)dealloc;
- (struct __CVBuffer *)RBGBufferCreate:(int)arg1 bufferHeight:(int)arg2;
- (struct __CVBuffer *)RBGBuffereCopyWithPixelBuffer:(struct __CVBuffer *)arg1 pixelBufferDst:(struct __CVBuffer *)arg2;
- (_Bool)refreshPAGWithProgress:(double)arg1;
- (void)producePAGCVPixelBuffer;
- (void)updateView;
- (void)onAnimationRepeat;
- (void)onAnimationCancel;
- (void)onAnimationEnd;
- (void)onAnimationUpdate;
- (void)onAnimationStart;
- (void)setPlayTimeMs:(long long)arg1;
- (double)getProgress;
- (void)free;
- (void)releaseAndFree;
- (void)pagFlushWhenPause;
- (void)flush;
- (_Bool)setSolidColorName:(id)arg1 color:(id)arg2;
- (_Bool)replaceImageIndex:(id)arg1 path:(id)arg2;
- (void)setRepeatCount:(int)arg1;
- (void)setProgress:(double)arg1;
- (void)pausePlay;
- (void)resumePlay;
- (void)stopPlay;
- (void)startPlayImpl;
- (void)startPlay;
- (void)setPagInfo:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSizeWidth:(double)arg1 height:(double)arg2;
- (void)setPAGSourceInfo:(id)arg1;
- (id)getTextureId;
- (id)init:(id)arg1 flutterTextureRegistry:(id)arg2 binaryMessenger:(id)arg3;
- (struct __CVBuffer *)copyPixelBuffer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

