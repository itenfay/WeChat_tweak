//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VOIPComponent : NSObject
{
    int mEngineChid;
    struct VOIPChannelAdapter *mChannelAdapter;
    struct VoipCSChannelAdapter *mCSChannelAdapter;
    struct VOIPNetNotifier *mNetNotifier;
    struct VOIPCSNetNotifier *mCSNetNotifier;
    struct ITransportChannel *mTransChannel;
    struct IMVQQEngine *mMVEngine;
    struct VoIPRingBuffer *mVideoDecBuf;
    struct VoIPRingBuffer *mAudioDecBuf;
}

@property(nonatomic) struct VoIPRingBuffer *mAudioDecBuf; // @synthesize mAudioDecBuf;
@property(nonatomic) struct VoIPRingBuffer *mVideoDecBuf; // @synthesize mVideoDecBuf;
@property(nonatomic) int mEngineChid; // @synthesize mEngineChid;
@property(nonatomic) struct IMVQQEngine *mMVEngine; // @synthesize mMVEngine;
@property(nonatomic) struct ITransportChannel *mTransChannel; // @synthesize mTransChannel;
@property(nonatomic) struct VOIPCSNetNotifier *mCSNetNotifier; // @synthesize mCSNetNotifier;
@property(nonatomic) struct VOIPNetNotifier *mNetNotifier; // @synthesize mNetNotifier;
@property(nonatomic) struct VoipCSChannelAdapter *mCSChannelAdapter; // @synthesize mCSChannelAdapter;
@property(nonatomic) struct VOIPChannelAdapter *mChannelAdapter; // @synthesize mChannelAdapter;
- (void)dealloc;
- (id)initForCustomerService;
- (id)init;

@end

