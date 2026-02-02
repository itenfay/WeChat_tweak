//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCState;

@interface WCEvent
{
    NSString *_name;
    NSArray *_sourceStates;
    WCState *_destinationState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WCState *destinationState; // @synthesize destinationState=_destinationState;
@property(readonly, nonatomic) NSArray *sourceStates; // @synthesize sourceStates=_sourceStates;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)initWithName:(id)arg1 transitioningFromStates:(id)arg2 toState:(id)arg3;

@end

