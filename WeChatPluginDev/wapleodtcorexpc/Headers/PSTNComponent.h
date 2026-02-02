//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PSTNComponent : NSObject
{
    struct PSTNChannelAdapter *mChannelAdapter;
    struct PSTNNetNotifier *mNetNotifier;
    struct ITransportChannel *mTransChannel;
    struct IMVQQEngine *mMVEngine;
    int mEngineChid;
    struct VoIPRingBuffer *mAudioDecBuf;
}

@property(nonatomic) struct VoIPRingBuffer *mAudioDecBuf; // @synthesize mAudioDecBuf;
@property(nonatomic) int mEngineChid; // @synthesize mEngineChid;
@property(nonatomic) struct IMVQQEngine *mMVEngine; // @synthesize mMVEngine;
@property(nonatomic) struct ITransportChannel *mTransChannel; // @synthesize mTransChannel;
@property(nonatomic) struct PSTNNetNotifier *mNetNotifier; // @synthesize mNetNotifier;
@property(nonatomic) struct PSTNChannelAdapter *mChannelAdapter; // @synthesize mChannelAdapter;
- (void)dealloc;
- (id)init;

@end

