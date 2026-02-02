//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WADynamicBackgroundSystem;
@protocol WADynamicBackgroundGLViewControllerDelegate;

@interface WADynamicBackgroundGLViewController
{
    _Bool _canDraw;
    _Bool _isTryingDrawFirstFrame;
    _Bool _isFirstFrameDrawed;
    unsigned int _blurQuality;
    id <WADynamicBackgroundGLViewControllerDelegate> _mDelegate;
    NSMutableArray *_objects;
    NSMutableArray *_blurs;
    WADynamicBackgroundSystem *_backgroundSystem;
    struct CGSize _framebufferSize;
    union _GLKMatrix4 _projectionMatrix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WADynamicBackgroundSystem *backgroundSystem; // @synthesize backgroundSystem=_backgroundSystem;
@property(nonatomic) _Bool isFirstFrameDrawed; // @synthesize isFirstFrameDrawed=_isFirstFrameDrawed;
@property(nonatomic) _Bool isTryingDrawFirstFrame; // @synthesize isTryingDrawFirstFrame=_isTryingDrawFirstFrame;
@property(retain, nonatomic) NSMutableArray *blurs; // @synthesize blurs=_blurs;
@property(nonatomic) unsigned int blurQuality; // @synthesize blurQuality=_blurQuality;
@property(nonatomic) struct CGSize framebufferSize; // @synthesize framebufferSize=_framebufferSize;
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(nonatomic) union _GLKMatrix4 projectionMatrix; // @synthesize projectionMatrix=_projectionMatrix;
@property(nonatomic) _Bool canDraw; // @synthesize canDraw=_canDraw;
@property(nonatomic) __weak id <WADynamicBackgroundGLViewControllerDelegate> mDelegate; // @synthesize mDelegate=_mDelegate;
- (_Bool)isCurrentTimeInDarkStyle;
- (void)updateBackgroundColorWithColor1:(union _GLKVector4)arg1 color2:(union _GLKVector4)arg2;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)endTryDrawFirstFrame;
- (void)tryDrawFirstFrame;
- (void)setPaused:(_Bool)arg1;
- (_Bool)isBackground;
- (void)drawPlane:(id)arg1;
- (void)drawObjects;
- (void)update;
- (id)createPlaneWithTexture:(unsigned int)arg1 directionX:(unsigned int)arg2 needColorMatrix:(unsigned int)arg3;
- (void)createTextureFrameBuffer:(unsigned int *)arg1 toTexture:(unsigned int *)arg2 framebufferSize:(struct CGSize)arg3;
- (union _GLKVector4)getVector4ColorFromHex:(int)arg1 alpha:(double)arg2;
- (void)createDynamicBackground;
- (void)becomeUnvisible;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

