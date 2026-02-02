//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MBMediaServiceWrapper : NSObject
{
    struct IMediaSdkWrapper *sdk_wrapper;
}

- (void)writerRemove:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)writerStop:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)writerUpdate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)writerAudio:(unsigned int)arg1 data:(char *)arg2 size:(unsigned int)arg3 format:(int)arg4 channel:(int)arg5 samplerate:(int)arg6 cts:(unsigned long long)arg7;
- (void)writerVideo:(unsigned int)arg1 data:(char *)arg2 size:(unsigned int)arg3 format:(int)arg4 width:(unsigned int)arg5 height:(unsigned int)arg6 horizonalFlip:(_Bool)arg7 verticalFlip:(_Bool)arg8 cts:(unsigned long long)arg9;
- (void)writerStart:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)writerCreate:(id)arg1 callback:(CDUnknownBlockType)arg2;
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

