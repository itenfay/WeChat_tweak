//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, WXVoIPAudioHardwareSystemNotificationsLifelongObserverDelegate;

@interface WXVoIPAudioHardwareSystemNotificationsLifelongObserver : NSObject
{
    _Bool _isInterrupted;
    _Bool _isAPPActive;
    id <WXVoIPAudioHardwareSystemNotificationsLifelongObserverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property _Bool isAPPActive; // @synthesize isAPPActive=_isAPPActive;
@property _Bool isInterrupted; // @synthesize isInterrupted=_isInterrupted;
@property(nonatomic) __weak id <WXVoIPAudioHardwareSystemNotificationsLifelongObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateApplicationActiveState;
- (void)handleMediaServicesWereReset:(id)arg1;
- (void)handleMediaServicesWereLost:(id)arg1;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)handleApplicationWillResignActive:(id)arg1;
- (void)handleApplicationDidEnterBackground:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)dealloc;
- (void)observeSystemNotifications;
- (void)initAPPActiveState;
- (void)runAfter:(int)arg1 block:(CDUnknownBlockType)arg2;
- (void)syncRun:(CDUnknownBlockType)arg1;
- (void)asyncRun:(CDUnknownBlockType)arg1;
- (id)init:(id)arg1;

@end

