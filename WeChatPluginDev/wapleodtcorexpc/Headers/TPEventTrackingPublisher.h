//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, TPPlayerAdapter, TPPlayerEventPublisher;

@interface TPEventTrackingPublisher : NSObject
{
    TPPlayerEventPublisher *_publisher;
    TPPlayerAdapter *_playerAdapter;
    NSDictionary *_invocationHandlerTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *invocationHandlerTable; // @synthesize invocationHandlerTable=_invocationHandlerTable;
@property(retain, nonatomic) TPPlayerAdapter *playerAdapter; // @synthesize playerAdapter=_playerAdapter;
@property(retain, nonatomic) TPPlayerEventPublisher *publisher; // @synthesize publisher=_publisher;
- (id)handlerInvocationWithSEL:(SEL)arg1;
- (void)handleSelectTrack:(id)arg1;
- (void)handleSetPlaySpeedRatio:(id)arg1;
- (void)handleSeekTo:(id)arg1;
- (void)handleReleasePlayer:(id)arg1;
- (void)handleReset:(id)arg1;
- (void)handleStop:(id)arg1;
- (void)handlePause:(id)arg1;
- (void)handleStart:(id)arg1;
- (void)handlePrepareAsync:(id)arg1;
- (void)setupInvocationHandlerTable;
- (id)initWithAdapter:(id)arg1 publisher:(id)arg2;

@end

