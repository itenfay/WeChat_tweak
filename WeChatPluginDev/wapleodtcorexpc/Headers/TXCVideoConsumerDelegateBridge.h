//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TXCVideoConsumerDelegateBridge : NSObject
{
    void *_consumer;
    struct weak_ptr<liteav::video::VideoConsumer::Client> _client;
    void *_stats;
    NSObject<OS_dispatch_source> *_monitorTimer;
    NSObject<OS_dispatch_queue> *_monitorQueue;
    struct CGSize _resolution;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue; // @synthesize monitorQueue=_monitorQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *monitorTimer; // @synthesize monitorTimer=_monitorTimer;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (void)onCustomRenderVideoFrame:(id)arg1;
- (void)videoConsumer:(id)arg1 onError:(id)arg2;
- (void)videoConsumer:(id)arg1 onAppBecomeInactive:(_Bool)arg2;
- (void)videoConsumer:(id)arg1 onRenderFirstFrameInView:(id)arg2;
- (void)videoConsumer:(id)arg1 onRenderVideoFrame:(id)arg2 isFirst:(_Bool)arg3;
- (void)videoConsumer:(id)arg1 onDecoderTypeChanged:(struct DecoderProperty)arg2;
- (void)videoConsumer:(id)arg1 onDecodeVideoFrame:(id)arg2 cacheCount:(long long)arg3 isFirst:(_Bool)arg4;
- (void)clearState;
- (void)dealloc;
- (id)initWithConsumer:(void *)arg1 withClient:(shared_ptr_b57d0861)arg2 withStats:(void *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

