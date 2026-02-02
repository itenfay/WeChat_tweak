//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OMJExportManagerDelegate, OS_dispatch_queue;

@interface OMJExportManager : NSObject
{
    id <OMJExportManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    SharedPtr_c67bd272 _thumbnailLoader;
    SharedPtr_9102e06d _backingManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_9102e06d backingManager; // @synthesize backingManager=_backingManager;
@property(nonatomic) SharedPtr_c67bd272 thumbnailLoader; // @synthesize thumbnailLoader=_thumbnailLoader;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <OMJExportManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disableVideoFrameNotificationWithTaskID:(id)arg1;
- (void)enableVideoFrameNotificationWithTaskID:(id)arg1 notifyInterval:(double)arg2;
- (void)onDidUpdateVideoFrame:(SharedPtr_43d2f63a)arg1 taskID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setupExportStateDidChangeFunc;
- (id)allPausedTaskIDs;
- (id)allScheduledTaskIDs;
- (_Bool)isServicePaused;
- (void)resumeService;
- (void)pauseService;
- (id)startTaskWithID:(id)arg1;
- (id)pauseTaskWithID:(id)arg1;
- (id)cancelTaskWithID:(id)arg1;
- (id)taskWithClipBundleID:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 exportSettings:(id)arg3;
- (id)initWithBackingManager:(const void *)arg1;

@end

