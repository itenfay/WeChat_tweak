//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJCamSink : NSObject
{
    struct SharedPtr<XMFFrameCreatorApple> _frameCreator;
    SharedPtr_8d35978a _backingSession;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_8d35978a backingSession; // @synthesize backingSession=_backingSession;
- (void)sendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2 isMirrored:(_Bool)arg3;
- (SharedPtr_43d2f63a)createImageFrameWithVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2 isMirrored:(_Bool)arg3;
@property(readonly, nonatomic) _Bool isReady;
- (void)clearBackingSession;
- (id)initWithBackingSession:(const void *)arg1;

@end

