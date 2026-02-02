//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock, NSString;

@interface VoIPVideoStreamLocalService
{
    struct __CVBuffer *_pixelBuffer;
    struct __CVBuffer *_YMetalTexture;
    struct __CVBuffer *_UVMetalTexture;
    _Bool _isWorking;
    _Bool _isTalking;
    _Bool _isLocalCaptureBack;
    unsigned long long _bufferWidth;
    unsigned long long _bufferHeight;
    NSRecursiveLock *_releaseRecursiveLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *releaseRecursiveLock; // @synthesize releaseRecursiveLock=_releaseRecursiveLock;
@property(nonatomic) _Bool isLocalCaptureBack; // @synthesize isLocalCaptureBack=_isLocalCaptureBack;
@property(nonatomic) unsigned long long bufferHeight; // @synthesize bufferHeight=_bufferHeight;
@property(nonatomic) unsigned long long bufferWidth; // @synthesize bufferWidth=_bufferWidth;
@property(nonatomic) _Bool isTalking; // @synthesize isTalking=_isTalking;
@property(nonatomic) _Bool isWorking; // @synthesize isWorking=_isWorking;
- (void)voIPilinkMgrDidReceiveRemoteFrameAtFirst;
- (void)voIPilinkMgrDidReceiveLocalFrameAtFirst;
- (void)voIPilinkMgrDidReceiveRemoteFrameYUVData:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)voIPilinkMgrDidReceiveLocalFramePixelBuffer:(struct __CVBuffer *)arg1;
- (_Bool)shouldIgnoreDefaultRender;
- (void)VOIPMgrDidCreateFrame:(_Bool)arg1 isRemote:(_Bool)arg2;
- (void)VOIPMgrDidReceiveRemotePixelBuffer:(struct __CVBuffer *)arg1;
- (void)VOIPMgrDidReceiveLocalPixelBuffer:(struct __CVBuffer *)arg1;
- (void)onVoIPExtLocalCaptureToggleWithIsBack:(_Bool)arg1;
- (void)canvas:(id)arg1 customizeRenderCommandEncoder:(id)arg2 withIndex:(unsigned long long)arg3;
- (unsigned long long)timesForCustomizingRenderCommandEncoderForCanvas:(id)arg1;
- (void)canvas:(id)arg1 didRenderWithIsSucceed:(_Bool)arg2;
- (void)canvasWillRender:(id)arg1;
- (void)VoIPPIPServiceDidRemoteCaptureSuspend;
- (void)VoIPPIPServiceOnRestoreUserInterfaceForPictureInPictureStop;
- (void)VoIPPIPServiceEnterForeground:(_Bool)arg1;
- (void)VoIPPIPServiceDidStopPictureInPicture;
- (void)VoIPPIPServiceDidStartPictureInPicture;
- (void)VoIPPIPServiceWillStartPictureInPicture;
- (void)OnBeginTalk:(id)arg1;
- (void)OnBeHanguped:(id)arg1;
- (void)OnHangup:(id)arg1;
- (void)UIManagerDidClose;
- (void)UIManagerWillOpenWindowWithContact:(id)arg1 isCaller:(_Bool)arg2 monoMsg:(id)arg3 startInApp:(_Bool)arg4 isEarMode:(_Bool)arg5 isAudioMode:(_Bool)arg6 from:(unsigned long long)arg7 isIlink:(_Bool)arg8;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (struct __CVBuffer *)pixelBuffer;
- (void)close;
- (void)closeWhenInDealloc:(_Bool)arg1;
- (void)recievePixelBuffer:(struct __CVBuffer *)arg1;
- (void)open;
- (void)clearTextureByCanvasQueueWhenInDealloc:(_Bool)arg1;
- (void)clearTexture;
- (void)clearPixelBuffer;
- (void)clearPixelBufferWhenInDealloc:(_Bool)arg1;
- (void)releasePixelBufferOnBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

