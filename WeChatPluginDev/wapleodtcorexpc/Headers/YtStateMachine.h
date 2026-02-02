//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BaseState, NSLock, NSMutableArray, NSMutableDictionary, NSString, NSThread, UIView, YtEventData;
@protocol YtDeviceDelegate;

@interface YtStateMachine : NSObject
{
    struct _opaque_pthread_mutex_t stateLock;
    unsigned char isStarted;
    YtEventData *currentData;
    NSMutableArray *eventQueue;
    NSLock *eventLock;
    NSThread *eventHandleThread;
    unsigned char startEventHandler;
    unsigned long long timeTickPrev;
    unsigned long long totalDeltaTime;
    int timeTickCount;
    float _currentFrameLux;
    CDUnknownBlockType _onEventBlock;
    long long _workMode;
    id <YtDeviceDelegate> _cameraDevice;
    UIView *_shapeView;
    CDUnknownBlockType _onRequestBlock;
    BaseState *_currentState;
    NSString *_firstStateName;
    NSMutableDictionary *_stateMap;
}

+ (void)clearInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *stateMap; // @synthesize stateMap=_stateMap;
@property(retain, nonatomic) NSString *firstStateName; // @synthesize firstStateName=_firstStateName;
@property(retain, nonatomic) BaseState *currentState; // @synthesize currentState=_currentState;
@property(copy, nonatomic) CDUnknownBlockType onRequestBlock; // @synthesize onRequestBlock=_onRequestBlock;
@property(retain, nonatomic) UIView *shapeView; // @synthesize shapeView=_shapeView;
@property(nonatomic) float currentFrameLux; // @synthesize currentFrameLux=_currentFrameLux;
@property(nonatomic) id <YtDeviceDelegate> cameraDevice; // @synthesize cameraDevice=_cameraDevice;
@property(nonatomic) long long workMode; // @synthesize workMode=_workMode;
@property(copy, nonatomic) CDUnknownBlockType onEventBlock; // @synthesize onEventBlock=_onEventBlock;
- (void)cleanUpQueue;
- (void)eventHandler;
- (_Bool)isRunning;
- (void)sendCameraEvent:(id)arg1;
- (void)sendStateEvent:(id)arg1;
- (void)sendUIEvent:(id)arg1;
- (void)handleResume;
- (void)handlePause;
- (id)getStateByName:(id)arg1;
- (void)transitNextRound:(id)arg1;
- (void)transitNow:(id)arg1;
- (void)registerState:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)updateSDKSetting:(id)arg1;
- (void)update:(struct Mat)arg1;
- (void)update:(struct Mat)arg1 withDepth:(id)arg2;
- (void)stop;
- (void)reset;
- (void)start:(id)arg1 threadPriority:(float)arg2;
- (void)deInit;
- (id)init;

@end

