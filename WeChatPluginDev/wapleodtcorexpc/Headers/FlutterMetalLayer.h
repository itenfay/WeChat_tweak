//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CALayer.h>

@class CADisplayLink, FlutterTexture, NSMutableSet;
@protocol MTLDevice;

@interface FlutterMetalLayer : CALayer
{
    id <MTLDevice> _preferredDevice;
    struct CGSize _drawableSize;
    unsigned long long _nextDrawableId;
    NSMutableSet *_availableTextures;
    unsigned long long _totalTextures;
    FlutterTexture *_front;
    CADisplayLink *_displayLink;
    unsigned long long _displayLinkPauseCountdown;
    _Bool _didSetContentsDuringThisDisplayLinkPeriod;
    _Bool _displayLinkForcedMaxRate;
    _Bool _framebufferOnly;
    _Bool _wantsExtendedDynamicRangeContent;
    _Bool _presentsWithTransaction;
    id <MTLDevice> _device;
    unsigned long long _pixelFormat;
    struct CGColorSpace *_colorspace;
}

+ (_Bool)enabled;
- (void).cxx_destruct;
@property _Bool presentsWithTransaction; // @synthesize presentsWithTransaction=_presentsWithTransaction;
@property _Bool wantsExtendedDynamicRangeContent; // @synthesize wantsExtendedDynamicRangeContent=_wantsExtendedDynamicRangeContent;
@property struct CGColorSpace *colorspace; // @synthesize colorspace=_colorspace;
@property _Bool framebufferOnly; // @synthesize framebufferOnly=_framebufferOnly;
@property unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(retain) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) id <MTLDevice> preferredDevice; // @synthesize preferredDevice=_preferredDevice;
- (void)returnTexture:(id)arg1;
- (void)presentTexture:(id)arg1;
- (void)presentOnMainThread:(id)arg1;
- (id)nextDrawable;
- (id)tryNextTexture;
- (id)nextTexture;
- (id)createIOSurface;
@property struct CGSize drawableSize;
- (void)didEnterBackground:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)onDisplayLink:(id)arg1;
- (void)setMaxRefreshRate:(double)arg1 forceMax:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

