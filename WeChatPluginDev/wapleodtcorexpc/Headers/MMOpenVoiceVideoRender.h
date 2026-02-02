//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, OpenVoiceVideoRender;
@protocol OS_dispatch_queue;

@interface MMOpenVoiceVideoRender
{
    unsigned int frameCount;
    _Bool _notifyFirstFrame;
    int _objectFit;
    int _rotation;
    NSObject<OS_dispatch_queue> *_queue;
    OpenVoiceVideoRender *_videoRender;
    long long _lastOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(nonatomic) _Bool notifyFirstFrame; // @synthesize notifyFirstFrame=_notifyFirstFrame;
@property(nonatomic) int rotation; // @synthesize rotation=_rotation;
@property(nonatomic) int objectFit; // @synthesize objectFit=_objectFit;
@property(retain, nonatomic) OpenVoiceVideoRender *videoRender; // @synthesize videoRender=_videoRender;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (struct __CVBuffer *)copyDataFromBuffer:(const char *)arg1 toYUVPixelBufferWithWidth:(unsigned long long)arg2 Height:(unsigned long long)arg3;
- (void)render:(char *)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 rotation:(int)arg5;
- (void)fpsTimerCheck;
- (int)updateView:(int)arg1 dic:(id)arg2;
- (int)initView:(int)arg1 openId:(id)arg2 dic:(id)arg3 queue:(id)arg4;
- (void)dealloc;
- (id)init;

@end

