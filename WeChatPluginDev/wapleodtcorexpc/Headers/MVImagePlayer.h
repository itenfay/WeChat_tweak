//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, MVImageLoader, NSDate, NSString;
@protocol MVImagePlayerDelegate, OS_dispatch_queue;

@interface MVImagePlayer : NSObject
{
    _Bool _isPlaying;
    unsigned int _animationType;
    NSString *_imagePath;
    NSString *_imageId;
    long long _fps;
    double _duration;
    id <MVImagePlayerDelegate> _delegate;
    MMTimer *_timer;
    struct __CVBuffer *_pixelBuffer;
    double _currenTimeStamp;
    MVImageLoader *_imageLoader;
    NSDate *_startPlayDate;
    NSObject<OS_dispatch_queue> *_renderDispatchQueue;
    struct CGSize _outputSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderDispatchQueue; // @synthesize renderDispatchQueue=_renderDispatchQueue;
@property(retain, nonatomic) NSDate *startPlayDate; // @synthesize startPlayDate=_startPlayDate;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) MVImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) double currenTimeStamp; // @synthesize currenTimeStamp=_currenTimeStamp;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <MVImagePlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int animationType; // @synthesize animationType=_animationType;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) long long fps; // @synthesize fps=_fps;
@property(copy, nonatomic) NSString *imageId; // @synthesize imageId=_imageId;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 urlString:(id)arg3;
- (void)setupScaleAnimiationForTexture:(id)arg1 withStartCenterPoint:(struct CGPoint)arg2 endCenterPoint:(struct CGPoint)arg3 animationType:(int)arg4;
- (id)inputTextureWithImageSize:(struct CGSize)arg1 outputSize:(struct CGSize)arg2 progress:(double)arg3 animationType:(int)arg4;
- (_Bool)displayImage;
- (void)onTimeFired;
- (void)stopTimer;
- (void)_startTimer;
- (void)startTimer;
- (double)timerInterval;
- (void)seek:(double)arg1;
- (void)stop;
- (void)pause;
- (void)clear;
- (void)dealloc;
- (id)resizeImage:(id)arg1 toMaxWidth:(int)arg2 andMaxHeight:(int)arg3;
- (void)_setupDisplayImage:(id)arg1;
- (void)setupDisplayImage:(id)arg1;
- (void)startPlayWithImage:(id)arg1;
- (void)loadImageIfNeeded;
- (void)start;
- (void)loadImageData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

