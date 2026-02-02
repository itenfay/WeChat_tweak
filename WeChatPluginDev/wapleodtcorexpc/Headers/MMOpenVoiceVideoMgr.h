//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MMOpenVoiceVideoMgr : NSObject
{
    struct mutex mutex_;
    struct atomic<bool> ready_;
    unsigned int _logCnt;
    NSObject<OS_dispatch_queue> *_videoQueue;
    NSMutableDictionary *_views;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *views; // @synthesize views=_views;
@property(nonatomic) unsigned int logCnt; // @synthesize logCnt=_logCnt;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoQueue; // @synthesize videoQueue=_videoQueue;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (void)onVideoInterruptEnd:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)onVideoError:(id)arg1;
- (void)releaseAll;
- (void)updateGPUReslution:(int)arg1;
- (void)updateCaptureSize:(int)arg1;
- (void)getVideoSize:(id)arg1 got:(_Bool *)arg2 width:(unsigned int *)arg3 height:(unsigned int *)arg4;
- (id)getScreenSize:(id)arg1;
- (id)getVideoSize:(id)arg1;
- (void)updateMembers:(id)arg1;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 rotation:(int)arg6 isScreen:(_Bool)arg7;
- (void)removeView:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)updateView:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)insertView:(id)arg1 dic:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)exit;
- (void)setUp;
- (void)dealloc;
- (id)init;

@end

