//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface MMLiveFlowDelegatingActionBase
{
    NSMutableDictionary *_downstreamActions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *downstreamActions; // @synthesize downstreamActions=_downstreamActions;
- (void)invokeDownstreamWithName:(id)arg1 input:(id)arg2 flowInvocationContext:(id)arg3 currentActionInvocationContext:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)hasDownstreamActionWithName:(id)arg1;
- (void)addDownstreamAction:(id)arg1 withName:(id)arg2;
- (id)init;

@end

