//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol MMFinderReplayKitVideoDecoderDelegate, OS_dispatch_queue;

@interface MMFinderReplayKitVideoDecoder : NSObject
{
    _Bool _isHevc;
    id <MMFinderReplayKitVideoDecoderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    struct OpaqueVTDecompressionSession *_session;
    struct opaqueCMFormatDescription *_formatDesc;
    NSMutableDictionary *_parameterSets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *parameterSets; // @synthesize parameterSets=_parameterSets;
@property(nonatomic) struct opaqueCMFormatDescription *formatDesc; // @synthesize formatDesc=_formatDesc;
@property(nonatomic) struct OpaqueVTDecompressionSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) _Bool isHevc; // @synthesize isHevc=_isHevc;
@property(nonatomic) __weak id <MMFinderReplayKitVideoDecoderDelegate> delegate; // @synthesize delegate=_delegate;
- (struct opaqueCMSampleBuffer *)avccBufferFromEncodedNals:(id)arg1 format:(struct opaqueCMFormatDescription *)arg2 pts:(unsigned long long)arg3;
- (void)sendImgToLive:(struct __CVBuffer *)arg1 videoFrameId:(long long)arg2;
- (void)decodeEncodedFrame:(id)arg1 parsedNalus:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (_Bool)createFormatDesc;
- (_Bool)updateParameterSets:(id)arg1;
- (void)releaseDecoder;
- (_Bool)createDecoderWithBitDeth:(long long)arg1 videoFullRangeFlag:(long long)arg2;
- (_Bool)checkToRecreateDecoder:(id)arg1 bitDeth:(long long)arg2 videoFullRangeFlag:(long long)arg3;
- (void)notifyError:(id)arg1 forFrame:(id)arg2 withComplete:(CDUnknownBlockType)arg3;
- (void)resetDecoderOnComplete:(CDUnknownBlockType)arg1;
- (void)processVideoFrame:(id)arg1 compleBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

