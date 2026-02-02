//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, WCEvent, WCState;

@interface WCTransition
{
    WCEvent *_event;
    WCState *_sourceState;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) WCState *sourceState; // @synthesize sourceState=_sourceState;
@property(readonly, nonatomic) WCEvent *event; // @synthesize event=_event;
- (id)description;
@property(readonly, nonatomic) WCState *destinationState;
- (id)initWithEvent:(id)arg1 fromState:(id)arg2 userInfo:(id)arg3;

@end

