//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVPictureInPictureController, AVPictureInPictureVideoCallViewController, NSObject, NSString, VoIPCanvas, VoIPPIPView;
@protocol MTLBuffer, MTLDepthStencilState, MTLDevice, MTLRenderPipelineState, OS_dispatch_queue;

@interface VoIPPIPService
{
    float _windowVertexData[16];
    float _smallWindowVertexData[16];
    _Bool _isWorking;
    _Bool _isDisplaying;
    _Bool _isAutoDismissed;
    _Bool _isTalking;
    _Bool _isOpened;
    _Bool _isCaller;
    _Bool _isAudio;
    float _smallWindowVertexByteLeft;
    float _smallWindowVertexByteRight;
    float _smallWindowVertexByteTop;
    float _smallWindowVertexByteBottom;
    NSObject<OS_dispatch_queue> *_queue;
    VoIPCanvas *_canvas;
    AVPictureInPictureVideoCallViewController *_viewController;
    AVPictureInPictureController *_controller;
    VoIPPIPView *_view;
    id <MTLDevice> _device;
    id <MTLDepthStencilState> _depthStencilState;
    id <MTLRenderPipelineState> _windowRenderPipelineState;
    id <MTLBuffer> _windowVertexBuffer;
    id <MTLRenderPipelineState> _smallWindowRenderPipelineState;
    id <MTLBuffer> _smallWindowVertexBuffer;
    struct CGSize _contentSize;
}

+ (id)renderPipelineStateWithFragmentFunction:(id)arg1 device:(id)arg2 library:(id)arg3;
+ (struct CGSize)defaultContentSize;
- (void).cxx_destruct;
@property(nonatomic) float smallWindowVertexByteBottom; // @synthesize smallWindowVertexByteBottom=_smallWindowVertexByteBottom;
@property(nonatomic) float smallWindowVertexByteTop; // @synthesize smallWindowVertexByteTop=_smallWindowVertexByteTop;
@property(nonatomic) float smallWindowVertexByteRight; // @synthesize smallWindowVertexByteRight=_smallWindowVertexByteRight;
@property(nonatomic) float smallWindowVertexByteLeft; // @synthesize smallWindowVertexByteLeft=_smallWindowVertexByteLeft;
@property(retain, nonatomic) id <MTLBuffer> smallWindowVertexBuffer; // @synthesize smallWindowVertexBuffer=_smallWindowVertexBuffer;
@property(retain, nonatomic) id <MTLRenderPipelineState> smallWindowRenderPipelineState; // @synthesize smallWindowRenderPipelineState=_smallWindowRenderPipelineState;
@property(retain, nonatomic) id <MTLBuffer> windowVertexBuffer; // @synthesize windowVertexBuffer=_windowVertexBuffer;
@property(retain, nonatomic) id <MTLRenderPipelineState> windowRenderPipelineState; // @synthesize windowRenderPipelineState=_windowRenderPipelineState;
@property(retain, nonatomic) id <MTLDepthStencilState> depthStencilState; // @synthesize depthStencilState=_depthStencilState;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(retain, nonatomic) VoIPPIPView *view; // @synthesize view=_view;
@property(nonatomic) _Bool isAudio; // @synthesize isAudio=_isAudio;
@property(nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic) _Bool isOpened; // @synthesize isOpened=_isOpened;
@property(nonatomic) _Bool isTalking; // @synthesize isTalking=_isTalking;
@property(nonatomic) _Bool isAutoDismissed; // @synthesize isAutoDismissed=_isAutoDismissed;
@property(retain, nonatomic) AVPictureInPictureController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) AVPictureInPictureVideoCallViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) VoIPCanvas *canvas; // @synthesize canvas=_canvas;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool isDisplaying; // @synthesize isDisplaying=_isDisplaying;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) _Bool isWorking; // @synthesize isWorking=_isWorking;
- (void)voIPAudioServiceInterruptionBegin;
- (void)UIManagerDidExtendWindow;
- (void)UIManagerDidCollapseWindow;
- (void)UIManagerDidClose;
- (void)UIManagerDidOpenWindowWithContact:(id)arg1 isCaller:(_Bool)arg2 startInApp:(_Bool)arg3 isEarMode:(_Bool)arg4 isAudioMode:(_Bool)arg5 from:(unsigned long long)arg6;
- (void)OnVideoModeChangeToVoiceMode;
- (void)OnBothEarMode;
- (void)OnBothVideoMode;
- (void)OnOneWayRemoteVideoMode;
- (void)OnOneWayLocalVideoMode;
- (void)OnOneWayRemoteEarMode;
- (void)OnOneWayLocalEarMode;
- (void)onVoIPExtRemoteCaptureResume;
- (void)onVoIPExtRemoteCaptureSuspend;
- (void)onVoIPExtLocalCaptureResume;
- (void)onVoIPExtLocalCaptureSuspend;
- (void)OnBeginTalk:(id)arg1;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)clear;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (id)init;
- (_Bool)customizeSmallWindowRenderCommandEncoder:(id)arg1 withYMetalTexutre:(struct __CVBuffer *)arg2 UVMetalTexutre:(struct __CVBuffer *)arg3 bufferWidth:(double)arg4 bufferHeight:(double)arg5 isMirror:(_Bool)arg6;
- (_Bool)reloadSmallWindowVertexBufferWithWidth:(double)arg1 height:(double)arg2 isMirror:(_Bool)arg3;
- (_Bool)customizeWindowRenderCommandEncoder:(id)arg1 withYMetalTexutre:(struct __CVBuffer *)arg2 UVMetalTexutre:(struct __CVBuffer *)arg3;
- (_Bool)customizeWindowRenderCommandEncoder:(id)arg1 withYMetalTexutre:(struct __CVBuffer *)arg2 UVMetalTexutre:(struct __CVBuffer *)arg3 bufferWidth:(double)arg4 bufferHeight:(double)arg5 isMirror:(_Bool)arg6;
- (_Bool)reloadWindowVertexBufferWithWidth:(double)arg1 height:(double)arg2 isMirror:(_Bool)arg3;
- (void)open;
- (void)setup;
- (void)setupIfShouldControllerStopPIP:(_Bool)arg1;
- (void)refreshContents;
- (void)close;
- (void)reset;
- (void)resetIfShouldControllerStopPIP:(_Bool)arg1;
- (_Bool)isRemoteAvatarHidden;
- (_Bool)isLocalAvatarHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

