//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CIContext;
@protocol MMFinderReplayKitVideoEncoderDelegate, OS_dispatch_queue;

@interface MMFinderReplayKitVideoEncoder : NSObject
{
    struct OpaqueVTCompressionSession *_session;
    struct EncodeParamsTypeHeader {
        unsigned short is_annexb;
        unsigned short rc_method;
        float width;
        float height;
        unsigned int framerate;
        unsigned int bitrate;
        unsigned int gop;
    } _param;
    unsigned long long _frameIndex;
    struct OpaqueVTPixelRotationSession *_rotation_session_;
    _Bool _isLandscape;
    id <MMFinderReplayKitVideoEncoderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CIContext *_rotateContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CIContext *rotateContext; // @synthesize rotateContext=_rotateContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) __weak id <MMFinderReplayKitVideoEncoderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)RotateCVPixelBufferIOS16:(struct __CVBuffer *)arg1 destination:(struct __CVBuffer *)arg2 rotation:(int)arg3;
- (struct __CVBuffer *)newRotateCVPixelBuffer:(struct __CVBuffer *)arg1 rotation:(int)arg2;
- (struct __CVBuffer *)newRotateCVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2;
- (void)onCodecFinished:(void *)arg1 status:(int)arg2 infoFlags:(unsigned int)arg3 sampleBufferRef:(struct opaqueCMSampleBuffer *)arg4;
- (int)configEncoder;
- (void)forceRestartEncoder;
- (void)updateEncodeSize;
- (void)updateParams:(struct EncodeParamsTypeHeader)arg1;
- (void)stop;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 pts:(CDStruct_1b6d18a9)arg2 needsIFrame:(_Bool)arg3 isLandscape:(_Bool)arg4 orientation:(long long)arg5;
- (_Bool)updateLandscape:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1;

@end

