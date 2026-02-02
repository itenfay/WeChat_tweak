//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGameAudioMixWrapper, MMGameOffTexture, MMMediaServiceWrapper, NSString;

@interface WAWebViewPlugin_MediaService
{
    struct mutex mReaderMutex;
    struct map<unsigned int, ReaderTask, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, ReaderTask>>> mReaders;
    struct mutex mWriterMutex;
    struct map<unsigned int, WriterTask, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, WriterTask>>> mWriters;
    struct mutex mConvasidMutex;
    struct map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> mConvasids;
    unsigned int audio_mark;
    MMGameOffTexture *_offTexture;
    MMGameAudioMixWrapper *_audioMixer;
    _Bool _bDisableMixer;
    MMMediaServiceWrapper *_service_wrapper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) MMMediaServiceWrapper *service_wrapper; // @synthesize service_wrapper=_service_wrapper;
- (void)wkRequest:(id)arg1;
- (void)asyncRunOnMainThread:(CDUnknownBlockType)arg1;
- (void)syncRunOnMainThread:(CDUnknownBlockType)arg1;
- (_Bool)isGame;
- (void)notify:(id)arg1 dic:(id)arg2;
- (void)notifyLoaderProcess:(unsigned int)arg1 end:(_Bool)arg2 duration:(unsigned int)arg3;
- (void)notifyPlayerError:(id)arg1 containerId:(unsigned int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)notifyPlayerBuffSize:(id)arg1 containerId:(unsigned int)arg2 buffSize:(unsigned int)arg3;
- (void)notifyPlayerPlayEnd:(id)arg1 containerId:(unsigned int)arg2;
- (void)notifyTimeStampChange:(id)arg1 canvasId:(unsigned int)arg2 containerId:(unsigned int)arg3 stamp:(long long)arg4;
- (void)notifyError:(id)arg1 canvasId:(unsigned int)arg2 containerId:(unsigned int)arg3 errCode:(int)arg4 errMsg:(id)arg5;
- (void)notifyStop:(id)arg1 canvasId:(unsigned int)arg2 containerId:(unsigned int)arg3 tempFilePath:(id)arg4 tempThumbPath:(id)arg5 duration:(unsigned int)arg6 fileSize:(unsigned int)arg7;
- (void)notifyAbort:(id)arg1 canvasId:(unsigned int)arg2 containerId:(unsigned int)arg3;
- (void)notifyResume:(id)arg1 canvasId:(unsigned int)arg2 containerId:(unsigned int)arg3;
- (void)notifyPause:(id)arg1 canvasId:(unsigned int)arg2 containerId:(unsigned int)arg3;
- (void)notifyStart:(id)arg1 canvasId:(unsigned int)arg2 containerId:(unsigned int)arg3;
- (unsigned long long)getReaderLastVideoFrameStamp:(unsigned int)arg1;
- (void)delCanvasIdAndContainerId:(unsigned int)arg1;
- (unsigned int)getContainerIdByCanvasId:(unsigned int)arg1;
- (void)addCanvasIdAndContainerId:(unsigned int)arg1 containerId:(unsigned int)arg2;
- (void)stopAudioDevice:(id)arg1 wxAudioPlayer:(id)arg2 canvasId:(unsigned int)arg3;
- (void)startAudioDevice:(id)arg1 wxAudioPlayer:(id)arg2;
- (void)onMixData:(id)arg1 format:(long long)arg2 samplerate:(int)arg3 channel:(int)arg4;
- (void)onWxAudioPlayBackWithSessionId:(int)arg1 data:(char *)arg2 size:(unsigned int)arg3 channels:(unsigned int)arg4 samplerate:(unsigned int)arg5 fmt:(unsigned long long)arg6;
- (void)onAudioPlayBackWithMixer:(id)arg1 when:(id)arg2;
- (void)onAudioPlayBackWithoutMixer:(id)arg1 when:(id)arg2;
- (void)onAudioPlayBack:(id)arg1 when:(id)arg2;
- (void)onScreenCapture:(unsigned int)arg1 data:(void *)arg2 size:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 bitsPerComponent:(unsigned long long)arg6 bytesPerRow:(unsigned long long)arg7 format:(int)arg8;
- (void)onScreenCapture:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer *)arg4;
- (void)setFrameCaptureDelegate:(id)arg1 canvasId:(unsigned int)arg2 containerId:(unsigned int)arg3 captureDelegate:(id)arg4;
- (void)editForNativeView:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)editForMediaSdk:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)openGameShare:(id)arg1 withShareOptions:(id)arg2 withTitle:(id)arg3 withDesc:(id)arg4 withConfigJson:(id)arg5 withIsDevEdited:(_Bool)arg6 withCallback:(CDUnknownBlockType)arg7;
- (void)openVideoEditor:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)loaderRemove:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)loaderStop:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)loaderStart:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)loaderCreate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)readerRemove:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onReaderRemoveResult:(unsigned int)arg1 errCode:(int)arg2 errDesc:(id)arg3 ret:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)readerStop:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onReaderStopResult:(unsigned int)arg1 errCode:(int)arg2 errDesc:(id)arg3 ret:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)readerGetFrame:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)readerSeek:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)readerWait:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)readerStart:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onReaderStartResult:(unsigned int)arg1 errCode:(int)arg2 errDesc:(id)arg3 ret:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)readerCreate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)writerRemove:(id)arg1 notifyEventName:(id)arg2 dic:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)writerAbort:(id)arg1 notifyEventName:(id)arg2 dic:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)writerStop:(id)arg1 notifyEventName:(id)arg2 dic:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)writerResume:(id)arg1 notifyEventName:(id)arg2 dic:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)writerPause:(id)arg1 notifyEventName:(id)arg2 dic:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)writerUpdateStatus:(id)arg1 notifyEventName:(id)arg2 canvasId:(unsigned int)arg3 containerId:(unsigned int)arg4 pause:(_Bool)arg5 dic:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (void)writerUpdate:(id)arg1 notifyEventName:(id)arg2 dic:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)writerStart:(id)arg1 notifyEventName:(id)arg2 dic:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)writerCreate:(id)arg1 notifyEventName:(id)arg2 dic:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)editorRemove:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)editorExport:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)editorRemoveTrack:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)editorUpdateTrack:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)editorCreateTrack:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)editorGetTrack:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)editorCreate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerRemove:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerStop:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerUpdate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerStart:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerDelTask:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerAddTask:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerCreate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)switchGround:(_Bool)arg1 background:(_Bool)arg2;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

