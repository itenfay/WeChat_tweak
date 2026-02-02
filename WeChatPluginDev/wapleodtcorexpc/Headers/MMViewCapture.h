//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, UIView;
@protocol MMViewCaptureDelegate, OS_dispatch_queue;

@interface MMViewCapture : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _alignsImageSize;
    UIView *_view;
    id <MMViewCaptureDelegate> _delegate;
    long long _preferredFramesPerSecond;
    CADisplayLink *_displayLink;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool alignsImageSize; // @synthesize alignsImageSize=_alignsImageSize;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(nonatomic) __weak id <MMViewCaptureDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void)captureByDisplayLink:(id)arg1;
- (void)resumeCapturing;
- (void)pauseCapturing;
- (void)stopCapturing;
- (void)startCapturing;
@property(readonly, nonatomic) _Bool isCapturing;
- (id)initWithView:(id)arg1;
- (id)init;

@end

