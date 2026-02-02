//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSRecursiveLock, WCState;
@protocol WCStateMachineDelegate;

@interface WCStateMachine
{
    NSRecursiveLock *_lock;
    _Bool _active;
    id <WCStateMachineDelegate> _delegate;
    WCState *_initialState;
    WCState *_currentState;
    NSMutableSet *_states;
    NSMutableSet *_events;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) NSMutableSet *events; // @synthesize events=_events;
@property(readonly, nonatomic) NSMutableSet *states; // @synthesize states=_states;
@property(retain, nonatomic) WCState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) WCState *initialState; // @synthesize initialState=_initialState;
@property(nonatomic) __weak id <WCStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
- (id)stateNamed:(id)arg1;
- (id)eventNamed:(id)arg1;
- (int)fireEvent:(id)arg1 userInfo:(id)arg2;
- (_Bool)canFireEvent:(id)arg1;
- (int)addEvent:(id)arg1;
- (int)addState:(id)arg1;
- (int)activate;
- (id)init;

@end

