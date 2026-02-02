//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMMediaServiceWrapper : NSObject
{
    struct IMediaSdkWrapper *sdk_wrapper;
    _Bool audioplaying;
}

@property _Bool audioplaying; // @synthesize audioplaying;
- (void)loaderRemove:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)loaderStop:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)loaderStart:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)loaderCreate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)readerRemove:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)readerStop:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)readerGetFrame:(unsigned int)arg1 isVideo:(_Bool)arg2 data:(char *)arg3 size:(unsigned int)arg4 frameInfo:(struct FrameInfo *)arg5;
- (_Bool)readerGetAudio:(unsigned int)arg1 data:(char *)arg2 size:(unsigned int)arg3 ret:(id)arg4;
- (_Bool)readerGetVideo:(unsigned int)arg1 data:(char *)arg2 size:(unsigned int)arg3 ret:(id)arg4;
- (void)readerSeek:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)readerWait:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)readerStart:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)readerCreate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)editorRemoveTrack:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)editorUpdateTrack:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)editorCreateTrack:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)editorGetTrack:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)editorRemove:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)editorExport:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)editorCreate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)writerRemove:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)writerStop:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)writerUpdate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)writerAudio:(unsigned int)arg1 data:(char *)arg2 size:(unsigned int)arg3 format:(int)arg4 channel:(int)arg5 samplerate:(int)arg6 cts:(unsigned long long)arg7;
- (void)writerVideo:(unsigned int)arg1 data:(char *)arg2 size:(unsigned int)arg3 format:(int)arg4 width:(unsigned int)arg5 height:(unsigned int)arg6 horizonalFlip:(_Bool)arg7 verticalFlip:(_Bool)arg8 cts:(unsigned long long)arg9;
- (void)writerStart:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)writerCreate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerRemove:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerStop:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerUpdate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerStart:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerDelTask:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerAddTask:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerCreate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)playerCheck:(CDUnknownBlockType)arg1;
- (void)thumb:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)remux:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)analysis:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)test:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)SwitchBackground:(id)arg1;
- (void)delNotifyCallbacker:(unsigned int)arg1;
- (void)addNotifyCallbacker:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)delContainerNotifier:(unsigned int)arg1;
- (void)addContainerNotifier:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)delEventNotifier:(id)arg1;
- (void)addEventNotifier:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (int)getEventType:(id)arg1;
- (struct IMediaSdkWrapper *)GetSdkWrapper;
- (void)dealloc;
- (id)init;

@end

